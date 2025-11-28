// NOMOR 1 UAS 2023/2024 (untuk tujuan pemasaran, PT. Maju Bersama ...)

#include <iostream>
using namespace std;

// data alamat rumah
struct Address {
    string street; // jalan
    string city; // kota
    string province; // provinsi
    string postalCode; // kode pos (bisa ada huruf, jadi string)
    string country; // negara
};

// data pelanggan lengkap
struct Customer {
    string fullName; // nama lengkap
    int    customerID; // ID pelanggan (bilangan bulat)
    char   gender; // jenis kelamin, misal 'L' atau 'P'
    Address homeAddr; // alamat rumah (pakai struct Address)
    string email; // alamat email
    string phoneNumber; // nomor ponsel (pakai string supaya nol di awal tidak hilang)
};

int main() {
    Customer customers[1000]; // array untuk 1000 pelanggan
    // (apa yang mau dilakukan dengan struct-nya)
    return 0;
}
