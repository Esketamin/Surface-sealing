#ifndef WAY_H_
#define WAY_H_

#include "Node.h"
#include <vector>

using namespace std;

/**
 * A class representing a way of several connected Node type objects.
 * 
 * @brief Way from openstreetmap consisting of connected Nodes.
 * 
 * @author Stefan
 * @date April 03, 2016
 * @version 0.1
 */
class Way
{
	public:
		Way();
		virtual ~Way();
		
		vector<Node*>* getNodes();
		void addNode(Node* node);
		
	private:
		vector<Node*> _nodes;
};

#endif //WAY_H_
