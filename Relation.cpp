#include "Relation.h"

/**
 * Constructor, initializes the object.
 * 
 * @brief Constructor
 * 
 * @author Stefan
 * @date April 3, 2016
 * @version 0.1
 */
Relation::Relation()
{
	_role = new map<unsigned long, char>;
	_ways = new vector<Way*>;
}

/**
 * Destructor, cleans memory from this object.
 * 
 * @brief Destructor
 * 
 * @author Stefan
 * @date April 3, 2016
 * @version 0.1
 */
Relation::~Relation()
{
	//TODO implement
}

/**
 * Adds the ID of Way and maps it to a char, representing the role of the
 * Way. Adds the Way to a list of ways in this Relation.
 * 
 * @brief add a way and its role
 * 
 * @author Stefan
 * @date April 3, 2016
 * @version 0.1
 * 
 * @param way The way, that is to be added to the relation
 * @param role A char representing the role of the Way way within the relation.
 * The char can be anything, but only 'i' for inner and 'o' for outer will be used.
 */
void Relation::addWay(Way* way, char role)
{
	_ways->push_back(way);
	(*_role)[way->getID()] = role;
}

//TODO implement more methods
