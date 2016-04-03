#include "Node.h"

/**
 * Constrtuctor
 * 
 * @author Stefan
 * @date April 2, 2016
 * @version 0.1
 */
Node::Node(unsigned long ID, float longitude, float latitude)
{
	_ID = ID;
	_longitude = longitude;
	_latitude = latitude;
}

/**
 * Destructor
 * 
 * @author Stefan
 * @date April 2, 2016
 * @version 0.1
 */
Node::~Node()
{
	//TODO do nothing
}

/**
 * Getter method for the Node's ID number
 * 
 * @brief ID-getter
 * 
 * @author Stefan
 * @date April 2, 2016
 * @version 0.1
 * 
 * @return ID as 64bit integer
 */
unsigned long Node::getID()
{
	return _ID;
}

/**
 * Getter method for the longitude coordinate.
 * The longitude's format is dd.ddddd with sign. East is postive,
 * west is negative.
 * 
 * @author Stefan
 * @date April 2, 2016
 * @version 0.1
 * 
 * @return Node's longitude coordinate in dd.dddd format as 32bit floating point number
 */
float Node::getLongitude()
{
	return _longitude;
}

/**
 * Getter method for the latitude coordinate.
 * The longitude's format is dd.ddddd with sign. North is postive,
 * south is negative.
 * 
 * @author Stefan
 * @date April 2, 2016
 * @version 0.1
 * 
 * @return Node's latitude coordinate in dd.dddd format as 32bit floating point number
 */
float Node::getLatitude()
{
	return _latitude;
}
