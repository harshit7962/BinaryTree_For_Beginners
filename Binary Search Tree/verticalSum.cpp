// We need to return the vertical sum of each vertical line in a binary tree

vector<int> verticalSum(Node *root) {
    if(root==NULL) return {};
    map<int, int> sum_map;
    queue<pair<Node* ,int>> q;
    q.push({root, 0});
    while(!q.empty()) {
        int x = q.size();
        for(int i=0;i<x;i++) {
            Node *temp = q.front().first;
            int vert = q.front().second;
            sum_map[vert]+=temp->key;
            q.pop();
            
            if(temp->left!=NULL) q.push({temp->left, vert-1});
            if(temp->right!=NULL) q.push({temp->right, vert+1});
        }
    }
    
    vector<int> res;
    for(auto x:sum_map) res.push_back(x.second);
    
    return res;
}
