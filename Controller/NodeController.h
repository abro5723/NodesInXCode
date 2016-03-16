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
CTECArray<int> * notHipsterInts;
Timer arrayTimer;
CtecList<int> * numbers;
void testLists();

public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
