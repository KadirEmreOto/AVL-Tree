//  Created by Kadir Emre Oto on 06.08.2018.

#include "AVLTreeNode.hpp"

template <class T>
AVLTreeNode<T>::AVLTreeNode(T value): value(value){
    count = 1;
    height = 1;
    
    left = nullptr;
    right = nullptr;
}

template <class T>
void AVLTreeNode<T>::updateValues(){
    count = (left != nullptr ? left->count : 0) + (right != nullptr ? right->count : 0) + 1;
    
    height = std::max(left != nullptr ? left->height : 0,
                      right != nullptr ? right->height : 0) + 1;
}

template <class T>
int AVLTreeNode<T>::balanceFactor(){
    return (left != nullptr ? left->height : 0) - (right != nullptr ? right->height: 0);
}

template <class T>
AVLTreeNode<T>* AVLTreeNode<T>::left_rotate(){
    AVLTreeNode* R = right;
    right = right->left;
    R->left = this;
    
    this->updateValues();  // the order is important
    R->updateValues();
    
    return R;
}

template <class T>
AVLTreeNode<T>* AVLTreeNode<T>::right_rotate(){
    AVLTreeNode* L = left;
    left = left->right;
    L->right = this;
    
    this->updateValues();  // the order is important
    L->updateValues();
    
    return L;
}

template class AVLTreeNode<int>;
template class AVLTreeNode<short>;
template class AVLTreeNode<long>;
template class AVLTreeNode<long long>;
template class AVLTreeNode<std::string>;
