//Height of the binary tree
int height(Node *root, int x) {
    if(root==NULL) return 0;
    
    return max(height(root->left), height(root->right))+1;
}
