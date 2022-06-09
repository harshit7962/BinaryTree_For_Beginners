//We are given inorder and preorder traversal of a tree and we need to construct that tree...

int preIndex=0;
Node *tree(int preorder[], int inorder[], int is, int ie) {
    // is---> starting index of inorder array
    // ie---> ending index of inorder array
    if(is>ie) return NULL;
  
    // Initialize the root to curr index of preorder array (indicated by preIndex)
    Node *root = new Node(preorder[preIndex++]);
    
  
    // Find the preorder correspondant index in inorder array...
    int inIndex;
    for(int i=is;i<=ie;i++) {
        if(inorder[i]==root->key) {inIndex=i;break;}
    }
    
  
    //All the elements to the left of this index lie in the left subtree of pre-node
    root->left = tree(preorder, inorder, is, inIndex-1);
  
    //All the elemeents to the right of this index lie in the right subtree of pre-node
    root->right = tree(preorder, inorder, inIndex+1, ie);
    
  
    //Return our root node...
    return root;
}
