#include <iostream>
using namespace std;

void cekGenap(int angka) {
    if (angka % 2 == 0) {
        cout << angka << " adalah Genap." << endl;
        return; // Stop di sini, kode di bawah tidak dijalankan
    }
    // Kode ini hanya jalan kalau angka ganjil
    cout << angka << " adalah Ganjil." << endl;
}

int main() {
    cekGenap(4);
    cekGenap(7);
    return 0;
}