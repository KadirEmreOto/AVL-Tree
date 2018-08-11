
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
