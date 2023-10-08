#include <iostream>
using namespace std;

int main() {
    string namaKaryawan;
    int totalBonus = 0;

    cout << "Masukkan nama karyawan: ";
    cin >> namaKaryawan;

    int tipeRumah, jumlahTerjual;

    cout << "Masukkan tipe rumah (45,54,70): ";
    cin >> tipeRumah;
    cout << "Masukkan jumlah rumah yang terjual: ";
    cin >> jumlahTerjual;

    if (tipeRumah == 45) {
        if (jumlahTerjual > 5) {
            totalBonus = jumlahTerjual * 500000;
        } else if (jumlahTerjual >= 1) {
            totalBonus = jumlahTerjual * 250000;
        }
    } else if (tipeRumah == 54) {
        if (jumlahTerjual > 5) {
            totalBonus = jumlahTerjual * 1000000;
        } else if (jumlahTerjual >= 1) {
            totalBonus = jumlahTerjual * 500000;
        }
    } else if (tipeRumah == 70) {
        if (jumlahTerjual > 5) {
            totalBonus = jumlahTerjual * 1250000;
        } else if (jumlahTerjual >= 1) {
            totalBonus = jumlahTerjual * 1000000;
        }
    }

    cout << "Total Bonus yang diterima " << namaKaryawan << " = Rp. " << totalBonus << endl;

    return 0;
}
