<img align='right' src='https://user-images.githubusercontent.com/5713670/87202985-820dcb80-c2b6-11ea-9f56-7ec461c497c3.gif' width='100'>

[![made-with-Markdown](https://img.shields.io/badge/Made%20with-Markdown-1f425f.svg)](http://commonmark.org)
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

After this project we were able to explain these questions:

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

## File structure

This table contains a brief description of the working files of the project, click on the names to get the source code.

All these files were compiled on Ubuntu 20.04 LTS using gcc.

| Filename | Description/Task |
| --- | --- |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |
| <pre>[]()</pre> |  |


## Usage

To try this project, first clone the repository to your machine :

```
$ git clone https://github.com/schambig/holbertonschool-binary_trees.git
```

Then, go to the project directory:

```
$ cd holbertonschool-binary_trees
```

Finally, compile the source code you want:

```
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 /PATH/main_files/[MAIN_FILE.c] [FILENAME.c] -o [EXECUTABLE_NAME]
```

| Flag | Description |
| --- | --- |
| -Wall | Enable all the warnings in gcc |
| -Wextra | Enable extra warnings that are not enabled by -Wall |
| -Werror | Convert warnings into error |
| -pedantic | Issue all warnings demanded by strict ISO C |
| -std=gnu89 | Determine the language standard, in this case `gnu89` |

## Authors

| [<img src="https://avatars.githubusercontent.com/u/105623752?v=4" width=100><br><sub> Carlos Cantoral </sub>](https://github.com/Jmel8) |  [<img src="https://avatars.githubusercontent.com/u/98289735?v=4" width=100><br><sub> Salomón Chambi </sub>](https://github.com/schambig) |
| :---: | :---: |

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&height=60&section=footer"/>
</p>
