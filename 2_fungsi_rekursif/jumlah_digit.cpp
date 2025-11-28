#include <iostream>
using namespace std;

int sumDigits(int n) {
    if (n < 10) return n; // batasan: kalau hanya satu digit, berarti jumlahnya adalah digit itu sendiri
    int last = n % 10; // ambil digit terakhir
    return last + sumDigits(n / 10); // digit terakhir + jumlah digit sisanya
}

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;

    cout << "Jumlah semua digit = " << sumDigits(n) << endl;
    return 0;
}
