#include "obras.h"
#include "literatura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

literatura::literatura(string nombre, string autor, string fecha, string genero, string epoca):obras(nombre, autor, fecha),
	genero(genero), epoca(epoca){
}
literatura::~literatura(){
}
string literatura::toString()const{
	stringstream ss;
	ss << obras::toString() << " literatura: " << genero << ", " << epoca ;
	return ss.str();
}
