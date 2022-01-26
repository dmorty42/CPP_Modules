
#include <iostream>
#include <ctime>
#include <iomanip>

int main()
{
	time_t	sec = time(NULL);
	tm* data = localtime(&sec);
	std::cout << std::setfill('0') << "[" << data->tm_year + 1900 
				<< std::setw(2) << data->tm_mday 
				<< std::setw(2) << data->tm_mon + 1 
				<< "_" << data->tm_hour << data->tm_min
				<< data->tm_sec << "] ";
}