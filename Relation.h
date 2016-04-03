#ifndef RELATION_H_
#define RELATION_H_

#include <map>
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
		
		void addWay(Way* way,char role);
		
	private:
		unsigned long _ID;
		//map: Key is road's ID, char is 'i' for inner, 'o' for outer
		map<unsigned long,char>* _role; //TODO maybe store all contents in here
		vector<Way*>* _ways;
		
		
};

#endif // RELATION_H_
