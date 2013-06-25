/*
 * Station.cpp
 *
 *  Created on: Jun 25, 2013
 *      Author: andrew
 */

#include "Station.h"

Station::Station() {
	id_ = 0;
	name_ = "";
	type_ = SType_Default;
}

Station::Station(stationid id, string name, StationType type)
{
	id_ = id;
	name_ = name;
	type_ = type;
}

Station::~Station() {
	// TODO Auto-generated destructor stub
}

void Station::set_id(stationid id)
{
	id_ = id;
}

stationid Station::id()
{
	return id_;
}

void Station::set_name(string name)
{
	name_ = name;
}

string Station::name()
{
	return name_;
}

void Station::set_type(StationType type)
{
	type_ = type;
}

StationType Station::type()
{
	return type_;
}
