#include "obras.h"
#include "disenos.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

disenos::disenos(string nombre, string autor, string fecha, string tipo):obras(nombre, autor, fecha),
        tipo(tipo){
}
disenos::~disenos(){
}
string disenos::toString()const{
        stringstream ss;
        ss << obras::toString() << " diseños: " << tipo ;
        return ss.str();
}

