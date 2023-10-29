#include <iostream>
using namespace std;

double meterToCentimeter(double meter) {
    return meter * 100.0;
}


double centimeterToMeter(double centimeter) {
    return centimeter / 100.0;
}

int main() {
    double panjangPitaMeter, panjangPerIkatanCm;
    int jumlahIkatan;

    cout << "Masukkan panjang pita (meter): ";
    cin >> panjangPitaMeter;
    cout << "Masukkan panjang per ikatan bunga rangkai (cm): ";
    cin >> panjangPerIkatanCm;

    double panjangPitaCm = meterToCentimeter(panjangPitaMeter);

    jumlahIkatan = static_cast<int>(panjangPitaCm / panjangPerIkatanCm);

    double sisaPitaCm = panjangPitaCm - jumlahIkatan * panjangPerIkatanCm;


    cout << "Jumlah ikatan bunga rangkai yang dapat dibuat: " <<         
    jumlahIkatan << " ikatan" << endl;
    cout << "Sisa pita yang tidak digunakan: " << sisaPitaCm << 
    "cm" << endl;

    return 0;
}
