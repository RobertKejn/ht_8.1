#include "BadLength.h"

BadLength::BadLength(std::string str) : exception_text(str) {};

const char* BadLength::what() {
	return exception_text.c_str();
}

