//Given a BST, return if any two nodes of BST sums to a given value
bool hasPairSum(Node *root, int sum) {
    if(root==NULL) return false;
    unordered_set<int> st;
    queue<Node *> q;
    q.push(root);
    while(!q.empty()) {
        int c = q.size();
        for(int i=0;i<c;i++) {
            Node *curr = q.front();
            q.pop();
            if(st.count(sum-curr->key)>0) return  true;
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
            st.insert(curr->key);
        }
    }
    
    return false;
}
