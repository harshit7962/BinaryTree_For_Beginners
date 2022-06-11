//Return the floor Node of a given value in a BST...
//Floor value is the largest value smaller than given value...
//If there is no value smaller than given value, we return NULL...

Node *floorVal(Node *root, int x) {
    if(root==NULL) return NULL;
    
    Node *curr = root, *res=NULL;
    while(curr!=NULL) {
        if(curr->key == x) return curr;
        else if(curr->key > x) curr = curr->left;
        else {
            res = curr;
            curr = curr->right;
        }
    }
    
    return res;
}
