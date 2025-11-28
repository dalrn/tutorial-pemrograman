#include <iostream>
using namespace std;

// kembalikan suku ke-n deret Fibonacci secara rekursif
int fibonacci(int n) {
    if (n == 0) return 0; // batasan 1: F0 = 0
    if (n == 1) return 1; // batasan 2: F1 = 1
    // suku lain adalah jumlah dua suku sebelumnya
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Masukkan n: ";
    cin >> n;

    cout << "Fibonacci ke-" << n << " : " << fibonacci(n) << endl;
    return 0;
}
