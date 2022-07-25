//
// Created by Aaron on 7/22/2022.
//

#include "Node.h"
using namespace std;

/*
* Returns the data that is stored in this node
*
* @return the data that is stored in this node.
*/
int Node::getData() const
{

}

/*
* Returns the leftChild child of this node or null if it doesn't have one.
*
* @return the leftChild child of this node or null if it doesn't have one.
*/
NodeInterface * Node::getLeftChild() const
{
    return(leftChild);
}

/*
* Returns the rightChild child of this node or null if it doesn't have one.
*
* @return the rightChild child of this node or null if it doesn't have one.
*/
NodeInterface * Node::getRightChild() const
{
    return(rightChild);
}

Node * Node::getLeft()
{
    return(leftChild);
}

Node * Node::getRight()
{
    return(rightChild);
}

void Node::setLeft(Node *ptr)
{
    leftChild = ptr;
}

void Node::setRight(Node *ptr)
{
    rightChild = ptr;
}