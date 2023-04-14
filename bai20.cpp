// b�i 20

#include <iostream>
using namespace std;

void sapXepTangDan(float a[], int n) {
    if (n <= 1) return;

    int min = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[min]) {
            min = i;
        }
    }

    swap(a[0], a[min]);

    sapXepTangDan(a + 1, n - 1);
}


int main() {
    float arr[] = {3.2, 5.6, 2.1, 7.8, 1.9, 4.5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sapXepTangDan(arr, n);
    
    cout << "Mang sau khi sap xep la: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
