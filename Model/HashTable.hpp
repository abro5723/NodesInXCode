//
//  HashTable.hpp
//  NodesInXCode
//
//  Created by Brown, Ashton on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include "CTECList.h"
#include "HashNode.cpp"
template <class Type>
class HashTable
{
private:
    int capacity;
    int chainedCapacity;
    double efficiencyPercentage;
    int size;
    CtecList<HashNode<Type>> * tableStorage;
    HashNode<Type> ** internalStorage;
    
    int findPosition(HashNode<Type> currentNode);
    int findTablePosition(HashNode<Type> currentNode);
    
    int handleCollision(HashNode<Type> currentNode);
    
    void updateCapacity();
    void updateTableCapacity();
    
    int getNextPrime();
    bool isPrime(int candidateNumber);
public:
    HashTable();
    ~HashTable();
    int getSize();
    void add(HashNode<Type> currentNode);
    void addChained(HashNode<Type> currentNode);
    
    bool remove(HashNode<Type> currentNode);
    bool contains(HashNode<Type> currentNode);
};

#endif /* HashTable_hpp */
