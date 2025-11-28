#include <iostream>
using namespace std;

int main() {
    // ----- SEQUENTIAL (LINEAR) SEARCH UNTUK DATA MAHASISWA -----
    bool found = false;
    string key;

    struct Student {
        string studentID;
        string name;
        float score;
    };

    Student studentList[] = {
        {"10101", "Adi",   64.75},
        {"10103", "Budi",  75.11},
        {"10105", "Charli",84.63},
        {"10102", "Dodi",  77.07},
        {"10104", "Edi",   66.70}
    };

    cout << "Insert key of StudentID: ";
    cin >> key;

    for (int i = 0; i < 5; i++) {
        if (studentList[i].studentID == key) {
            found = true;
            cout << "Student ID: "   << studentList[i].studentID << endl;
            cout << "Student Name: " << studentList[i].name      << endl;
            cout << "Score: "        << studentList[i].score     << endl;
            break;
        }
    }

    if (!found) {
        cout << "The data is not found" << endl;
    }

    cout << "----------------------------------------" << endl;


    // ----- BINARY SEARCH UNTUK INTEGER BERURUTAN -----
    found = false;
    int data[] = {0,1,2,3,4,5,6,7,8,9}; // harus (ascending/descending), kalau belum di-sort dulu
    int i = 0;
    int j = sizeof(data) / sizeof(data[0]) - 1;
    int mid, keyInt;

    cout << "Insert key of data: ";
    cin >> keyInt;
    cout << endl;

    while (!found && i <= j) { // selama belum ketemu dan batas kiri (i) belum melewati batas kanan (j)...
        mid = (i + j) / 2; // hitung indeks tengah
        if (data[mid] < keyInt) {
            i = mid + 1; // jika nilai di tengah lebih kecil dari key, geser batas kiri ke kanan
        } else if (data[mid] == keyInt) {
            found = true; // jika nilai di tengah sama dengan key, berarti data ditemukan
        } else {
            j = mid - 1; // jika nilai di tengah lebih besar dari key, geser batas kanan ke kiri
        }
    }

    if (!found) {
        cout << "The data is not found" << endl;
    } else {
        cout << "The data is found" << endl;
    }

    return 0;
}
