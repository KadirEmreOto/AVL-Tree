
# AVL Tree Implementation in C++

AVL Tree is a **self-balancing** binary search tree which guarantees O(logN) time complexity for insertion, deletion, and look-up operations. 

This version is implemented in C++ language, and allows multiple elements with same values. It means the tree can be used as **multiset**.

#### How to use it:

The tree can store any type of data which has **greater than** (>) operator. Build-in types such as `int`, `long long`, and `std::string` are well-tested, however user-defined structures, even has > operator, may cause some exceptions.

| Function | Definition | Time Complexity |
| --- | --- | --- |
| `AVLTree<class T> tree;` | declaration of tree object | constant |
| `insert(T value)` | insert an element to tree | O(logN) |
| `erase(T value)` | removes one match-up from tree | O(logN) |
| `find(T value)` | return index of element if exists, otherwise -1 | O(logN) |
| `operator[](int idx)` | access element at position idx in tree | O(logN) |
| `lower_bound(T value)` | return the position of the first element which does not compare less than value | O(logN) |
| `upper_bound(T value)` | return the position of the first element which does not compare greater than value | O(logN) |
| `size()` | return tree size | constant |
| `empty()` | test if tree is empty | constant |
| `clear()` | clear tree | O(N) |
| `display()` | display tree (*good for debugging*) | O(N) |


#### How to compile and run the program:

For competitive programmers, **onefile.cpp** contains all functions in one. 

    g++ kod.cpp AVLTree.cpp AVLTreeNode.cpp -o kod -std=c++11
    ./kod

or

    g++ onefile.cpp -o kod -std=c++11
    ./kod

#### Performance Test: AVL Tree vs std::multiset

As we know that std::multiset in standard template library (STL) is based on Red Black Trees (**RB Trees**) and both RB Trees and AVL Trees support insertion, deletion and look-up in guaranteed O(logN) time. However, AVL Trees are more rigidly balanced, it means that AVL Trees need more rotations in insertion and deletion, but provide faster look-up. So you are strongly recommended to use AVL Trees for **look-up** intensive tasks, otherwise RB Trees (also std::multiset) are more convenient. 


| Task | Amount | Container | Time Elapsed (ms) |
| --- | :--- | :---: | :---: |
| `insertion` | 100.000 | AVL Tree<br>std::multiset | 150<br>**19** |
| `insertion` | 1.000.000 | AVL Tree<br>std::multiset | 1596<br>**230** |
| `deletion` | 100.000 | AVL Tree<br>std::multiset | 122<br>**16** |
| `deletion` | 1.000.000 | AVL Tree<br>std::multiset | 1214<br>**145** |
| `look-up` | 100.000 | AVL Tree<br>std::multiset | 6<br>**4**  |
| `look-up` | 1.000.000 | AVL Tree<br>std::multiset | 70<br>**60** |
| `look-up` | 10.000.000 | AVL Tree<br>std::multiset | **398**<br>1554 |
| `look-up` | 100.000.000 | AVL Tree<br>std::multiset | **3536**<br>19238 |

> In look-up and deletion operations, containers have 100.000 elements.
