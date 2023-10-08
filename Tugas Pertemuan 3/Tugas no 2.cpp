#include <iostream>

using namespace std;

int main() {
    int bilangan1, bilangan2, bilangan3;

   
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    cout << "Masukkan bilangan ketiga: ";
    cin >> bilangan3;

   
    int bilanganMaksimal = bilangan1; 

    if (bilangan2 > bilanganMaksimal) {
        bilanganMaksimal = bilangan2; 
    }

    if (bilangan3 > bilanganMaksimal) {
        bilanganMaksimal = bilangan3; 
    }

  
    std::cout << "Bilangan yang paling maksimal adalah:" 
      << bilanganMaksimal << endl;

    
}
