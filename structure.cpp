//Binary Tree structure in C++
struct Node {
    int key;
    Node *left;
    Node *right;
    
    Node(int k) {
        key  = k;
        left = NULL;
        right = NULL;
    }
};
