<img align='right' src='https://user-images.githubusercontent.com/5713670/87202985-820dcb80-c2b6-11ea-9f56-7ec461c497c3.gif' width='100'>

[![made-with-Markdown](https://img.shields.io/badge/Made%20with-Markdown-1f425f.svg)](http://commonmark.org)
![GitHub last commit](https://img.shields.io/github/last-commit/schambig/holbertonschool-low_level_programming)

# Binary Trees

[Description](#description)</a> • [Resources](#resources) • [File Structure](#file-structure) • [Usage](#usage) • [Authors](#authors)

## Description

Trees are one of the most fundamental data structures. They are used to store and organize data.

A binary tree is a data structure composed of nodes, each of which has at most, two children, referred to as left and right nodes. The tree starts off with a single node known as the root.

Each node in the tree contains the following:

* Data or value of the node
* Pointer to the left child
* Pointer to the right child

In case of the root node the pointer parent points to null, and in a leaf node, the pointers to the left and right child point to null



After this project I was able to explain these questions:

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

## Resources

Valuable resources to help you understand this project:

* [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
* [Space complexity](https://www.geeksforgeeks.org/g-fact-86/)
* [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)
* [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

## File structure

This table contains a brief description of the working files of the project, click on the names to get the source code.

All these files were compiled on Ubuntu 20.04 LTS using gcc.

| Filename | Description/Task |
| --- | --- |
| <pre>[0-linear.c](0-linear.c)</pre> | Function that searches for a value in an array of integers using the Linear search algorithm |
| <pre>[1-binary.c](1-binary.c)</pre> | Function that searches for a value in a sorted array of integers using the Binary search algorithm |
| <pre>[2-O](2-O)</pre> | What is the time complexity (worst case) of a linear search in an array of size n? |
| <pre>[3-O](3-O)</pre> | What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n? |
| <pre>[4-O](4-O)</pre> | What is the time complexity (worst case) of a binary search in an array of size n? |
| <pre>[5-O](5-O)</pre> | What is the space complexity (worst case) of a binary search in an array of size n? |
| <pre>[6-O](6-O)</pre> | What is the space complexity of this function / algorithm? <pre>int **allocate_map(int n, int m)<br>{<br>  int **map;<br><br>  map = malloc(sizeof(int *) * n);<br>  for (size_t i = 0; i < n; i++)<br>  {<br>    map[i] = malloc(sizeof(int) * m);<br>  }<br>  return (map);<br>}</pre> |
| <pre>[main_files](main_files)</pre> | Contain all the main file that will be used at compilation to test the functions above |
| <pre>[output_files](output_files)</pre> | Contain all the executable files generated after compilation |

## Usage

To try this project, first clone the repository to your machine :

```
$ git clone https://github.com/schambig/holbertonschool-low_level_programming.git
```

Then, go to the project directory:

```
$ cd search_algorithms
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

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&height=60&section=footer"/>
</p>
