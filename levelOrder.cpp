//Here we need to follow Breadth First Search...
//We use a FIFO queue here to implement the function
void printLevel(Node *root) {
    if(root==NULL) return;
    queue<Node *> q;
    q.push(root);
    while(!q.empty()) {
        cout << q.front()->key << " ";
        Node *curr = q.front();
        q.pop();
        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right);
    }
}
