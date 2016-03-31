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
    
    mergesort(mergeData, 5000);
}

void NodeController::mergesort(int data [], int size)
{
    
}

void NodeController ::merge(int data[] , int sizeOne, int sizeTwo)
{
    
}

