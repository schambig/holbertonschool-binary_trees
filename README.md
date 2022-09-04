<img align='right' src='https://user-images.githubusercontent.com/5713670/87202985-820dcb80-c2b6-11ea-9f56-7ec461c497c3.gif' width='100'>

![made-with-Markdown](https://img.shields.io/badge/Made%20with-Markdown-1f425f.svg)
![GitHub last commit](https://img.shields.io/github/last-commit/schambig/holbertonschool-binary_trees)

# Binary Trees

[Description](#description)</a> • [Resources](#resources) • [File Structure](#file-structure) • [Usage](#usage) • [Authors](#authors)

---

## Description

Trees are one of the most fundamental data structures. They are used to store and organize data.

A binary tree is a data structure composed of nodes, each of which has at most, two children, referred to as left and right nodes. The tree starts off with a single node known as the root.

Each node in the tree contains the following:

* Data or value of the node
* Pointer to the parent
* Pointer to the left child
* Pointer to the right child

In case of the root node the pointer parent points to null, and in a leaf node, the pointers to the left and right child point to null

This is the data structure used in this project:

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

After this project we were able to [explain to anyone](https://fs.blog/feynman-learning-technique/):

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Resources

Valuable resources to help you understand this project:

* [Binary tree](https://en.wikipedia.org/wiki/Binary_tree)
* [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
* [Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
* [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
* [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)
* [Print function](https://github.com/holbertonschool/0x1C.c)

## File structure

This table contains a brief description of the working files of the project, click on the names to get the source code.

All these files were compiled on Ubuntu 20.04 LTS using gcc.

| Filename | Description/Task |
| --- | --- |
| <pre>[0-binary_tree_node.c](0-binary_tree_node.c)</pre> | Write a function that creates a binary tree node |
| <pre>[1-binary_tree_insert_left.c](1-binary_tree_insert_left.c)</pre> | Write a function that inserts a node as the left-child of another node |
| <pre>[2-binary_tree_insert_right.c](2-binary_tree_insert_right.c)</pre> | Write a function that inserts a node as the right-child of another node |
| <pre>[3-binary_tree_delete.c](3-binary_tree_delete.c)</pre> | Write a function that deletes an entire binary tree |
| <pre>[4-binary_tree_is_leaf.c](4-binary_tree_is_leaf.c)</pre> | Write a function that checks if a node is a leaf |
| <pre>[5-binary_tree_is_root.c](5-binary_tree_is_root.c)</pre> | Write a function that checks if a given node is a root |
| <pre>[6-binary_tree_preorder.c](6-binary_tree_preorder.c)</pre> | Write a function that goes through a binary tree using pre-order traversal |
| <pre>[7-binary_tree_inorder.c](7-binary_tree_inorder.c)</pre> | Write a function that goes through a binary tree using in-order traversal |
| <pre>[8-binary_tree_postorder.c](8-binary_tree_postorder.c)</pre> | Write a function that goes through a binary tree using post-order traversal |
| <pre>[9-binary_tree_height.c](9-binary_tree_height.c)</pre> | Write a function that measures the height of a binary tree |
| <pre>[10-binary_tree_depth.c](10-binary_tree_depth.c)</pre> | Write a function that measures the depth of a node in a binary tree |
| <pre>[11-binary_tree_size.c](11-binary_tree_size.c)</pre> | Write a function that measures the size of a binary tree |
| <pre>[12-binary_tree_leaves.c](12-binary_tree_leaves.c)</pre> | Write a function that counts the leaves in a binary tree |
| <pre>[13-binary_tree_nodes.c](13-binary_tree_nodes.c)</pre> | Write a function that counts the nodes with at least 1 child in a binary tree |
| <pre>[14-binary_tree_balance.c](14-binary_tree_balance.c)</pre> | Write a function that measures the balance factor of a binary tree |
| <pre>[15-binary_tree_is_full.c](15-binary_tree_is_full.c)</pre> | Write a function that checks if a binary tree is full |
| <pre>[16-binary_tree_is_perfect.c](16-binary_tree_is_perfect.c)</pre> | Write a function that checks if a binary tree is perfect |
| <pre>[17-binary_tree_sibling.c](17-binary_tree_sibling.c)</pre> | Write a function that finds the sibling of a node |
| <pre>[18-binary_tree_uncle.c](18-binary_tree_uncle.c)</pre> | Write a function that finds the uncle of a node |
| <pre>[binary_trees.h](binary_trees.h)</pre> | Contain the structure and prototypes of the project |
| <pre>[binary_tree_print.c](binary_tree_print.c)</pre> | Print a binary tree, this function is used only for visualization purposes |
| <pre>[main_files](main_files)</pre> | Contain all the main files that will be used at compilation to test the functions above |
| <pre>[output_files](output_files)</pre> | Contain all the executable files generated after compilation |


## Usage

To try this project in your machine, first clone the repository to your machine :

```
$ git clone https://github.com/schambig/holbertonschool-binary_trees.git
```

Then, go to the project directory:

```
$ cd holbertonschool-binary_trees
```

Finally, compile the source code you want, using its correspondent main file and the *.c files asked:

```
$ gcc -Wall -Wextra -Werror -pedantic /PATH/main_files/[MAIN_FILE.c] [FILENAME.c] -o [EXECUTABLE_NAME]
```

| Flag | Description |
| --- | --- |
| -Wall | Enable all the warnings in gcc |
| -Wextra | Enable extra warnings that are not enabled by -Wall |
| -Werror | Convert warnings into error |
| -pedantic | Issue all warnings demanded by strict ISO C |
<!-- | -std=gnu89 | Determine the language standard, in this case `gnu89` | -->

## Authors

| [<img src="https://avatars.githubusercontent.com/u/105623752?v=4" width=85><br><sub> Carlos Cantoral </sub>](https://github.com/Jmel8) |  [<img src="https://avatars.githubusercontent.com/u/98289735?v=4" width=85><br><sub> Salomón Chambi </sub>](https://github.com/schambig) |
| :---: | :---: |

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&height=60&section=footer"/>
</p>
