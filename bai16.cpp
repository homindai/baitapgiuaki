// b�i 16

#include <iostream>
using namespace std;

double TongDuong(double a[], int n) {
    if (n == 0) {
        return 0;
    }
    double temp = TongDuong(a, n - 1);
    if (a[n - 1] > 0) {
        return temp + a[n - 1];
    }
    else {
        return temp;
    }
}

int main() {
    double a[] = {-1.5, 2.0, -3.0, 4.5, -5.0, 6.0};
    int n = sizeof(a) / sizeof(a[0]);
    double tongDuong = TongDuong(a, n);
    cout << "Tong cac gia tri duong trong mang la: " << tongDuong << endl;
    return 0;
}
