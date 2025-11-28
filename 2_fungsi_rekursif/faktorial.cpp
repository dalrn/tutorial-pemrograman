#include <iostream>
using namespace std;

int factorial(int n){
    if (n > 1) {
        return n*factorial(n-1);
    }
    else return 1;
}

int main(){
    int N;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> N;

    if (N > 0) {
        cout << N << "! adalah " << factorial(N);
    }
    else cout << "Harap masukkan bilangan bulat positif.";

    return 0;
}