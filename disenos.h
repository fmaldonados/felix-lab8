#pragma once
#include "obras.h"
#include <string>
using std::string;

class disenos : public obras{
        string tipo;
  public:
        disenos(string,string,string,string);
        ~disenos();
	string toString()const;
};

