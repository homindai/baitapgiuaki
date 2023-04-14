// b�i 19

#include <iostream>
using namespace std;


float tim_gia_tri_lon_nhat(float arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    
    float max_con = tim_gia_tri_lon_nhat(arr, n - 1);
   
    return max_con > arr[n - 1] ? max_con : arr[n - 1];
}

int main() {
    int n = 5;
    float arr[n] = {1.2, 4.5, 3.1, 6.7, 2.8};
    float max_value = tim_gia_tri_lon_nhat(arr, n);
    cout << "Gia tri lon nhat trong mang la: " << max_value << endl;
    return 0;
}
