/*
 * Station.h
 *
 *  Created on: Jun 25, 2013
 *      Author: andrew
 */

#ifndef STATION_H_
#define STATION_H_

#include <string>
using namespace std;

typedef int stationid;

enum StationType
{
	SType_Default,
};

class Station {
public:
	Station();
	Station(stationid, string, StationType);
	virtual ~Station();

	void set_id(stationid);
	stationid id();

	void set_name(string);
	string name();

	void set_type(StationType);
	StationType type();

private:
	stationid id_;
	string name_;
	StationType type_;
};

#endif /* STATION_H_ */
