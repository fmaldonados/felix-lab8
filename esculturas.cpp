#include "obras.h"
#include "esculturas.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

esculturas::esculturas(string nombre, string autor, string fecha, string genero, string epoca):obras(nombre, autor, fecha),
        peso(peso), material(material){
}
esculturas::~esculturas(){
}
string esculturas::toString()const{
        stringstream ss;
        ss << obras::toString() << " escultura: " << peso << ", " << material ;
        return ss.str();
}

