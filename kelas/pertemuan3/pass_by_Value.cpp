#include <iostream>
using namespace std;

// Prosedur ini menerima nilai dari variable gajiSaya
void cobaUbahGaji(int gajiSaya) {
    gajiSaya = 1000000000; // Gaji di dalam prosedur
    cout << "Gaji pas di dalam fungsi: " << gajiSaya << endl;
}

int main() {
    int gajiSaya = 5000000; // Gaji di dalam main

    cout << "Gaji awal: " << gajiSaya << endl;

    cobaUbahGaji(gajiSaya); // Kirim ke fungsi

    cout << "Gaji setelah fungsi dipanggil: " << gajiSaya << endl;

    return 0;
}