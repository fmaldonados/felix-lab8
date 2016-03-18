#pragma once
#include "obras.h"
#include <string>
using std::string;

class  esculturas : public obras{
        string peso;
        string material;
  public:
        esculturas(string,string,string,string,string);
        ~esculturas();
	string toString()const;
};

