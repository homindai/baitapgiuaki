// b�i 5   chen truc tiep de sap xep
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int x = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > x) {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = x;
    }
}

int main() {
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Mang ban dau: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
