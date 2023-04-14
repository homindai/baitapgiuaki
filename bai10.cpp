// b�i 10 tinh tong chan bang de quy

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;


int tinhTongChan(int a[], int n) {
    if (n == 0) { 
        return 0;
    }
    int tong = tinhTongChan(a, n-1);
    if (a[n-1] % 2 == 0) { 
        tong += a[n-1]; 
    }
    return tong;
}

int main() {
    int a[MAX_SIZE] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    int tongChan = tinhTongChan(a, n);
    cout << "Tong cac so chan trong mang la: " << tongChan << endl;

    return 0;
}
