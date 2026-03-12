#include <iostream>
using namespace std;

// Variabel global
int skorTertinggi = 100;

void cetakSkor() {
    // Fungsi ini akan membaca variabel global skorTertinggi
    cout << "Skor Fungsi: " << skorTertinggi << endl;
}

int main() {
    cout << "Skor: " << skorTertinggi << endl;
    cetakSkor();
    return 0;
}