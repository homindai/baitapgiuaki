// b�i 8  stack

#include <iostream>
using namespace std;

const int MAX_SIZE = 6; // k�ch thu?c c?a stack

int stack[MAX_SIZE]; // kh?i t?o stack b?ng m?ng
int top = -1; // kh?i t?o gi� tr? top ban d?u

// h�m ki?m tra stack r?ng
bool kiemTraRong() {
    return (top == -1);
}

// h�m ki?m tra stack d?y
bool kiemTraDay() {
    return (top == MAX_SIZE - 1);
}

// h�m th�m ph?n t? v�o stack
void them(int x) {
    if (kiemTraDay()) {
        cout << "Stack da day, khong the them phan tu.\n";
    } else {
        top++;
        stack[top] = x;
    }
}

// h�m l?y gi� tr? top c?a stack
int layTop() {
    if (kiemTraRong()) {
        cout << "Stack rong, khong the lay gia tri top.\n";
        return -1;
    } else {
        return stack[top];
    }
}

// h�m l?y v� x�a gi� tr? top c?a stack
int layVaXoaTop() {
    if (kiemTraRong()) {
        cout << "Stack rong, khong the lay va xoa gia tri top.\n";
        return -1;
    } else {
        int x = stack[top];
        top--;
        return x;
    }
}

// h�m in c�c ph?n t? trong stack
void inStack() {
    cout << "Cac phan tu trong stack la:\n";
    while (!kiemTraRong()) {
        cout << layVaXoaTop() << " ";
    }
    cout << endl;
}

int main() {
    // nh?p v�o stack 6 ph?n t?
    them(41);
    them(23);
    them(4);
    them(14);
    them(56);
    them(1);

    // xu?t gi� tr? top ra kh?i stack
    cout << "Gia tri top cua stack la: " << layTop() << endl;

    // in c�c ph?n t? trong stack c�n l?i
    inStack();

    return 0;
}
