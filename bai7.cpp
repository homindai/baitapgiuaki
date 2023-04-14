// b�i 7 sap xep cay ( heapsort )

#include <iostream>
using namespace std;

void XepCay(int a[], int n, int i) {
    int root = i; 
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    if (left < n && a[left] > a[root])
        root = left;
    
    if (right < n && a[right] > a[root])
        root = right;
    
    if (root != i) {
        swap(a[i], a[root]);
        XepCay(a, n, root);
    }
}

void SapXepCay(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        XepCay(a, n, i);
    
    for (int i = n - 1; i >= 0; i--) {
        swap(a[0], a[i]);
        XepCay(a, i, 0);
    }
}

int main() {
    int a[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(a) / sizeof(a[0]);
    
    cout << "Mang ban dau: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    
    SapXepCay(a, n);
    
    cout << "Mang da sap xep theo phuong phap sap xep cay: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    
    return 0;
}
