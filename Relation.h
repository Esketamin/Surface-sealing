#ifndef RELATION_H_
#define RELATION_H_

#include <vector>
#include "Way.h"

using namespace std;


/**
 * A class representing a OSM relation. Relations store several objects,
 * that are related to each other.
 * 
 * @brief OSM Relation
 * 
 * @note This early version only stores relations between Way objects
 * 
 * @author Stefan
 * @date April 3, 2016
 * @version 0.1
 */
class Relation
{
	public:
		Relation();
		virtual ~Relation();
		
	private:
		unsigned long _ID;
		vector<Way*>* _ways; //TODO maybe store all contents in here
};

#endif // RELATION_H_
