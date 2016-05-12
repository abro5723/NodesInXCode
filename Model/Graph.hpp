//
//  Graph.hpp
//  NodesInXCode
//
//  Created by Brown, Ashton on 4/25/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp
#include <set>
using namespace std;

template<class Type>
class Graph
{
private:
    static const int MAXIMUM = 20;
    bool edges [MAXIMUM][MAXIMUM]; //This is the adjacency matrix.x
    Type labels [MAXIMUM];
    int manyVertices;
    void depthfirstTraversal(Graph<Type> graph, int vertex, bool markedVertices[]);
public:
    Graph();
    virtual ~Graph();
    void addVertex(const Type& label);
    void addEdge(int source, int target);
    void removeEdge(int sourc, int target);
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    bool isEdge(int source, int target) const;
    std::set<int> neighbors(int vertex) const;
    void depthfirstTraversal(Graph<Type> graph, int vertex);
    void breadthfirstTraversal(Graph<Type> graph, int vertex);
};

#endif /* Graph_hpp */
