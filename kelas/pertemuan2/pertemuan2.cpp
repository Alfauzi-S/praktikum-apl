# include <iostream>
using namespace std;

int main() {

    // / Contoh deklarasi
    // int bilangan[5]; / Array integer, 5 elemen
    // string nama[4]; / Array string, 4 elemen
    // float nilai[10]; / Array float, 10 elemen
    // / Deklarasi + Inisialisasi langsung
    string buah[4] = {"Jeruk", "Mangga", "Nanas", "Apel"};
    // / Deklarasi array tanpa inisialisasi elemen array
    // int angka[3];
    // angka[0] = 10;
    // angka[1] = 19;
    // angka[2] = 30;


    buah[4] = "Rambutan";
    for (int i = 0; i < 5; i +) {
        cout << buah[i] << endl;
    }

    cout << buah[0] << endl;
    cout << angka[2] << endl;
    cout << endl;

    for (string x : buah) {
        cout << x << endl;
    }

    // int angka[5] = {10, 20, 30, 40, 50};
    // / sizeof(angka) = 20 bytes (5 elemen × 4 bytes per int)
    // / sizeof(angka[0]) = 4 bytes (1 elemen int)
    // int panjang = sizeof(angka) / sizeof(angka[0]);
    // cout < "Panjang array: " < panjang < endl;

//     int matriks[3][3] = {

//     {1, 2, 3}, / Baris ke-0
//     {4, 5, 6}, / Baris ke-1
//     {7, 8, 9} / Baris ke-2

//     };
//     / Mengakses elemen
//     cout < matriks[0][1] < endl;
//     cout < matriks[2][0] < endl;
//     / Menampilkan seluruh matriks dengan nested loop
//     for (int i = 0; i < 3; i +) { / Loop baris
//     for (int j = 0; j < 3; j +) { / Loop kolom
//     cout < matriks[i][j] < " ";
//     }
//     cout < endl;
//     }
//     for (auto &baris : matriks) { / Iterasi setiap baris (array 1D)
//     for (auto &elemen : baris) { / Iterasi setiap elemen dalam baris
//     cout < elemen < " ";
//     }
//     cout < endl;
//     }

    // int nilai[2][2][2] = {
    // { {80, 85}, {75, 90} }, / Kelas A
    // { {88, 92}, {70, 78} } / Kelas B
    // };
    // cout < " = DATA NILAI MAHASISWA =\n\n";
    // for (int k = 0; k < 2; k +) {
    // cout < "Kelas " < char('A' + k) < endl;
    // for (int m = 0; m < 2; m +) {
    // cout < " Mahasiswa " < m + 1 < endl;
    // cout < " UTS : " < nilai[k][m][0] < endl;
    // cout < " UAS : " < nilai[k][m][1] < endl;
    // }
    // cout < endl;
    // }
    // return 0;

    // struct Mahasiswa {
    //     int nim;
    //     string nama;
    //     float nilai;
    // };

    // typedef struct {
    //     int nim;
    //     string nama;
    //     float nilai;
    // } Mahasiswa;

    // struct date {
    // int month;
    // int day;
    // int year;
    // };
    // struct mahasiswa{
    // string name;
    // struct date birthday;
    // };
    // struct mahasiswa mhs[10];
    // mhs[0].name = "Ihsan";
    // mhs[0].birthday.day = 30;
    // mhs[0].birthday.month = 1;
    // mhs[0].birthday.year = 2007;
}