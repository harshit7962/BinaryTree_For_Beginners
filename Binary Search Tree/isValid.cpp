//Given a binary tree, check if it is a valid binary search tree...

//The idea here is to use range of values that a particular child node must follow...
bool isValidBST(TreeNode* root, long left=(long)INT_MIN-1, long right=(long)INT_MAX+1) {
    if(root==NULL) return true;
    if(root->val<=left || root->val>=right) return false;
    
    return isValidBST(root->left, left, root->val)&&isValidBST(root->right,root->val, right);
}
