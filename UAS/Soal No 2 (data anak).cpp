#include <iostream>
using nnamespace std;
void bubbleSort(int arr[], int n) {
for (int i = 0; i < n-1; i++) {
for (int j = 0; j < n-i-1; j++) {
if (arr[j] < arr[j+1]) {

arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
}

int main() {
const int n = 5; 
int umur[n] = {25, 30, 22, 35, 28}; 
cout << "Umur sebelum diurutkan: ";
for (int i = 0; i < n; i++) {
cout << umur[i] << " ";
}


bubbleSort(umur, n);

cout << "\nUmur setelah diurutkan (dari tua ke muda): ";
for (int i = 0; i < n; i++) {
cout << umur[i] << " ";
}

return 0;
}