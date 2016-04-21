//
//  TreeNode.h
//  NodesInXCode
//
//  Created by Brown, Ashton on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef TreeNode_h
#define TreeNode_h

#include <stdio.h>
#include "Node.h"

template <class Type>
class TreeNode : public Node<Type>
{
private:
    TreeNode<Type> * leftChild;
    TreeNode<Type> * rightChild;
    TreeNode<Type> * parent;
public:
    TreeNode();
    TreeNode(const Type & value);
    TreeNode(const Type & value, TreeNode<Type> * parent);
    void setLeftChild(TreeNode<Type>* leftChild);
    void setRightChild(TreeNode<Type>* rightChild);
    void setParent(TreeNode<Type>* parent);
};


#endif /* TreeNode_h */
