//
// Created by 刘小东 on 1/1/22.
//

#ifndef RED_BLACK_TREE_PROJECT_NODE_H
#define RED_BLACK_TREE_PROJECT_NODE_H

#include <memory>
using std::shared_ptr;
struct Node{
    int key;
    shared_ptr<Node> left;
    shared_ptr<Node> right;
    shared_ptr<Node> parent;

    Node();
    Node(int _key);

};
#endif //RED_BLACK_TREE_PROJECT_NODE_H
