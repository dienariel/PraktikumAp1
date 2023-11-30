#include <iostream>

void Seleksi(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}
int main() {
    const int maxSize = 13; 
    int data[maxSize];

    std::cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < maxSize; i++) {
        std::cin >> data[i];
    }

    Seleksi(data, maxSize);
    std::cout << "Data setelah diurutkan secara menurun:\n";
    for (int i = 0; i < maxSize; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
