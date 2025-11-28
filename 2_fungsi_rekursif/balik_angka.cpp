#include <iostream>
using namespace std;

// ide: Idenya adalah mengambil digit terakhir dengan operasi sisa pembagian 10 (nmod10), lalu menghapus
// digit terakhir dengan pembagian bulat 10 (n/10) berulang kali.

int reverseNumber(int n, int result = 0) {
    if (n == 0) // kondisi batasan: tidak ada digit tersisa
        return result;

    int digit = n % 10; // ambil digit terakhir
    result = result * 10 + digit; // geser result ke kiri lalu tambah digit
    return reverseNumber(n / 10, result); // panggil lagi dengan sisa digit
}

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;

    // jika ingin dukung bilangan negatif
    bool negatif = (n < 0); // simpan tanda
    if (negatif) n = -n; // ubah ke positif dulu

    int dibalik = reverseNumber(n);

    if (negatif) dibalik = -dibalik; // kembalikan tanda jika perlu

    cout << "Hasil dibalik: " << dibalik << endl;
    return 0;
}
