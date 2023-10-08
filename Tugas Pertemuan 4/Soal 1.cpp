#include <iostream>
using namespace std;

string arabToRoman(int num) {
    if (num <= 0 || num >= 4000) {
        return "Input tidak valid. Harap masukkan angka antara 1 dan 3999.";
    }

    string roman = "";
    string romanLetters[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int arabianNumbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    for (int i = 0; i < 13; i++) {
        while (num >= arabianNumbers[i]) {
            roman += romanLetters[i];
            num -= arabianNumbers[i];
        }
    }

    return roman;
}

int main() {
    int angkaArab;
    cout << "Masukkan angka Arab: ";
    cin >> angkaArab;

    string hasilKonversi = arabToRoman(angkaArab);
    cout << "Hasil konversi ke angka Romawi: " << hasilKonversi << endl;

    return 0;
}
