#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int jumlah_barang = 3;
    vector<int> harga_barang;
    vector<int> jumlah_terjual;
    vector<int> total_per_item;

    for (int i = 0; i < jumlah_barang; ++i) {
        int harga, jumlah;

        cout << "Masukkan harga item " << i + 1 << ": ";
        cin >> harga;
        harga_barang.push_back(harga);

        cout << "Masukkan jumlah terjual untuk item " << i + 1 << ": ";
        cin >> jumlah;
        jumlah_terjual.push_back(jumlah);

        total_per_item.push_back(harga * jumlah);
    }

    int total_penjualan = 0;
    for (int i = 0; i < jumlah_barang; ++i) {
        total_penjualan += total_per_item[i];
    }

    int index_barang_terlaku = 0;
    for (int i = 1; i < jumlah_barang; ++i) {
        if (jumlah_terjual[i] > jumlah_terjual[index_barang_terlaku]) {
            index_barang_terlaku = i;
        }
    }

    cout << "\nAkhir Laporan Penjualan Harian:" << endl;
    cout << "=================================" << endl;
    for (int i = 0; i < jumlah_barang; ++i) {
        cout << "Item " << i + 1 << " - Harga: " << harga_barang[i]
             << ", Terjual: " << jumlah_terjual[i] << ", Total: " << total_per_item[i] << endl;
    }
    cout << "---------------------------------" << endl;
    cout << "Total Penjualan Harian: Rp. " << total_penjualan << endl;
    cout << "Item paling laku: Item " << index_barang_terlaku + 1
         << " - Terjual: " << jumlah_terjual[index_barang_terlaku] << endl;

    return 0;
}
