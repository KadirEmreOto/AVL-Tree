//  Created by Kadir Emre Oto on 06.08.2018.

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "AVLTreeNode.hpp"

template <class T>
class AVLTree {
    int _size;
    AVLTreeNode<T> *root;
    
    void balance(std::vector<AVLTreeNode<T>**> path);
    void display(AVLTreeNode<T>* cur, int depth=0, int state=0);
    
public:
    AVLTree();
    ~AVLTree();
    
    void insert(T value);
    void erase(T value);
    
    void clear();
    bool empty() const;
    int size() const;
    
    int find(T value) const;
    int lower_bound(T value) const;
    int upper_bound(T value) const;
    
    const T& find_min() const;
    const T& find_max() const;
    const T& operator[](std::size_t idx) const;
    
    void display();
};

#endif /* AVLTree_hpp */
