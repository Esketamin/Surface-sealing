#include <iostream>
#include "Node.h"
#include <vector>

using namespace std;

int main()
{
	Node node(1,1,1);
	cout << node.getID() << endl;
	
	vector<Node*>* nodes = new vector<Node*>;
	
	
	nodes->push_back(new Node(1,0,0));
	nodes->push_back(new Node(2,2,0));
	nodes->push_back(new Node(3,2,2));
	nodes->push_back(new Node(4,0,2));
	
	nodes->push_back(new Node(5,0.5,0.5));
	nodes->push_back(new Node(6,1.5,0.5));
	nodes->push_back(new Node(7,1.5,1.5));
	nodes->push_back(new Node(8,0.5,1.5));
	return 0;
}
