#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
      
        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] > key) {
            high = mid - 1;
        }
        
        else {
            low = mid + 1;
        }
    }
  
    return -1;
}

int main() {
    int n;

    cout << "Masukkan ukuran array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan elemen array (harus diurutkan):\n";
    for (int i = 0; i < n; i++) {
        cout << "indeks ke-" << i << ": ";
        cin >> arr[i];
    }

    int key;

    cout << "Masukkan kunci pencarian: ";
    cin >> key;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        cout << "Kunci ditemukan pada indeks: " << result << endl;
    } else {
        cout << "Kunci tidak ditemukan dalam array.\n";
    }

    return 0;
}
