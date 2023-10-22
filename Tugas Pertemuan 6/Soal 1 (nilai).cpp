#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int jumlah_data = 10;
    double data[jumlah_data];
    double total = 0.0;
    double nilai_terkecil = 0.0;
    double nilai_terbesar = 0.0;
    
    for (int i = 0; i < jumlah_data; i++) {
        cout << "Masukkan bilangan " << i + 1 << ": ";
        cin >> data[i];

        total += data[i];

        if (i == 0 || data[i] < nilai_terkecil) {
            nilai_terkecil = data[i];
        }

        if (i == 0 || data[i] > nilai_terbesar) {
            nilai_terbesar = data[i];
        }
    }

    
    double rata_rata = total / jumlah_data;

    cout << "=====================" << endl;
    cout << "Nilai Rata-rata  = " << fixed << setprecision(1) << rata_rata << endl;
    cout << "Nilai Terbesar   = " << nilai_terbesar << endl;
    cout << "Nilai Terkecil   = " << nilai_terkecil << endl;

    return 0;
}
