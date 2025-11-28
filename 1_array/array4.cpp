// Tugas Praktikum Pemrograman 2024/2025 (slide 7 PPT tutorial)

#include <iostream>
using namespace std;

int main(){
    // memasukkan 2 array
    int panjang;
    cout << "Masukkan ukuran array: ";
    cin >> panjang;

    int arr1[panjang], arr2[panjang];

    cout << "Isi array pertama:"<<endl;
    for(int i = 0; i < panjang; i++){
        cin >> arr1[i];}

    cout << "Isi array kedua:"<<endl;
    for(int i = 0; i < panjang; i++){
        cin >> arr2[i];}

    // cari irisan
    int irisan[panjang], panjangirisan = 0;
    for(int i = 0; i < panjang; i++){
        for(int j = 0; j < panjang; j++){
            if(arr1[i] == arr2[j]){
                irisan[panjangirisan] = arr1[i];
                panjangirisan = panjangirisan + 1;
                break;}
        }
    }
    // tampilkan array irisan
    cout<<"Irisan:"<<endl;
    for(int i = 0; i < panjangirisan; i++){
        cout<<irisan[i]<<endl;
    }
}

