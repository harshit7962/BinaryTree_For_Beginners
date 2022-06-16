//Given a node value, we need to delete it from BST, if it is present in BST, and return our root...

//Helper succcessor method, that return the next successor, (This is used only when right and left sub-trees are not null)
Node *successor(Node *root) {
    Node *curr = root->right;
    while(curr!=NULL && curr->left!=NULL) curr = curr->left;
    return curr;
}

// Primary Function
Node *deleteNode(Node *root, int target) {
    if(root==NULL) return root;
    if(root->val > target) root->left = deleteNode(root->left, target);
    else if(root->val < target) root->right = deleteNode(root->right, target);
    else {
        if(root->left == NULL) {
            Node *temp = root->right;
            delete root;
            return temp;
        } else if(root->right == NULL) {
            Node *temp = root->left;
            delete root;
            return temp;
        } else {
            Node *temp = successor(root);
            root->key = temp->key;
            root->right = deleteNode(root->right, temp->key);
        }
    }
    
    return root;
}
