// bai 13 cho mang so thuc xuat mang bang de quy

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

int main() {
    float a[MAX_SIZE] = {1.2, -2.3, 3.4, -4.5, 5.6};
    int n = 5;

    int soDuong = demSoDuong(a, n);
    cout << "So luong gia tri duong trong mang: " << soDuong << endl;

    return 0;
}
