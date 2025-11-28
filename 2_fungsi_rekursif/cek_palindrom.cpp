#include <iostream>
using namespace std;

bool isPalindrome(char s[], int l, int r) {
    if (l >= r) return true; // batasan: kalau pengecekan sudah bertemu di tengah
    if (s[l] != s[r]) return false; // jika huruf plg kiri dan plg kanan beda, pasti bukan palindrom
    return isPalindrome(s, l + 1, r - 1); // rekursi ke bagian dalam (yg plg kiri geser satu huruf ke kanan, plg kanan geser satu huruf ke kiri)
}

int main() {
    // string itu basically sebuah array yang isinya character
    char word[100];

    cout << "Masukkan kata: ";
    cin >> word;

    // hitung panjang string
    int len = 0;
    for (int i = 0; word[i] != '\0'; i++) // iterasi sampai terminator string
        len++;

    if (isPalindrome(word, 0, len - 1))
        cout << "Palindrom\n";
    else
        cout << "Bukan palindrom\n";

    return 0;
}

