// b�i 12 xuat mang bang de quy

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void xuatMang(int a[], int n) {
    if (n == 0) { 
        return;
    }
    xuatMang(a, n-1);
    cout << a[n-1] << " ";
}

int main() {
    int a[MAX_SIZE] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    xuatMang(a, n);

    return 0;
}
