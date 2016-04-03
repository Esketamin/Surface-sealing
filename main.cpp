#include <iostream>
#include <vector>
#include <map>
#include "Node.h"
#include "Way.h"


using namespace std;

int main()
{	
	vector<Node*>* nodes = new vector<Node*>;
	
	nodes->push_back(new Node(1,0,0));
	nodes->push_back(new Node(2,2,0));
	nodes->push_back(new Node(3,2,2));
	nodes->push_back(new Node(4,0,2));
	
	nodes->push_back(new Node(5,0.5,0.5));
	nodes->push_back(new Node(6,1.5,0.5));
	nodes->push_back(new Node(7,1.5,1.5));
	nodes->push_back(new Node(8,0.5,1.5));

	Way* way = new Way(42);
	
	for(int i = 0; i < 4; i++)
	{
		way->addNode(nodes->at(i));
	}
	
	map<unsigned long, Way*>* ways = new map<unsigned long, Way*>;
	(*ways)[way->getID()] = way;
	
	return 0;
}
