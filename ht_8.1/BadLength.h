#include <windows.h>
#include <iostream>
#pragma once
class BadLength : std::exception
{
public:
	BadLength(std::string str);

	virtual const char* what();

protected:
	std::string exception_text;
};

