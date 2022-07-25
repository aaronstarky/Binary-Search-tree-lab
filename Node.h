//YOU MAY NOT MODIFY THIS DOCUMENT

#pragma once

#include <iostream>
#include "NodeInterface.h"
using namespace std;

class Node : public NodeInterface {

public:
    Node(int data) {}
    virtual ~Node() {}

    /*
    * Returns the data that is stored in this node
    *
    * @return the data that is stored in this node.
    */
    virtual int getData() const;

    /*
    * Returns the leftChild child of this node or null if it doesn't have one.
    *
    * @return the leftChild child of this node or null if it doesn't have one.
    */
    virtual NodeInterface * getLeftChild() const;

    /*
    * Returns the rightChild child of this node or null if it doesn't have one.
    *
    * @return the rightChild child of this node or null if it doesn't have one.
    */
    virtual NodeInterface * getRightChild() const;

    Node *getLeft();
    Node *getRight();
    void setLeft(Node *ptr);
    void setRight(Node *ptr);
private:
    Node * leftChild;
    Node * rightChild;
};