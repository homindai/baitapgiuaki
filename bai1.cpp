//b�i 1 t�m kiem nhi phan
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
		int mid = (left + right) /2;
        if (arr[mid] == x)
            return mid;
        if (x > arr[mid] )
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int kq = binarySearch(arr, 0, n - 1, x);
    if (kq == -1)
        cout << "Khong tim thay " << x << " trong mang";
    else
        cout << "Tim thay " << x << " tai vi tri " << kq << " trong mang";
    return 0;
}
