#include "z1.h"
#include <iostream>
#include <iomanip>
#include <tgmath.h>


TimeSpan::TimeSpan(unsigned int timeInSeconds) 
{
	seconds = timeInSeconds % 60;
	minutes = floor((timeInSeconds / 60) % 60);
	hours = timeInSeconds / 3600;
}

int TimeSpan::getHours() const 
{ 
	return hours; 
}

int TimeSpan::getMinutes() const 
{ 
	return minutes; 
}

int TimeSpan::getSeconds() const 
{ 
	return seconds; 
}

void TimeSpan::print() 
{
	std::cout << std::setfill('0') << std::setw(2) << hours << " : " << minutes << " : " << seconds;
}
