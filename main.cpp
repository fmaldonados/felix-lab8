#include "obras.h"
#include "literatura.h"
#include "esculturas.h"
#include "pintura.h"
#include "disenos.h"
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char* argv[]){
	bool acabar=false;
	vector<obras>lista_obras;
	vector<string>lista_transferidos;
	while(acabar==false){
		int opcion;
		cout<< "-------------------------------------------------------"<<endl;
		cout<< "1-Agregar obras"<<endl
		    <<"2-Transferir a otro museo"<<endl
		    <<"3-listar obras del museo "<<endl
		    <<"4-listar obras transferidas"<<endl
		    <<"5-salir"<<endl;
		cout<<"Ingrese su opcion:";
		cin>>opcion;
		cout<< "-------------------------------------------------------"<<endl;
		if(opcion==1){
		
		}else{
			if(opcion==2){
			
			}else{
				if(opcion==3){
				
				}else{
					if(opcion==4){
			
					}else{
						acabar=true;
					}
				}
			}
		}
	}	
	return 0;
}
