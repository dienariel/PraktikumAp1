#include <iostream>
using namespace std;

int sentinelLinearSearch(int arr[], int n, int key) {
    int i = 0;

    while (arr[i] != key) {
        
        i++;
    }

    
    arr[n - 1] = key;
  
    if (i < n - 1 || arr[n - 1] == key) {
        return i;  
    } else {
        
        return -1;
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Masukkan kunci pencarian: ";
    cin >> key;

    int result = sentinelLinearSearch(arr, n, key);

    if (result != -1) {
        cout << "Kunci ditemukan pada indeks: " << result << endl;
    } else {
        cout << "Kunci tidak ditemukan dalam array.\n";
    }

    return 0;
}
