#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int data) {
    if (root == NULL)
        return new Node(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

bool search(Node* root, int key) {
    if (root == NULL)
        return false;
    if (root->data == key)
        return true;
    if (key < root->data)
        return search(root->left, key);
    return search(root->right, key);
}

Node* minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left != nullptr)
        current = current->left;
    return current;
}
  
Node* deleteNode(Node* root, int key) {
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right ==NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    cout<<"Aditya Handa"<<endl<<"2334132"<<endl;
    Node* root = NULL;

    root = insert(root, 5);
    insert(root, 3);
    insert(root, 2);
    insert(root, 4);
    insert(root, 7);
    insert(root, 6);
    insert(root, 8);

    cout << "Inorder traversal (Sorted): ";
    inorder(root);
    cout << endl;

    cout << "Searching for 8: " << (search(root, 8) ? "Found" : "Not Found") << endl;

    root = deleteNode(root, 4);
    cout << "Inorder traversal after deleting 4: ";
    inorder(root);
    cout << endl;

    return 0;
}