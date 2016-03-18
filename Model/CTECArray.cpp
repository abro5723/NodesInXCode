/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: abro5723
 */

#include "CTECArray.h"
#include <iostream>
#include <assert.h>

using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;

	assert(size > 0);

	if(size <= 0)
	{
		cerr << "IMPOSSIBRU!" <<endl;
		return;
	}

	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			head = nextNode;

		}
		else
		{
			ArrayNode<Type> * first = new ArrayNode<Type>();
			head = first;
		}
	}
}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);

		}
			delete deleteMe->getNext();
			deleteMe = head;
	}
	delete head;
}

template <class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}

template <class Type>
Type CTECArray<Type> :: get(int position)
{
		assert(position < size && position >= 0);

		ArrayNode<Type> * current = head;

		for(int spot = 0; spot <= position; spot++)
		{
			if(spot !=position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
    return current->getValue();
}

template <class Type>
void CTECArray<Type>:: set(int position, const Type& value)
{
	assert(position <size && position >=0);
	ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot)
		{
			if(position != spot)
			{
				current = current->getNext();
			}
			else
			{
				current->setValue(value);
			}
		}

}

/*
 1) Assert size > 0.
 2)Declare and ini valid return value.
 3) Reference to head and loop.
 4)If there, return idex, else go to next.
 5) return index
 */
template <class Type>
int CTECArray<Type>:: indexOf(Type searchValue)
{
    assert(this->size > 0);
    
    int indexNotFound = -1;
}

template <class Type>
int CTECArray<Type>:: nextIndexOf(int startingIndex, Type searchValue)
{
    assert(this-size >0);
    assert(startingIndex >= 0 && startingIndex < this>size);
    
    int indexNotFound = -1;
    
    ArrayNode<Type> * current = head;
    
    for(int index = 0; index < startingIndex; index++)
    {
        current = current->getNext();
    }
    
    for(int index = startingIndex; index < this->size; index++)
    {
        if(current -> getValue() == searchValue)
        {
            return index;
        }
        else
        {
            current = current->getNext();
        }
    }
    
    return indexNotFound;

}