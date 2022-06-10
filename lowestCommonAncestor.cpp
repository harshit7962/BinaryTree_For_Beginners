//Given two node values, we need to return their lowest common ancestors...
bool isAncestor(Node *root, int a) {
    cout << root->key << endl;
    if(root==NULL) return false;
    if(root->key==a || root->left->key==a || root->right->key==a) return true;
    
    return (isAncestor(root->left, a) || isAncestor(root->right, a));
}

Node *LCA(Node *root, int a, int b) {
    if(root==NULL) return NULL;
    
    Node *curr1, *curr2;
    // cout << (isAncestor(root, a)) <<" "  << (isAncestor(root,b)) << endl;
    cout << (isAncestor(root, a) && isAncestor(root, b)) << endl;
    if(isAncestor(root, a) && isAncestor(root, b)) {
        curr1 = LCA(root->left, a, b);
        curr2 = LCA(root->right, a, b);
    } else return NULL;
    
    if(curr1==NULL && curr2==NULL) return root;
    if(curr1==NULL) return curr2;
    return curr1;
}
