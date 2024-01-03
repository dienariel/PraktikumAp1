#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

string enkripsiPassword(string password) {
    string encryptedPassword = "";
    for (char c : password) {
        if (isalpha(c)) {
            char encryptedChar = c + 2;
            if (islower(c) && encryptedChar > 'z') {
                encryptedChar -= 26;
            } else if (isupper(c) && encryptedChar > 'Z') {
                encryptedChar -= 26;
            }
            encryptedPassword += encryptedChar;
        } else if (isdigit(c)) {
            int digit = c - '0';
            int encryptedDigit = digit * 2;
            if (encryptedDigit > 9) {
                encryptedDigit -= 10;
            }
            encryptedPassword += to_string(encryptedDigit);
        }
    }
    return encryptedPassword;
}

int main() {
    string password;
    cout << "Masukkan password (Harus 8 karakter, kombinasi huruf besar/kecil dan angka, tidak boleh karakter berulang): ";
    cin >> password;

    
    if (password.length() != 8) {
        cout << "Password harus terdiri dari 8 karakter." << endl;
        return 0;
    }

    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;

    for (char c : password) {
        if (islower(c)) {
            hasLower = true;
        } else if (isupper(c)) {
            hasUpper = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        }

        if (count(password.begin(), password.end(), c) > 1) {
            cout << "Password mengandung karakter berulang." << endl;
            return 0;
        }
    }

    if (!(hasLower && hasUpper && hasDigit)) {
        cout << "Password harus terdiri dari kombinasi huruf besar/kecil dan angka." << endl;
        return 0;
    }

    
    string encryptedPassword = enkripsiPassword(password);
    cout << "Password yang dimasukkan: " << password << endl;
    cout << "Password yang tersimpan (setelah enkripsi): " << encryptedPassword << endl;

    return 0;
}