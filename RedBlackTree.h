//
// Created by 刘小东 on 1/1/22.
//

#ifndef RED_BLACK_TREE_PROJECT_REDBLACKTREE_H
#define RED_BLACK_TREE_PROJECT_REDBLACKTREE_H
#include "Node.h"
class RedBlackTree{
private:
    shared_ptr<Node> root;
    void leftRotation(shared_ptr<Node> tar);
    void rightRotation(shared_ptr<Node> tar);
public:
    void insertKey(int key);
    void deleteKey(int key);
};
#endif //RED_BLACK_TREE_PROJECT_REDBLACKTREE_H
