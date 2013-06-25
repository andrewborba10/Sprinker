/*
 * Site.h
 *
 *  Created on: Jun 25, 2013
 *      Author: andrew
 */

#ifndef SITE_H_
#define SITE_H_

#include <vector>
using namespace std;

#include "Scheduler.h"
#include "Station.h"

class Site {
public:
	Site();
	virtual ~Site();

	vector<Station> stations;
	stationid AddStation(string, StationType);
	void RemoveStation(stationid);

	void set_scheduler(Scheduler);
	Scheduler scheduler();

private:
	int num_stations_;
	Scheduler scheduler_;

	int FindStationIndex(stationid);
};

#endif /* SITE_H_ */
