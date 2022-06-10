# Binary Search Tree
A binary search tree is a special kind of data structure, which is represented in same was as a binary tree, but support quicker time complexity when it comes to operations...

### Structure of a binary search tree (or binary tree) is:
```cpp
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
```
### A balanced binary search tree gives following advantages:
| Operation      | Time Complexity |
| :------:       |    :----:       |
| Searching      | O(log n)           |
| Inserting      | O(log n)           |
| Deleting       | O(log n)           |
| Find Closest   | O(log n)           |
| Sorted Traversal| O(n)          |
