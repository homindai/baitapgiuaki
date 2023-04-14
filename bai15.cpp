// bai 15 cau truc du lieu cua danh sach lien ket kep cac so nguyen
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DanhSachLienKetKep {
private:
    Node* head;
public:
    DanhSachLienKetKep() {
        head = NULL;
    }
    Node* LayDau() {
        return head;
    }
    void ChenVaoDau(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
    }
    void ChenVaoCuoi(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
            return;
        }
        Node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
        newNode->prev = last;
    }
    void XoaDau() {
        if (head == NULL) {
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
    void XoaCuoi() {
        if (head == NULL) {
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->prev->next = NULL;
        delete last;
    }
};

int main() {
    DanhSachLienKetKep list;

    list.ChenVaoDau(5);
    list.ChenVaoCuoi(7);
    list.ChenVaoDau(3);
    list.ChenVaoCuoi(9);

    cout << "Danh sach sau khi chen: ";
    Node* node = list.LayDau();
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;

    list.XoaDau();
    list.XoaCuoi();

    cout << "Danh sach sau khi xoa: ";
    node = list.LayDau();
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;

    return 0;
}

