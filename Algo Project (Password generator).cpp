#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string generatePassword(int length) {
    const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+";
    const int charsetLength = charset.length();

    srand(static_cast<unsigned int>(time(0)));
    string password;

    for (int i = 0; i < length; ++i) {
        int index = rand() % charsetLength;
        password += charset[index];
    }

    return password;
}

int main() {
    int passwordLength;

    cout << "Enter the length of the password: ";
    cin >> passwordLength;

    if (passwordLength <= 0) {
        cout << "Password length should be greater than 0." << endl;
        return 1;
    }

    string password = generatePassword(passwordLength);

    cout << "Generated Password: " << password << endl;

    return 0;
}


