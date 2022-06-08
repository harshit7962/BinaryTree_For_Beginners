//We need to check if a binary tree is balanced, a binary tree is balanced if height of left subtree and right subtree for every node differs at max by 1...
bool isBalanced(Node *root) {
    return balanced(root)!=-1;
}

//It returns height of each node, if that node is not balanced, it returns -1...
int balanced(Node *root) {
    if(root==NULL) return 0;
    int lh=balanced(root->left);
    if(lh==-1) return -1;
    int rh=balanced(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return max(lh, rh)+1;
    
}
