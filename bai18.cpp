// bai 18

#include <iostream>
using namespace std;

bool KiemTraMangAm(double a[], int n) {
    if (n == 0) {
        return true;
    }
    if (a[n - 1] >= 0) {
        return false;
    }
    return KiemTraMangAm(a, n - 1);
}

int main() {
    double a1[] = {-1.5, -2.0, -3.0, -4.5, -5.0, -6.0};
    double a2[] = {-1.5, -2.0, -3.0, -4.5, -5.0, 6.0};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);
    bool kq1 = KiemTraMangAm(a1, n1);
    bool kq2 = KiemTraMangAm(a2, n2);
    if (kq1) {
        cout << "Mang a1 thoa man tinh chat toan gia tri am" << endl;
    }
    else {
        cout << "Mang a1 khong thoa man tinh chat toan gia tri am" << endl;
    }
    if (kq2) {
        cout << "Mang a2 thoa man tinh chat toan gia tri am" << endl;
    }
    else {
        cout << "Mang a2 khong thoa man tinh chat toan gia tri am" << endl;
    }
    return 0;
}
