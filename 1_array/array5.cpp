// NOMOR 4 UTS 2023/2024 (perhatikan permasalahan berikut dengan seksama, kemudian buatlah suatu...)

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // minta jumlah hari

    int a[100]; // N maksimal 100 (dari soal)
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int countDown = 0; // hitung berapa kali turun

    for (int i = 1; i < N; i++) {  // mulai dari hari ke-2
        if (a[i] < a[i - 1]) { // jika hari ini < hari kemarin, berarti turun
            countDown++; // tambahkan jumlah penurunan
        }
    }

    cout << countDown << endl; // output jumlah penurunan
    return 0;
}
