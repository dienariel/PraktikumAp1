#include <iostream>

using namespace std;

int main() {
    double a, b, hasil;
    char Operator;

    cout << "Masukkan operan pertama: ";
    cin >> a;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> Operator;

    cout << "Masukkan operan kedua: ";
    cin >> b;

    if (Operator == '+') {
        hasil = a + b;
    } else if (Operator == '-') {
        hasil = a - b;
    } else if (Operator == '*') {
        hasil = a * b;
    } else if (Operator == '/') {
        if (b != 0) {
            hasil = a / b;
        } else {
      
        cout << "Pembagian dengan nol tidak diizinkan." << endl;
               }
    } else {
        cout << "Operator tidak valid." << std::endl;
        
    }

    cout << "Hasil operasi: " << hasil << std::endl;

    
}
