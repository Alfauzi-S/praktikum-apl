#include <iostream>
using namespace std;

int faktorialIteratif(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

int main() {
    cout << "5! = " << faktorialIteratif(5) << endl;
    return 0;
}