bool childSum(Node *root) {
    if(root==NULL || (root->right==NULL && root->left==NULL)) return true;
    
    int l = (root->left==NULL)?0:root->left->val;
    int r = (root->right==NULL)?0:root->right->val;
    
    if(l+r != root->val) return false;
    return childSum(root->left) && childSum(root->right);
}
