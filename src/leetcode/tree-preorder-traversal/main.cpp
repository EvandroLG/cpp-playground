#include <iostream>
#include <vector>

using namespace std;

/*
  Given the root of an n-ary tree, return the preorder traversal of its nodes'
  values. Nary-Tree input serialization is represented in their level order
  traversal. Each group of children is separated by the null value (See
  examples).

  Example:
  Input: [1,null,3,2,4,null,5,6]
  Output: [1,3,5,6,2,4]
*/

class Node {
public:
  int val;
  vector<Node *> children;
  Node() {}
  Node(int _val) { val = _val; }

  Node(int _val, vector<Node *> _children) {
    val = _val;
    children = _children;
  }
};

void traverse(Node *node, vector<int> &array) {
  if (node == nullptr) {
    return;
  }

  array.push_back(node->val);

  for (unsigned int i = 0; i < node->children.size(); i++) {
    traverse(node->children[i], array);
  }
}

vector<int> preorder(Node *root) {
  vector<int> output;
  traverse(root, output);
  return output;
}

int main() {
  vector<Node *> children;
  children.push_back(new Node(2));
  children.push_back(new Node(3));
  children.push_back(new Node(4));
  children.push_back(new Node(5));
  Node *root = new Node(1, children);

  preorder(root);
  cin.get();
}
