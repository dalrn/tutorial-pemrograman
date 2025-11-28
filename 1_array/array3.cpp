//  NOMOR 5 UTS 2019/2020 (jika sebuah array menyimpan akumulasi jumlah pengunjung ...)

#include <iostream>
using namespace std;

int main(){
    int panjang;
    cout << "Masukkan ukuran array: ";
    cin >> panjang;

    int arr[panjang];

    cout << "Isi array:"<<endl;
    for(int i = 0; i < panjang; i++){
        cin >> arr[i];}

    for(int i = panjang-1; i > 0; i--){
        if(arr[i] > arr[i-1]){
            arr[i] = arr[i] - arr[i-1];
        }
    }

    cout << "Array kenaikan:"<<endl;
    for(int i = 0; i < panjang; i++){
        cout<<arr[i]<<endl;
    }

    float a[8] = {1, 13, 2, 10, 2.5, 1, 10, 10};

    bool sorted = true; // anggap terurut

    for (int i = 0; i < 7; i++) { // cek hingga elemen kedua terakhir
        if (a[i] > a[i + 1]) { // jika ada penurunan...
            sorted = false; // ...maka gak jadi terurut
            break;
        }
    }
    if (sorted) cout << "Ya" << endl;
    else cout << "Tidak" << endl;
}