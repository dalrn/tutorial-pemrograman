// NOMOR 3 UAS 2021/2022 (Ingin dibuat program yang menghasilkan 1 jika 2 teks ...)

#include <iostream>
using namespace std;

// ide: untuk kedua teks, hitung jumlah kemunculan tiap huruf
// kalau huruf yang muncul sama dan jumlahnya juga sama, output 1
int main() {
    char s1[101], s2[101];

    // baca dua teks
    cin.getline(s1, 101); // getline -> cin tapi untuk lebih dari satu kata (satu baris)
    cin.getline(s2, 101);

    int f1[26] = {0}; // frekuensi huruf a-z untuk teks pertama
    int f2[26] = {0}; // frekuensi huruf a-z untuk teks kedua

    // hitung frekuensi huruf untuk s1
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == ' ') continue; // abaikan spasi
        char c = s1[i];
        if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a'; // ubah ke huruf kecil
        if (c >= 'a' && c <= 'z') // hanya huruf a-z yang dihitung
            f1[c - 'a']++;
    }

    // hitung frekuensi huruf untuk s2 (sama dengan sebelumnya)
    for (int i = 0; s2[i] != '\0'; i++) {
        if (s2[i] == ' ') continue;
        char c = s2[i];
        if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
        if (c >= 'a' && c <= 'z')
            f2[c - 'a']++;
    }

    // bandingkan frekuensi huruf
    bool sama = true;
    for (int i = 0; i < 26; i++) {
        if (f1[i] != f2[i]) {
            sama = false;
            break;
        }
    }

    if (sama) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}
