//
//  HashTable.cpp
//  NodesInXCode
//
//  Created by Brown, Ashton on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable.hpp"

template <class Type>
HashTable<Type> :: HashTable()
{
    this->capacity = 101;
    this->efficiencyPercentage = .667;
    this->size = 0;
    this->internalStorage = new Type[capacity];
}



template <class Type>
int HashTable<Type> :: getSize()
{
    return this->size;
}

template