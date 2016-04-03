#include "Way.h"

/**
 * Constructor, initializes the object.
 * 
 * @brief Constructor
 * 
 * @author Stefan
 * @date April 3, 2016
 * @version 0.2
 */
Way::Way(unsigned long ID)
{
	_ID = ID;
}

/**
 * Destructor, cleans up memory.
 * 
 * @brief Destructor
 * 
 * @author Stefan
 * @date April 3, 2016
 * @version 0.1
 * 
 * @warning Deletes the node objects belonging to this way.
 */
Way::~Way()
{
	for(Node* node : _nodes)
	{
		delete node;
	}
}

/**
 * Getter method for the ID number of this Way.
 * 
 * @brief ID getter
 * 
 * @author Stefan
 * @date April 3, 2016
 * @version 0.1
 * 
 * @return The ID number of that Way as 64bit integer
 */
unsigned long Way::getID()
{
	return _ID;
}

/**
 * Getter method for the Node objects, that belong to this way.
 * 
 * @brief Node getter
 * 
 * @author Stefan
 * @date April 3, 2016
 * @version 0.1
 * 
 * @return The list of nodes, that belong to this way as std::vector<Node*>
 * 
 * @warning Original list of nodes.
 */
vector<Node*>* Way::getNodes()
{
	return &_nodes;
}


/**
 * Add a Node to the way. The Node will be contained in the list of
 * nodes for this way after using this operation.
 * 
 * @brief Add a node
 * 
 * @author Stefan
 * @date April 3, 2016
 * @version 0.1
 * 
 * @param node The node to be added
 */
void Way::addNode(Node* node)
{
	_nodes.push_back(node);
	_nodes.shrink_to_fit();
}
