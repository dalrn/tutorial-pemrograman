// NOMOR 2 UAS 2021/2022 (Di dalam sebuah kelas terdapat N mahasiswa ...)

#include <iostream>
using namespace std;

// ide: tiap kelompok berisi (N/K) atau (N/K)+1 orang
// lalu, sisa N mod K kelompok pertama mendapat 1 orang ekstra.

int main() {
    int N, K;
    cin >> N >> K; // jumlah mahasiswa dan kelompok

    int base = N / K; // jumlah minimal anggota tiap kelompok
    int extra = N % K; // sisa mahasiswa yang belum dikelompokkan

    // keluaran harus K bilangan urut dari kecil ke besar
    for (int i = 0; i < K; i++) {
        if (i < K - extra) // bbrp kelompok awal hanya dapat 'base'
            cout << base;
        else // tambahkan 'extra' untuk kelompok terakhir
            cout << base + 1;

        cout << " "; // spasi
    }
    return 0;
}
