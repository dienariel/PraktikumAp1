#include <iostream>
using namespace std;

int main () {
  int n;
  cout << "masukan panjang pola: ";
  cin >> n;

  for (int i = n; i >= 0; i--) {
    for (int s = n; s >= i; s--) {
      cout << " ";
    }
    for (int r = 0; r < i; r++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}