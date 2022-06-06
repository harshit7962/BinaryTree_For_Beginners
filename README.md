# BinaryTree_For_Beginners
A binary Tree is represented by following structure in all the above programs...
```cpp
void postOrder(Node *root) {
    if(root!=NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->key << " ";
    }
}
```
