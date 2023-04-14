// b�i 11 dem duong bang de quy

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;


int demSoDuong(float a[], int n) {
    if (n == 0) { 
        return 0;
    }
    int dem = demSoDuong(a, n-1);
    if (a[n-1] > 0) { 
        dem++; 
    }
    return dem;
}

int main() {
    float a[MAX_SIZE] = {1.2, -2.4, 3.6, -4.8, 5.0, 6.3};
    int n = 6;

    int soDuong = demSoDuong(a, n);
    cout << "So luong gia tri duong trong mang la: " << soDuong << endl;

    return 0;
}
