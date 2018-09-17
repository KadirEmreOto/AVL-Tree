//  Created by Kadir Emre Oto on 06.08.2018.

#include <iostream>
#include "AVLTree.hpp"


int main(int argc, const char * argv[]) {
    AVLTree<std::string> tree;
    
    tree.insert("Emre");
    tree.insert("KEO");
    tree.insert("Kadir");
    tree.insert("Oto");
    
    tree.erase("KEO");
    tree.display();
    
    std::cout << tree.lower_bound("Keo") << std::endl;
    std::cout << tree.find_max() << std::endl;
    std::cout << tree.size() << std::endl;
    std::cout << tree.empty() << std::endl;
    tree.clear();
    std::cout << tree.empty() << std::endl;
    
    return 0;
}
