#include <iostream>
using namespace std;

void calonJuara() {
    // Variabel lokal, cuma bisa dipakai di dalam fungsi ini
    string Team = "RRQ";
    cout << "Tim: " << Team << endl;
}

int main() {
    calonJuara(); // Fungsi berjalan normal
    // cout << "Tim: " << Team << endl;
    // Variabel Team tidak bisa diakses di sini
    return 0;
}