/*
 * Scheduler.h
 *
 *  Created on: Jun 25, 2013
 *      Author: andrew
 */

#ifndef SCHEDULER_H_
#define SCHEDULER_H_

class Site;

class Scheduler {
public:
	Scheduler();
	Scheduler(Site *);
	virtual ~Scheduler();

	void set_site(Site *);
	Site * site();

private:
	Site *site_;
};

#endif /* SCHEDULER_H_ */
