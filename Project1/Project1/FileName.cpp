#include <iostream>
#include <stdlib.h>

using namespace std;

char GenerateInteger() {
    int random_number = rand() % (57 - 48 + 1) + 48;
    return (char)random_number;
}

char GenerateLittleLetter() {
    int random_number = rand() % (122 - 97 + 1) + 97;
    return (char)random_number;
}

char GenerateBigLetter() {
    int random_number = rand() % (90 - 65 + 1) + 65;
    return (char)random_number;
}

char GenerateSymbol() {
    int random_number = rand() % (47 - 33 + 1) + 33;
    return (char)random_number;
}
void GeneratePassword(int lenght = 8) {

    string password = "";

    for (int i = 0; i < lenght; i++) {
        int random_number = rand() % (4 - 1 + 1) + 1;

        if (random_number == 1) {
            password += GenerateInteger();
        }
        else if (random_number == 2) {
            password += GenerateLittleLetter();
        }
        else if (random_number == 3) {
            password += GenerateBigLetter();
        }
        else if (random_number == 4) {
            password += GenerateSymbol();
        }
    }

    cout << "Ваш пароль: " << password << endl;

}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    cout << "\t\t\t\t\tГенератор паролей" << endl << endl;

    int lenght;
    cout << "Введите длинну пароля: ";
    cin >> lenght;

    GeneratePassword(lenght);

    string end;
    cout << "Введите любую строку для продолжения...";
    cin >> end;

    return 0;
}