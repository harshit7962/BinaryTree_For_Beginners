//Find the maximum value of our binary tree
int maxValue(Node *root){
    if(root==NULL) return 0;
    
    return max(max(root->key, maxValue(root->left)), max(root->key, maxValue(root->right)));
}
