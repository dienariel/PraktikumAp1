#include <iostream>
using namespace std;
struct Anak {
    
    string nama;
    int tanggal;
    int bulan;
    int tahun;
};

void swap(Anak& a, Anak& b) {
    Anak temp = a;
    a = b;
    b = temp;
}

void sortDataByTahun(Anak data_anak[], const int jumlah_data) {
    for (int i = 0; i < jumlah_data - 1; ++i) {
        for (int j = 0; j < jumlah_data - i - 1; ++j) {
            if (data_anak[j].tahun > data_anak[j + 1].tahun) {
                swap(data_anak[j], data_anak[j + 1]);
            }
        }
    }
}

int main() {
    const int jumlah_data_max = 20;
    Anak data_anak[jumlah_data_max];

    int jumlah_data = 0;

    while (jumlah_data < jumlah_data_max) {
        cout << "Masukkan data anak ke-" << jumlah_data + 1 << ":\n";
       cout << "Nama: ";
       cin >> data_anak[jumlah_data].nama;
        cout << "Tanggal Lahir (DD MM YYYY): ";
        cin >> data_anak[jumlah_data].tanggal >> data_anak[jumlah_data].bulan >> data_anak[jumlah_data].tahun;


        ++jumlah_data;

        char lanjut;
        cout << "Input data anak lagi? (y/n): ";
        cin >> lanjut;

        if (lanjut == 'n' || lanjut == 'N') {
            break;
        }
    }

    cout << "\nData Anak dengan Tahun Lahir 2020:\n";
    for (int i = 0; i < jumlah_data; ++i) {
        if (data_anak[i].tahun == 2020) {
          cout << i + 1 << ". Nama: " << data_anak[i].nama << ", Tanggal Lahir: "
                 << data_anak[i].tanggal << "/" << data_anak[i].bulan << "/" << data_anak[i].tahun << "\n";
        }
    }

    sortDataByTahun(data_anak, jumlah_data);

    cout << "\nData Sebelum Diurutkan:\n";
    for (int i = 0; i < jumlah_data; ++i) {
        cout << i + 1 << ". Nama: " << data_anak[i].nama << ", Tanggal Lahir: "
             << data_anak[i].tanggal << "/" << data_anak[i].bulan << "/" << data_anak[i].tahun << "\n";
    }

    cout << "\nData Setelah Diurutkan berdasarkan Tahun Lahir:\n";
    for (int i = 0; i < jumlah_data; ++i) {
       cout << i + 1 << ". Nama: " << data_anak[i].nama << ", Tanggal Lahir: "
             << data_anak[i].tanggal << "/" << data_anak[i].bulan << "/" << data_anak[i].tahun << "\n";
    }

    return 0;
}
