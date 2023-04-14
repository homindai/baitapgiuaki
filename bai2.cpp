//b�i 2 tim kiem tuyen tinh

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = linearSearch(arr, n, x);
    if (result == -1)
        cout << "Khong tim thay " << x << " trong mang";
    else
        cout << "Tim thay " << x << " tai vi tri " << result << " trong mang";
    return 0;
}
