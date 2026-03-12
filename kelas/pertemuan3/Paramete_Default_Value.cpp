#include <iostream>
using namespace std;

// 'kadarGula' punya nilai default "Normal"
// Parameter default wajib ditaruh paling kanan!
void pesankopi(string menu, string kadargula = "Normal") {
    cout << "Pesanan: " << menu << " | Gula: " << kadargula << endl;
}

int main() {
    // Kasus 1: pengguna mengirim 1 parameter
    pesankopi("Kopi Susu");

    // Kasus 2: pengguna mengirim 2 parameter dan menggantikan
    // parameter default dari prosedur
    pesankopi("Americano", "Less Sugar");

    return 0;
}