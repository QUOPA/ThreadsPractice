
//#include "pch.h"


#include <iostream>
#include <thread>
#include <string>
#include <sstream>

int main()
{
	auto FnToCall = [](std::string FnName, int Num) {
		
		std::ostringstream tmpstr2;
		tmpstr2 << "<" << FnName << "is Called>\n";
		std::cout << tmpstr2.str();
		for (int i = 0; i < Num; i++)
		{
			std::ostringstream tmpstr;
			tmpstr << FnName << " : (" << i << "/" << Num << ")\n";
			std::cout << tmpstr.str();
		}
	};
	
	std::thread tmpThread(FnToCall, "AAAA", 10);
	std::thread tmpThread2(FnToCall, "BBBB", 10);
	std::thread tmpThread3(FnToCall, "CCCC", 10);
	
	tmpThread.join();
	tmpThread2.join();
	tmpThread3.join();
     
}
