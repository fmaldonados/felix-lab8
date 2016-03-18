#include "obras.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

obras::obras(string nombre, string autor, string fecha):nombre(nombre), autor(autor), fecha(fecha){
}
obras::~obras(){
}
string obras::toString()const{
	stringstream ss;
	ss << "obra: " << nombre << ", " << autor << ", " << fecha;
	return ss.str();
}
