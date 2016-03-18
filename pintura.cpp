#include "obras.h"
#include "pintura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

pintura::pintura(string nombre, string autor, string fecha, string material, string tecnica):obras(nombre, autor, fecha),
        material(material), tecnica(tecnica){
}
pintura::~pintura(){
}
string pintura::toString()const{
        stringstream ss;
        ss << obras::toString() << " pintura: " << material << ", " << tecnica ;
        return ss.str();
}
