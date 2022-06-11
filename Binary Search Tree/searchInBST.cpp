//Here we need to check if a particular value is present in given BST..

// Method 1: Recursive
bool searchInBSTRec(Node *root, int target) {
    if(root==NULL) return false;
    if(root->val == target) return true;
    else if(root->val > target) return searchInBST(root->left, target);
    else return searchInBST(root->right, target);
}

//Method 2: Iterative
bool searchInBSTIter(Node *root, int target) {
    if(root==NULL) return false;
    Node *curr = root;
    while(curr!=NULL) {
        if(curr->val == target) return true;
        else if(curr->val > target) curr = curr->left;
        else curr = curr->right;
    }
    
    return false;
}
