#include <iostream>
using namespace std;
// basic structure
struct Node {
  int key;
  Node *left;
  Node *right;
  Node(int x) {
    key = x;
    left = right = NULL;
  }
};

void displaytree(Node *ROOT) {
  if (ROOT != NULL) {
    displaytree(ROOT->left);
    cout << ROOT->key << " ";
    displaytree(ROOT->right);
  }
}

int main() {
  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->right->left = new Node(40);
  root->right->right = new Node(50);
  displaytree(root);
}
