//Returning the size of a binary tree... Size of Binary Tree = Number of Nodes in it...
int sizeOfTree(Node *root) {
    if(root==NULL) return 0;
    
    return {1+sizeOfTree(root->left)+sizeOfTree(root->right)};
}
