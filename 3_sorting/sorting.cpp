#include <iostream>
using namespace std;

// Semua di-sort Ascending. Untuk Descending, hanya perlu ubah tanda ketidaksamaan (coba cari tahu sendiri)

// ---------- BUBBLE SORT ----------
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j]; // tukar kalau ada yang tidak sesuai urutan
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// ---------- SELECTION SORT ----------
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) { // cari elemen terbesar
            if (arr[j] < arr[minIndex]) {
                minIndex = j; 
            }
        }
        int temp = arr[i]; // swap
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// ---------- INSERTION SORT ----------
void insertionSort(int arr[], int n) {
    for (int j = 1; j < n; j++) {
        int temp = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > temp) { // geser ke kanan
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = temp; // sisipkan nilai
    }
}

// ---------- MERGE SORT ----------
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1; // ukuran subarray kiri
    int n2 = right - mid; // ukuran subarray kanan

    int L[n1], R[n2]; // array sementara

    for (int i = 0; i < n1; i++) // salin data ke array sementara
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // merge kembali ke array utama
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // jika masih ada elemen tersisa
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        // rekursi untuk subarray kiri dan kanan
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        // gabungkan keduanya
        merge(arr, left, mid, right);
    }
}

// ---------- QUICK SORT ----------
int partitionQuick(int arr[], int low, int high) {
    int pivot = arr[high];   // pilih elemen terakhir sebagai pivot
    int i = low - 1;         // indeks untuk elemen yang lebih kecil

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) { // jika elemen <= pivot, tukar
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp; // letakkan pivot pada posisi yang benar
    return i + 1; // posisi pivot setelah partisi
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partitionQuick(arr, low, high); // indeks pivot
        quickSort(arr, low, p - 1); // sort kiri
        quickSort(arr, p + 1, high); // sort kanan
    }
}

// ---------- FUNGSI BANTU CETAK ARRAY ----------
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int data[] = {5, 3, 7, 2, 0, 9, 4, 1, 8, 6}; // contoh data
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Data awal:\n";
    printArray(data, n);

    // Bubble Sort
    int a1[10];
    for (int i = 0; i < n; i++) a1[i] = data[i];
    bubbleSort(a1, n);
    cout << "Bubble Sort : ";
    printArray(a1, n);

    // Selection Sort
    int a2[10];
    for (int i = 0; i < n; i++) a2[i] = data[i];
    selectionSort(a2, n);
    cout << "Selection Sort : ";
    printArray(a2, n);

    // Insertion Sort
    int a3[10];
    for (int i = 0; i < n; i++) a3[i] = data[i];
    insertionSort(a3, n);
    cout << "Insertion Sort : ";
    printArray(a3, n);

    // Merge Sort
    int a4[10];
    for (int i = 0; i < n; i++) a4[i] = data[i];
    mergeSort(a4, 0, n - 1);
    cout << "Merge Sort : ";
    printArray(a4, n);

    // Quick Sort
    int a5[10];
    for (int i = 0; i < n; i++) a5[i] = data[i];
    quickSort(a5, 0, n - 1);
    cout << "Quick Sort : ";
    printArray(a5, n);

    return 0;
}
