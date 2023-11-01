#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double tabunganUSD, tabunganEuro, kursUSDToIDR, kursEuroToUSD, hargaMobilIDR;

    cout << "Masukkan jumlah tabungan dalam Dollar (USD): ";
    cin >> tabunganUSD;

    cout << "Masukkan jumlah tabungan dalam Euro: ";
    cin >> tabunganEuro;

    cout << "Masukkan kurs 1 US Dollar (USD) ke Rupiah (IDR): ";
    cin >> kursUSDToIDR;

    cout << "Masukkan kurs 1 Euro (EUR) ke US Dollar (USD): ";
    cin >> kursEuroToUSD;

    cout << "Masukkan harga mobil baru dalam Rupiah (IDR): ";
    cin >> hargaMobilIDR;

    
    double tabunganIDR = (tabunganUSD * kursUSDToIDR) + (tabunganEuro * kursUSDToIDR / kursEuroToUSD);

  double sisaDanaIDR = tabunganIDR - hargaMobilIDR;

    cout << "Total tabungan dalam Rupiah: Rp. " << fixed << setprecision(0) << tabunganIDR << endl;
    cout << "Sisa dana setelah membeli mobil: Rp. " << fixed << setprecision(0) << sisaDanaIDR << endl;

    return 0;
}
