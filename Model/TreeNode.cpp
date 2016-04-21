//
//  TreeNode.cpp
//  NodesInXCode
//
//  Created by Brown, Ashton on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "TreeNode.h"

template <class Type>
TreeNode<Type> :: TreeNode() : Node<Type>()
{
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    this->parent = nullptr;
}

template <class Type>
TreeNode<Type> :: TreeNode(const Type & value) : Node<Type>(value)
{
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    this->parent = nullptr;
    
    this->setValue(value);
    this->setParent(parent);
}