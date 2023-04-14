// b�i 6 sap xep nhanh
#include <iostream>
using namespace std;
void quicksort(int a[], int left, int right) {
    int i = left, j = right;
    int pivot = a[(left + right) / 2];

    while (i <= j) {
        while (a[i] < pivot) {
            i++;
        }
        while (a[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (left < j) {
        quicksort(a, left, j);
    }
    if (i < right) {
        quicksort(a, i, right);
    }
}
int main() {
    int a[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(a) / sizeof(a[0]);

    quicksort(a, 0, n - 1);

    cout << "Mang da sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
