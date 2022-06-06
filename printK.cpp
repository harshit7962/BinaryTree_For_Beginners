//Given a binary tree and an integer k, print all the nodes lying at depth k of the tree...
void printK(Node *root, int k) {
    if(root==NULL || x>k) return;
    if(k==0) {cout << (root->key) << " ";}
    printK(root->left, k-1);
    printK(root->right, k-1);
}
