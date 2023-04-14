// bai 17


#include <iostream>
using namespace std;

double TinhTong(double a[], int n) {
    if (n == 0) {
        return 0;
    }
    return TinhTong(a, n - 1) + a[n - 1];
}

int main() {
    double a[] = {1.5, 2.0, 3.0, 4.5, 5.0, 6.0};
    int n = sizeof(a) / sizeof(a[0]);
    double tong = TinhTong(a, n);
    cout << "Tong cac gia tri trong mang la: " << tong << endl;
    return 0;
}
