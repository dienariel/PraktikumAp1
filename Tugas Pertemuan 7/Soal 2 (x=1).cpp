#include <iostream>

int main() {
    float a, b, c;


  std::cout << "Masukkan nilai a: ";
  std::cin >> a;
  std::cout << "Masukkan nilai b: ";
  std::cin >> b;
  std::cout << "Masukkan nilai c: ";
  std::cin >> c;

    int x = 1;
    int hasil =  6 * (a * x * x + b * x + c);

    std::cout << "Hasil perhitungan 6 * (ax^2 + bx + c) untuk x = 1 adalah: " << hasil << std::endl;

    return 0;
}
