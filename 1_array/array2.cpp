// NOMOR 2 UAS 2022/2023 (write a function to get a maximum of each ....)

#include <iostream>
using namespace std;

int main(){

    int panjang;
    cout << "Masukkan ukuran array: ";
    cin >> panjang;

    int arr1[panjang], arr2[panjang], output[panjang];

    cout << "Isi array pertama:" << endl;
    for (int i = 0; i < panjang; i++) {
        cin >> arr1[i];
    }

    cout << "Isi array kedua:" << endl;
    for (int i = 0; i < panjang; i++) {
        cin >> arr2[i];
    }

    // hitung maksimum elemen per indeks
    for (int i = 0; i < panjang; i++) {
        if (arr1[i] >= arr2[i])
            output[i] = arr1[i];
        else
            output[i] = arr2[i];
    }

    // tampilkan hasil
    cout << "Array hasil (maksimum tiap elemen): ";
    for (int i = 0; i < panjang; i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}
