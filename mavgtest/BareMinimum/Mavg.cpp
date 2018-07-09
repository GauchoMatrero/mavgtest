/*
* Mavg.cpp
*
* Created: 7/7/2018 09:47:16
* Author: carlos
*/


#include "Mavg.h"
// adds value to rolling average
void Mavg::AddVal ( unsigned long x )
{
	if (FirstVal_) // First data in ?
	{
		// yes, first Average is The first value
		MavgSum_=x;
		FirstVal_=false;
	}
	else
	{
		// no, compute rolling average
		MavgSum_+=x-(MavgSum_ >> N_);
	}
}
// clears average count
void Mavg::Clear()
{
	// Clears Average for next run
	MavgSum_=0;
	FirstVal_=true;
	
}
// gets average
unsigned long Mavg::Get (void)
{
	unsigned long Reval;
	// returns rolling average
	Reval=0;
	Reval=(MavgSum_ >> N_);
	return(Reval);
}

// default constructor
Mavg::Mavg(unsigned N )
{
	// set number to average Div_ ( multiple of 2 )
	N_=N;
	Mavg::Clear();
} //Mavg

// default destructor
Mavg::~Mavg()
{
} //~Mavg
