#include <iostream>

using namespace std;
int main() {

  double nilaiAkhir,nilaiTes, nilaiUTS, nilaiUAS, nilaiTugas;
  char indeksNilai;

  cout << "Masukan Nilai tes (0-100): ";
  cin >> nilaiTes;
  cout << "Masukan Nilai UTS (0-100): ";
  cin >> nilaiUTS;
  cout << "Masukan Nilai UAS (0-100): ";
  cin >> nilaiUAS;
  cout << "Masukan Nilai Tugas (0-100): ";
  cin >> nilaiTugas;

  nilaiAkhir = (nilaiTes*0.2) + (nilaiUTS*0.3) + (nilaiUAS*0.3)    + (nilaiTugas*0.2);
  
  if (nilaiAkhir <= 50) {
        indeksNilai = 'D';
    } else if (nilaiAkhir <= 70) {
        indeksNilai = 'C';
    } else if (nilaiAkhir <= 80) {
        indeksNilai = 'B';
    } else if (nilaiAkhir <=100){
        indeksNilai = 'A';
    } else  {
      indeksNilai = '?';
    
    }
      

  cout << "Nilai Akhir: " << nilaiAkhir << endl;
  cout << "Indeks Nilai: " << indeksNilai << endl;
  



  
}