#pragma once
#include "obras.h"
#include <string>
using std::string;

class literatura : public obras{
	string genero;
	string epoca;
  public:
	literatura(string,string,string,string,string);
	~literatura();
	string toString()const;
};
