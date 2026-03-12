#include <iostream>
using namespace std;

// Perhatikan tanda '&' di sebelah parameter
void tukarsenjata(string &senjata) {
    senjata = "Sarung Wadimor"; // Langsung ganti isi variabel aslinya
}

int main() {
    string senjatahero = "Kayu Busuk";

    cout << "Senjata awal: " << senjatahero << endl;

    tukarsenjata(senjatahero); // Panggil prosedur

    // Variable dalam main akan ikut terubah
    cout << "Senjata sekarang: " << senjatahero << endl;

    return 0;
}