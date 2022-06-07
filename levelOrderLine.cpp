//Here we need to traverse the tree using level order traversal, but print each level in new line...

//Approach 1: Using a NULL tree to identify level break
void printLineLevel(Node *root) {
    if(root==NULL) return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1) {
        Node *curr = q.front();
        q.pop();
        if(curr==NULL) {
            cout << endl;
            q.push(NULL);
        } else {
            cout << curr->key << " ";
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
    }
}

//Approach 2: Using counter variable to identify level break
void printLineLevel2(Node *root) {
    if(root==NULL) return;
    queue<Node *> q;
    q.push(root);
    while(!q.empty()) {
        int c = q.size();
        for(int i=0;i<c;i++) {
            Node *curr = q.front();
            q.pop();
            cout << curr->key << " ";
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
        cout << endl;
    }
}
