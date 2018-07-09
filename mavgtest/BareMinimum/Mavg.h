/*
* Mavg.h
*
* Created: 7/7/2018 09:47:16
* Author: carlos
*/


#ifndef __MAVG_H__
#define __MAVG_H__
#include <Arduino.h>

class Mavg
{
	//variables
	public:
	void AddVal ( unsigned long x );
	void Clear(void);
	unsigned long Get (void);
	protected:
	private:
	unsigned N_;
	unsigned long MavgSum_;
	bool FirstVal_;

	//functions
	public:
	Mavg(unsigned N);
	~Mavg();
	protected:
	private:
	Mavg( const Mavg &c );
	Mavg& operator=( const Mavg &c );

}; //Mavg

#endif //__MAVG_H__
