# <h1 align="center">[Binary Trees](https://github.com/Mtiass/holbertonschool-binary_trees/tree/master)</h1>
Binary Trees are general trees in which the root node can only\
hold up to maximum 2 subtrees: left subtree and right subtree.\
Based on the number of children, binary trees are divided\
into three types:

### Full binary tree
- A full binary tree is a binary tree type where every node\
has either 0 or 2 child nodes.

### Complete binary tree
- A complete binary tree is a binary tree type where\
all the leaf nodes must be on the same level. However,\
root and internal nodes in a complete binary tree\
can either have 0, 1 or 2 child nodes.

### Perfect binary tree
- A perfect binary tree is a binary tree type where\
all the leaf nodes are on the same level and\
every node except leaf nodes have 2 children.

## [binary_trees.h](https://github.com/Mtiass/holbertonschool-binary_trees/blob/master/binary_trees.h)

This is the header file or library that defines:

- A binary tree data structure where the struct\
**binary_tree_s** has four members: *n*, *parent*,\
*left*, and *right*.
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
- a Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
- an AVL Tree
```
typedef struct binary_tree_s avl_t;
```
- a Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
Functions that can be used to manipulate binary trees.

| Function | Description |
| -------- | ----------- |
| binary_tree_node | Creates a binary tree node |
| binary_tree_insert_left | Inserts a node as the left-child of another node. |
| binary_tree_insert_right | Inserts a node as the right-child of another node. |
| binary_tree_delete | Deletes an entire binary tree. |
| binary_tree_is_leaf | Checks if a node is a leaf. |
| binary_tree_is_root | Checks if a given node is a root. |
| binary_tree_preorder | Goes through a binary tree using pre-order traversal. |
| binary_tree_inorder | Goes through a binary tree using in-order traversal. |
| binary_tree_postorder | Goes through a binary tree using post-order traversal. |
| binary_tree_height | Measures the height of a binary tree. |
| binary_tree_depth | Measures the depth of a node in a binary tree. |
| binary_tree_size | Measures the size of a binary tree. |
| binary_tree_leaves | Counts the leaves in a binary tree. |
| binary_tree_nodes | Counts the nodes with at least 1 child in a binary tree. |
| binary_tree_balance | Measures the balance factor of a binary tree. |
| binary_tree_is_full | Checks if a binary tree is full. |
| binary_tree_is_perfect | Checks if a binary tree is perfect. |
| binary_tree_sibling | Finds the sibling of a node. |
| binary_tree_uncle | Finds the uncle of a node. |

### Bibliography

[Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
