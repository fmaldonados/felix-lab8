#pragma once
#include <string>
using std::string;

class obras{
	string nombre,autor,fecha;
  public:
	obras(string, string, string);
	~obras();
	string toString()const;
};
