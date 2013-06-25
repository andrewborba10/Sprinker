/*
 * Site.cpp
 *
 *  Created on: Jun 25, 2013
 *      Author: andrew
 */

#include <iostream>
using namespace std;

#include "Site.h"

Site::Site()
	: scheduler_(this)
{
	num_stations_ = 0;
}

Site::~Site() {
	// TODO Auto-generated destructor stub
}

stationid Site::AddStation(string name, StationType type)
{
	stations.push_back(Station((stationid)(++num_stations_), name, type));
	return (stationid)num_stations_;
}

void Site::RemoveStation(stationid id)
{
	int iStation = FindStationIndex(id);
	if (iStation == -1)
	{
		cerr << "Site::RemoveStation: Invalid station id: " << id << endl;
	}
	stations.erase(stations.begin() + iStation);
}
void Site::set_scheduler(Scheduler scheduler)
{
	scheduler_ = scheduler;
}

Scheduler Site::scheduler()
{
	return scheduler_;
}

int Site::FindStationIndex(stationid id)
{
	for (int iStation = 0; iStation < stations.size(); ++iStation)
	{
		if (stations[iStation].id() == id)
		{
			return iStation;
		}
	}
	return -1;
}
