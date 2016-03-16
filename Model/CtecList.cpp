/*
 * CtecList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: abro5723
 */

#include "CtecList.h"

template <class Type>
CtecList<Type>::CtecList()
{
	this -> size = 0;
	this->head = nullptr;
	this->end = nullptr;


}

template <class Type>
CtecList<Type>::~CtecList()
{


}

template <class Type>
Type CtecList<Type> :: removeFromFront()
{
	//Incase we require that which we remove
	Type returnValue;

	assert(this->size > 0);

	//Find the next spot
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();

	//Get what was  the head node!
	returnValue = this->head->getValue();

	//Remove head
	delete this -> head;

	//Move head to next
	this->head = newHead;

	this->calculatedSize();

	return returnValue;
}

template <class Type>
Type CtecList<Type> :: removeFromIndex(int index)
{
	Type returnedValue;
	Type thingToRemove;

	assert(this->size > 0);
	assert(size > 0 && index >= 0 && index < size);
	ArrayNode<Type> * previous, deleteMe, newNext;

	if(index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if(index == size-1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		for(int spot=0; spot < index+1; spot++)
		{

		}

	}

	this->calculatedSize();
	return thingToRemove;

}

template <class Type>
void CtecList<Type> :: calculatedSize()
{
	assert(size >= 0);

	ArrayNode<Type> * counterPointer = head;
	int count = 0;
	if(counterPointer == nullptr)
	{
		this->size = 0;
		return;
	}
	else
	{
		count++;
		while(counterPointer->getNext() != nullptr)
		{
			counterPointer = counterPointer->getNext();
			count++;

		}

		this->size = count;
	}


}
template <class Type>
Type CtecList<Type> :: removeFromEnd()
{
	Type valueToRemove;
	assert(size > 0);
	if(size == 1)
	{
		valueToRemove = removeFromFront();
		end = nullptr;
		head = nullptr;
		calculatedSize();
		return valueToRemove;

	}
	else
	{

		ArrayNode<Type> * current = head;
		for(int spot = 0; spot<size-1; spot++)
		{
		current = current ->getNext();
		}
		valueToRemove = current->getNext()->getValue();
		end = current;
		delete current->getNext();
	}

	this->calculatedSize();
	return valueToRemove;

}

template <class Type>
void CtecList<Type> :: addToEnd(Type value)
{
	ArrayNode<Type> * newStuff = new ArrayNode<Type>(value);
	end->setNext(newStuff);
	end = newStuff;

	calculatedSize();


}

template <class Type>
void CtecList<Type> :: addToFront(const Type& value)
{
	ArrayNode<Type> * newStuff = new ArrayNode<Type>(value, head);
	head = newStuff;
}

template <class Type>
void CtecList<Type> :: addAtIndex(int index, Type value)
{

}

template <class Type>
Type CtecList<Type> :: getFront()
{
	Type returnValue;
	Type thingToGet;
	thingToGet = returnValue = head->getValue();
}

template <class Type>
Type CtecList<Type> :: getEnd()
{

}

template <class Type>
Type CtecList<Type> :: getFromIndex(int index)
{

}

template <class Type>
Type CtecList<Type> :: set(int index, Type value)
{

}

