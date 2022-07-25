//YOU MAY NOT MODIFY THIS DOCUMENT

#pragma once

#include <iostream>

class NodeInterface {

public:
	NodeInterface() {}
	virtual ~NodeInterface() {}

	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
	virtual int getData() const = 0;

	/*
	* Returns the leftChild child of this node or null if it doesn't have one.
	*
	* @return the leftChild child of this node or null if it doesn't have one.
	*/
	virtual NodeInterface * getLeftChild() const = 0;

	/*
	* Returns the rightChild child of this node or null if it doesn't have one.
	*
	* @return the rightChild child of this node or null if it doesn't have one.
	*/
	virtual NodeInterface * getRightChild() const = 0;

};