#pragma once
#include "obras.h"
#include <string>
using std::string;

class pintura : public obras{
        string material;
        string tecnica;
  public:
        pintura(string,string,string,string,string);
        ~pintura();
	string toString()const;
};

