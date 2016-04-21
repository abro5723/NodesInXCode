//
//  CTECBinaryTree.cpp
//  NodesInXCode
//
//  Created by Brown, Ashton on 4/13/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "CTECBinaryTree.hpp"
using namespace std;

template<class Type>
void CTECBinaryTree<Type> :: inorderTraversal(TreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        inorderTraversal(currentNode->getLeftChild());
        cout << currentNode->getValue() << " " ;
        inorderTraversal(currentNode->getRightChild());
    }
}

template<class Type>
void CTECBinaryTree<Type> :: preorderTraversal(TreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        cout << currentNode->getValue() << " " ;
        preorderTraversal(currentNode->getLeftChild());
        preorderTraversal(currentNode->getRightChild());
    }
}

template<class Type>
void CTECBinaryTree<Type> :: postorderTraversal(TreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        postorderTraversal(currentNode->getLeftChild());
        postorderTraversal(currentNode->getRightChild());
        cout << currentNode->getValue() << " " ;
    }
}

template<class Type>
int CTECBinaryTree<Type>:: getHeight()
{
    calculateSize(root);
    return height;
}

template<class Type>
int CTECBinaryTree<Type> :: calculateSize(TreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        calculateSize(currentNode->getLeftChild());
        calculateSize(currentNode->getRightChild());
        height++;
    }
}

template <class Type>
bool CTECBinaryTree<Type>:: insert(const Type& value)
{
    
    TreeNode<Type> * trailingCurrent;
    TreeNode<Type> * insertedNode(value);
    assert(insertedNode != nullptr);
    TreeNode<Type> * current;
    
    if(contains(value))
    {
        return false;
    }
    else
    {
        if(root == nullptr)
        {
         root = insertedNode;
        }
        else
        {
            current = root;
            while(current != nullptr)
            {
                trailingCurrent = current;
                
                if(current->getVallue() > value)
                {
                    current = current->getLeftChild();
                }
                else
                {
                    current = current->getRightChild();
                }
            }
            
            if(trailingCurrent->getValue() > value)
            {
                trailingCurrent->setLeftChild(insertedNode);
                
            }
            else{
                trailingCurrent->setRightChild(insertedNode);
            }
            insertedNode->setParent(trailingCurrent);
        }
        return true;
    }
}

template<class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getRightMostChild(CTECBinaryTree<Type> * leftSubTree)
{
    TreeNode<Type> * rightNode = leftSubTree->getRoot();
    while(rightNode->getRightChild() != nullptr)
    {
        rightNode = rightNode->getRightChild();
    }
    
    return rightNode;
}

template<class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getLeftMostChild(CTECBinaryTree<Type> * rightSubTree)
{
    TreeNode<Type> * leftNode = rightSubTree->getRoot();
    while(leftNode->getLeftChild() != nullptr)
    {
        leftNode = leftNode->getLeftChild();
    }
    
    return leftNode;
}

template <class Type>
void CTECBinaryTree<Type>:: remove(const Type& value)
{
    TreeNode<Type> * current = root;
    TreeNode<Type> * trailing = current;
    if(!contains(value))
    {
        return;
    }
    else
    {
        while(current!= nullptr && current->getValue() != value)
        {
            trailing = current;
            if(current->getValue() > value)
            {
                current = current->getLeftChild();
            }
            else
            {
                current = current->getRghtChild();
            }
        }
        
        if(current == root)
        {
            remove(root);
        }
        else if(trailing->getvalue() > value)
        {
            remove(trailing->getLeftChild);
        }
        else
        {
            remove(trailing->getRightChild);
        }
    }
}

template<class Type>
void CTECBinaryTree<Type> :: remove(TreeNode<Type> * nodeToRemove)
{
    TreeNode<Type> * current;
    TreeNode<Type> * trailing;
    TreeNode<Type> * temp;
    
    if(nodeToRemove == nullptr)
    {
        cerr<< "You cant remove nothing" << endl;
    }
    else if(nodeToRemove->getRightChild() == nullptr &&
            nodeToRemove->getLeftChild() == nullptr)
    {
        temp = nodeToRemove;
        nodeToRemove = nullptr;
        delete temp;
    }
    else if(nodeToRemove->getRightChild() == nullptr)
    {
        temp = nodeToRemove;
        nodeToRemove = temp ->getLeftChild();
        delete temp;
    }
    else if (nodeToRemove->getLeftChild() == nullptr)
    {
        temp = nodeToRemove;
        nodeToRemove = temp->getRightChild();
        delete temp;
    }
    else
    {
        current=nodeToRemove->getLeftChild();
        trailing = nullptr;
        
        while(current->getRightchild() != nullptr)
        {
            trailing = current;
            current = current->getRightChild();
        }
        
        nodeToRemove->setValue(current->getValue());
        if(trailing == nullptr)
        {
            nodeToRemove->setLeftChild(current->getLeftChild());
        }
        else
        {
            trailing->setRigChild(current->getLeftChild());
        }
    
        delete current;
        
    }
}













