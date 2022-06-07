// Here we need to print the tree as it is visible from left side of it...
//Method 1 - Recursive
static int maxlevel=0;
void leftView(Node *root, int level=1) {
    if(root==NULL) return;
    if(maxlevel<level) {cout << root->key << " "; maxlevel=level;}
    leftView(root->left, level+1);
    leftView(root->right, level+1);
}


//Method 2 - Iterative
void leftView(Node *root) {
    if(root==NULL) return;
    queue<Node *> q;
    q.push(root);
    while(!q.empty()) {
        int c = q.size();
        for(int i=0;i<c;i++) {
            Node *curr = q.front();
            q.pop();
            if(i==0) {cout << curr->key << " ";}
            if(curr->left != NULL) q.push(curr->left);
            if(curr->right!= NULL) q.push(curr->right);
        }
    }
}
