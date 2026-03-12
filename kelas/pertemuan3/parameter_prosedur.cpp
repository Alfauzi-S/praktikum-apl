#include <iostream>
using namespace std;

// Bagian Definisi Prosedur
// Di sini 'namaHero', 'level', dan 'hp' adalah PARAMETER.
// Mereka hanyalah "variabel kosong" yang menunggu nilai.
void tampilkanStatus(string namaHero, int level, double hp) {
    cout << " = STATUS HERO =" << endl;
    cout << "Nama : " << namaHero << endl;
    cout << "Level : " << level << endl;
    cout << "Darah : " << hp << "%" << endl;
    cout << "===================" << endl;

    cout << endl;
}

int main() {
    // Bagian pengambilan argumen
    // Kasus 1: Mengirim nilai secara langsung
    // "Alucard", 15, dan 90.5 adalah argumen.
    tampilkanStatus("Alucard", 15, 90.5);

    // Kasus 2: Mengirim menggunakan variabel lain
    string hero2 = "Miya";
    int lvl2 = 12;
    double hp2 = 45.0;

    // Variabel 'hero2', 'lvl2', dan 'hp2' dikirim sebagai argumen
    tampilkanStatus(hero2, lvl2, hp2);

    return 0;
}