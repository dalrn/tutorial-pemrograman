// NOMOR 4 RESPONSI 2021/2022 (Gana, anak dari Pak Gama, sedang belajar perkalian...)

#include <iostream>
using namespace std;

void kaliDua(int nilai) {
    cout << nilai << endl;

    if (nilai >= 1000) {// batasan: berhenti ketika mencapai 1000
        cout << "Menyerah";
        return;
    }

    int next = nilai * 2; // kalikan dengan 2
    kaliDua(next); // panggil lagi untuk nilai berikutnya
}

int main() {
    int awal;
    cout << "Masukkan nilai awal: ";
    cin >> awal;

    kaliDua(awal);
    return 0;
}
