/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        return countLeaves(root->left)+countLeaves(root->right);
    }
};