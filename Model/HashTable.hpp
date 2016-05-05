//
//  HashTable.hpp
//  NodesInXCode
//
//  Created by Brown, Ashton on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

template <class Type>
class HashTable
{
private:
    int capacity;
    double efficiencyPercentage;
    int size;
    Type * internalStorage;
    
    int findPosition(const Type& value);
    int handleCollision(const Type& value);
    void updateSize();
public:
    HashTable();
    ~HashTable();
    void add(const Type& value);
    bool remove(const Type value);
    bool contains(const Type& value);
};

#endif /* HashTable_hpp */
