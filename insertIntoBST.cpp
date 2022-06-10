// We need to insert a target value into a BST, if it is not already present, and return root of original tree

//Method 1: Recursive
Node* insertIntoBSTRec(Node *root, int target) {
    if(root==NULL) {return new Node(target);}
    else if(root->key == target) break;
    else if(root->key > target) root->left = insertBST(target);
    else root->right = insertBST(target);
  
    return root;
}

//Method 2: Iterative
Node *insertIntoBSTIter(Node *root, int target) {
    Node *ist = new Node(target);
    if(root == NULL) {return ist;}
    
    Node *curr = root;
    while(curr!=NULL) {
        if(target == curr->key) break;
        else if(target < curr->key) {
            if(curr->left==NULL) {curr->left = ist; break;}
            else curr = curr->left;
        } else {
            if(curr->right==NULL) {curr->right = ist; break;}
            else curr = curr->Right;
        }
    }
    
    return root;
}
