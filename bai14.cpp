// bai 14 cau truc du lieu cua cay nhi phan
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BinaryTree {
private:
    Node* root;
public:
    BinaryTree() {
        root = NULL;
    }
    Node* getRoot() {
        return root;
    }
    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        if (root == NULL) {
            root = newNode;
            return;
        }
        Node* current = root;
        while (true) {
            if (value < current->data) {
                if (current->left == NULL) {
                    current->left = newNode;
                    return;
                }
                current = current->left;
            }
            else {
                if (current->right == NULL) {
                    current->right = newNode;
                    return;
                }
                current = current->right;
            }
        }
    }
};
int main() {
    BinaryTree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(1);
    tree.insert(9);
    return 0;
}
