#include <iostream>

using namespace std;

/*
  You are given the root of a binary search tree (BST) and an integer val.
  Find the node in the BST that the node's value equals val and return the
  subtree rooted with that node. If such a node does not exist, return null.

  Example:
  Input: [4,2,7,1,3], 2
  Output: [2,1,3]
*/

struct Node {
  int value;
  Node *left;
  Node *right;
};

Node *createNode(int value) {
  Node *node = new Node();
  node->value = value;
  node->left = nullptr;
  node->right = nullptr;

  return node;
}

Node *search(Node *root, int target) {
  if (root == nullptr) {
    return NULL;
  }

  if (root->value == target) {
    return root;
  }

  Node *found = search(root->left, target);

  if (found) {
    return found;
  }

  return search(root->right, target);
}

int main() {
  Node *root = createNode(4);
  root->left = createNode(2);
  root->right = createNode(7);
  root->left->left = createNode(1);
  root->left->right = createNode(3);

  Node *result = search(root, 2);
  cout << result << endl;
  cin.get();
}
