//Here we need to return the ceil node of given value...
//Ceil value implies the smallest value, larger than given value...
// If no node greater than given value exist, we return NULL...
Node *ceilVal(Node *root, int x) {
    Node *res=NULL;
    while(root!=NULL) {
        if(root->key == x) return root;
        else if(root->key < x) root = root->right;
        else {
            res = root;
            root = root->left;
        }
    }
    
    return res;
}
