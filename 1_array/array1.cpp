#include <iostream>
using namespace std;

int main() {
    float a[8] = {1, 13, 2, 10, 2.5, 1, 10, 10};

    // 1) CEK APAKAH TERURUT NAIK
    bool sorted = true; // anggap awalnya terurut
    for (int i = 0; i < 7; i++) { // cek sampai elemen kedua terakhir
        if (a[i] > a[i + 1]) { // jika ada penurunan...
            sorted = false; // ...berarti tidak terurut naik
            break;
        }
    }
    cout << "Terurut naik? " << endl;
    if (sorted) cout << "Ya\n";
    else cout << "Tidak\n";

    // 2) FREKUENSI SETIAP ANGKA
    cout << "\nFrekuensi:\n";
    for (int i = 0; i < 8; i++) {
        bool counted = false; // cek apakah nilai ini sudah dihitung
        for (int j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                counted = true;
                break;
            }
        }
        if (counted) continue; // skip kalau sudah pernah

        int cnt = 0;
        for (int j = 0; j < 8; j++) { // hitung kemunculan nilai a[i]
            if (a[j] == a[i]) cnt++;
        }
        cout << a[i] << " ada " << cnt << endl;
    }

    // 3) ARRAY b BERISI NILAI UNIK
    float b[8]; // maksimal 8 nilai unik
    int nB = 0; // banyaknya elemen unik di b

    for (int i = 0; i < 8; i++) {
        bool exist = false; // cek apakah a[i] sudah ada di b
        for (int j = 0; j < nB; j++) {
            if (b[j] == a[i]) {
                exist = true;
                break;
            }
        }
        if (!exist) { // jika belum ada, tambahkan ke b
            b[nB] = a[i];
            nB++;
        }
    }

    cout << "\nArray unik b: ";
    for (int i = 0; i < nB; i++)
        cout << b[i] << " ";
    cout << endl;

    return 0;
}
