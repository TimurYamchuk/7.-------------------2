#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class Stack {
private:
    Node* top; 

public:
    Stack() : top(nullptr) {}

    
    void push(int value) {
        Node* newNode = new Node(value);
        if (top) {
            newNode->next = top;
            top->prev = newNode;
        }
        top = newNode;
    }

    void pop() {
        if (top) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    
    int peek() {
        if (top) {
            return top->data;
        }
        
        return 0;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top of stack: " << stack.peek() << endl;
    stack.pop();

    if (stack.isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}
