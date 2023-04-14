// b�i 21
#include <iostream>
using namespace std;

int tinhTich(int n) {
    if (n == 1) { 
        return 1;
    }
    else {
        return n * tinhTich(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "T(" << n << ") = " << tinhTich(n) << endl;
    return 0;
}
