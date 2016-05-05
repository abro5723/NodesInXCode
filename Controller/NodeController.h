/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: abro5723
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include"../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/Timer.h"
#include "../Model/ArrayNode.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/CTECArray.cpp"
#include "../Model/CtecList.cpp"
#include<string>
#include <iostream>


class NodeController
{
private:
    int * mergeData;
    CTECArray<int> * notHipsterInts;
    Timer arrayTimer;
    CtecList<int> * numbers;
    void testLists();
    void setupRandomArray();
    void mergesort(int dataArray [], int size);
    void merge(int data [], int sizeOne, int sizeTwo);
    void doMergesort();

public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
