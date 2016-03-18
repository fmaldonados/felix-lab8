#pragma once
#include <string>
using std::string;

class obras{
	string nombre,autor,fecha;
  public:
	obras(string, string, string);
	~obras();
	virtual string toString()const;
};
