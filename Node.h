#ifndef NODE_H_
#define NODE_H_

#include <string>


/**
 * A class representing a Node in openstreetmap speaking. It contains 
 * the OSM ID of that node, its longitude and its latitude
 * 
 * @brief Node from openstreetmap
 * 
 * @author Stefan
 * @version 0.1
 * @date April 02, 2016
 */
class Node
{
	public:
		Node(unsigned long ID, float longitude, float latitude);
		virtual ~Node();
		
		unsigned long getID();
		float getLongitude();
		float getLatitude();
		
	private:
		unsigned long _ID;
		float _longitude;
		float _latitude;
};
#endif //NODE_H_
