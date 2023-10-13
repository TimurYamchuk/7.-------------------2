#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, string> dictionary;

int main() {
    int choice;
    string word, definition;

    while (true) {
        cout << "\nМеню:" << endl;
        cout << "1. Добавить/Обновить слово" << endl;
        cout << "2. Удалить слово" << endl;
        cout << "3. Поиск слова" << endl;
        cout << "4. Выйти" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Слово: ";
                cin >> word;
                cout << "Определение: ";
                cin.ignore();
                getline(cin, definition);
                dictionary[word] = definition;
                break;

            case 2:
                cout << "Слово для удаления: ";
                cin >> word;
                dictionary.erase(word);
                break;

            case 3:
                cout << "Слово для поиска: ";
                cin >> word;
                if (dictionary.find(word) != dictionary.end()) {
                    cout << "Слово: " << word << ", Значение: " << dictionary[word] << endl;
                } else {
                    cout << "Слово '" << word << "' не найдено в словаре." << endl;
                }
                break;

            case 4:
                cout << "Программа завершена." << endl;
                return 0;

            default:
                cout << "Неверный выбор. Пожалуйста, выберите действие снова." << endl;
                break;
        }
    }

    return 0;
}
