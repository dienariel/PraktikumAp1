#include <iostream>
using namespace std;

int main() {
    
    int kondisiDaya = 3; 
    int dayaListrik;
    int acUsage = 800;
    int kulkasUsage = 200;
    int strikaUsage = 150;
    int mesinCuciUsage = 250;
    int lampuUsage = 250;
    int lainnyaUsage = 100;

    int totalPenggunaan = acUsage + kulkasUsage + strikaUsage + mesinCuciUsage + lampuUsage + lainnyaUsage;

    int totalPenggunaanBulanan = totalPenggunaan * 30;

    switch (kondisiDaya) {
        case 1:
            dayaListrik = 900;
            break;
        case 2:
            dayaListrik = 1300;
            break;
        case 3:
            dayaListrik = 2200;
            break;
        case 4:
            dayaListrik = 3500;
            break;
        default:
            cout << "Kondisi daya tidak valid." << endl;
            return 1;
    }

    double biayaPerKwh;
    switch (kondisiDaya) {
        case 1:
            biayaPerKwh = 1350.0;
            break;
        case 2:
            biayaPerKwh = 1440.0;
            break;
        case 3:
            biayaPerKwh = 1450.0;
            break;
        case 4:
            biayaPerKwh = 1500.0;
            break;
    }

    double biayaTotal = (static_cast<double>(totalPenggunaanBulanan) / 1000) * biayaPerKwh;

    cout << "Daya Listrik: " << dayaListrik << " VA" << endl;
    cout << "Rincian Penggunaan Listrik Tiap Hari:" << endl;
    cout << "AC: " << acUsage << " wh" << endl;
    cout << "Kulkas: " << kulkasUsage << " wh" << endl;
    cout << "Strika: " << strikaUsage << " wh" << endl;
    cout << "Mesin Cuci: " << mesinCuciUsage << " wh" << endl;
    cout << "Lampu-lampu: " << lampuUsage << " wh" << endl;
    cout << "Lainnya: " << lainnyaUsage << " wh" << endl;
    cout << "Total Penggunaan Listrik Tiap Bulan: " << totalPenggunaanBulanan << " wh" << endl;
    cout << "Biaya pembayaran listrik tiap bulan: Rp. " << biayaTotal << endl;

    return 0;
}
