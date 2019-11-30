#pragma once

#include <ctime>
#include <iostream>

class DateTime
{
public:

	DateTime(int D, int M, int Y);
	DateTime();
	DateTime(const DateTime&);

	~DateTime();

	std::string getToday();

	std::string getYesterday();
	std::string getTomorrow();

	std::string getFuture(unsigned int N);
	std::string getPast(unsigned int N);

	int getDifference(DateTime&);


private:

	std::string tmToStr(tm* time);

	time_t now; 
	tm* t;

	std::string days[7] = { "sunday\0", 
								  "monday\0", 
		                          "tuesday\0", 
								  "wednesday\0",
		                          "thursday\0",  
		                          "friday\0",  
		                          "saturday\0" };

	std::string months[12]   = { "january\0", 
		                          "february\0", 
		                          "march\0", 
		                          "april\0", 
		                          "may\0", 
		                          "june\0", 
		                          "july\0", 
		                          "august\0",
						          "september\0", 
		                          "october\0", 
		                          "november\0", 
		                          "december\0" };
};

