#include <iostream>

using namespace std;

int main() {
    int banyak_baris;

    cout << "Masukkan banyaknya baris: ";
    cin >> banyak_baris;

    for (int i = 1; i <= banyak_baris; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
