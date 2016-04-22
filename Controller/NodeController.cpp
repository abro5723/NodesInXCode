/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: abro5723
 */

#include "NodeController.h"
#include <iostream>

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}

NodeController::~NodeController()
{
 
}

void NodeController:: testLists()
{
	numbers->addToFront(3);
	numbers->addToEnd(8);
	cout << "End should be 8 and is: "<< numbers->getEnd() << endl;
}

void NodeController :: start()
{
	arrayTimer.startTimer();

	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (23 * index));
	}

	for(int index = 0; index < notHipsterInts-> getSize(); index++)
	{
		cout << "notHipsterInts at index " <<index <<" contains " << notHipsterInts->get(index) << endl;
	}

	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();

}

void NodeController::doMergesort()
{
    mergeData = new int [5000];
    
    for(int spot = 0; spot < 5000; spot++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    for(int spot=0; spot < 50; spot++)
    {
        cout << mergeData[spot] << ",";
    }
    Timer mergeTimer;
    mergeTimer.startTimer();
    
    mergesort(mergeData, 5000);
    
    mergeTimer.stopTimer();
    mergeTimer.displayTimerInformation();
    for(int spot=0; spot < 50; spot++)
    {
        cout << mergeData[spot] << ",";
    }

}

void NodeController::mergesort(int data [], int size)
{
    
}

void NodeController ::merge(int data[] , int sizeOne, int sizeTwo)
{
    int * temp;
    int copied = 0;
    int copied2 = 0;
    int copied1 = 0;
    int index;
    
    temp = new int[sizeOne + sizeTwo];
    
    while((copied1 < sizeOne) && (copied2 < sizeTwo))
    {
        if(data[copied1] < (data + sizeOne)[copied2])
        {
            
        }
    }
}

void NodeController :: tryTree()
{
    CTECBinaryTree<int> testTree;
    testTree.insert(7);
    testTree.insert(10)
}

