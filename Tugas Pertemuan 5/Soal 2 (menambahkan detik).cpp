#include <iostream>
using namespace std;

int main() {
    int jam = 0, menit = 0, detik = 0, detikTambah = 0;
    char karakter;
    int posisi = 0;

  cout << "Masukkan waktu dalam format jam:Menit:Detik: ";

    while (cin.get(karakter) && karakter != '\n') {
        if (karakter >= '0' && karakter <= '9') {
            int digit = karakter - '0';
            if (posisi == 0) {
                jam = jam * 10 + digit;
            } else if (posisi == 1) {
                jam = jam * 10 + digit;
            } else if (posisi == 3) {
                menit = menit * 10 + digit;
            } else if (posisi == 4) {
                menit = menit * 10 + digit;
            } else if (posisi == 6) {
                detik = detik * 10 + digit;
            } else if (posisi == 7) {
                detik = detik * 10 + digit;
            }
            posisi++;
        } else if (karakter == ':') {
            if (posisi == 2 || posisi == 5) {
                posisi++;
            } else {
                cerr << "Format waktu salah" << endl;
                return 1;
            }
        } else {
            cerr << "Format waktu salah" << endl;
            return 1;
        }
    }

    cout << "Masukkan jumlah detik yang ingin ditambahkan: ";
    cin >> detikTambah;

    int totalDetik = jam * 3600 + menit * 60 + detik + detikTambah;

    while (totalDetik < 0) {
        totalDetik += 24 * 3600;
    }

    jam = totalDetik / 3600;
    totalDetik %= 3600;
    menit = totalDetik / 60;
    detik = totalDetik % 60;

    cout << "Waktu setelah ditambahkan: ";
    if (jam < 10) cout << "0";
    cout << jam << ":";
    if (menit < 10) cout << "0";
    cout << menit << ":";
    if (detik < 10) cout << "0";
    cout << detik << endl;

    return 0;
}
