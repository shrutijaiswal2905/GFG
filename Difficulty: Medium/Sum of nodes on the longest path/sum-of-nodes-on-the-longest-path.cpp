/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
  
    int maxLen = 0;
    int maxSum = 0;

    void dfs(Node* node, int currLen, int currSum) {
        if (!node) return;

        currLen += 1;
        currSum += node->data;

        // If it is a leaf node
        if (!node->left && !node->right) {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxSum = currSum;
            } else if (currLen == maxLen) {
                maxSum = max(maxSum, currSum);
            }
        }

        dfs(node->left, currLen, currSum);
        dfs(node->right, currLen, currSum);
    }

    int sumOfLongRootToLeafPath(Node *root) {
        maxLen = 0;
        maxSum = 0;
        dfs(root, 0, 0);
        return maxSum;
    }
};