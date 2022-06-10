//Diameter of a binary tree is defined as the maximum number of nodes in a any path...

// The idea here is to find the length of maximum left height of each node and maximum right node of each node
// Adding 1 to it, we get maximum number of nodes in any path passing through this node..
// We keep track of maximum result during our traversal


int res=0;
int height(Node *root) {
    if(root==NULL) return 0;
    
    int lh = height(root->left);
    int rh = height(root->right);
    
    res  = max(res, lh+rh+1);
    
    // Returning added one height to parent node...
    return 1+max(lh, rh);
}

int diameter(Node *root) {
    height(root);
    return res;
}
