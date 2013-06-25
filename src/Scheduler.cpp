/*
 * Scheduler.cpp
 *
 *  Created on: Jun 25, 2013
 *      Author: andrew
 */

#include <cstddef>
using namespace std;

#include "Scheduler.h"

Scheduler::Scheduler() {
	site_ = NULL;
}

Scheduler::Scheduler(Site *) {
	site_ = site;
}

Scheduler::~Scheduler() {
	// TODO Auto-generated destructor stub
}

void Scheduler::set_site(Site *site)
{
	site_ = site;
}

Site * Scheduler::site()
{
	return site_;
}
