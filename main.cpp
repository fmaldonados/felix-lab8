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
		cout<<"1-Agregar obras"<<endl
		    <<"2-Transferir a otro museo"<<endl
		    <<"3-listar obras del museo "<<endl
		    <<"4-listar obras transferidas"<<endl
		    <<"5-salir"<<endl;
		cout<<"Ingrese su opcion:";
		cin>>opcion;
		cout<< "-------------------------------------------------------"<<endl;
		if(opcion==1){
			int opcion2;
			cout<<"1-Literatura"<<endl
            	        <<"2-Escultura"<<endl
                    	<<"3-Pintura"<<endl
                    	<<"4-Diseño Arquitectonico"<<endl;
			cout<<"Seleccione el tipo de obra que quiere agregar:";
			cin>>opcion2;
			string nombre,autor,fecha;
			cout<<"Ingrese el nombre: ";
			cin>>nombre;
			cout<<"Ingrese el nombre del autor: ";
                        cin>>autor;
			cout<<"Ingrese la fecha de ingreso: ";
                        cin>>fecha;
			if(opcion2==1){
				string genero,epoca;
				cout<<"Ingrese el genero: ";
				cin>>genero;
				cout<<"Ingrese la epoca: ";
				cin>>epoca;
				literatura obra(nombre,autor,fecha,genero,epoca);
				lista_obras.push_back(obra);
			}else{
				if(opcion2==2){
					string peso,material;
                                	cout<<"Ingrese el peso: ";
                                	cin>>peso;
                                	cout<<"Ingrese el material: ";
                                	cin>>material;
                                	esculturas obra(nombre,autor,fecha,peso,material);
                                	lista_obras.push_back(obra);
				}else{
					if(opcion2==3){
						string material,tecnica;
                                		cout<<"Ingrese el material de la pintura: ";
                                		cin>>material;
                                		cout<<"Ingrese la tecnica utilizada: ";
                                		cin>>tecnica;
                                		pintura obra(nombre,autor,fecha,material,tecnica);
                                		lista_obras.push_back(obra);	
					}else{
						if(opcion2==4){
							string tipo;
                                			cout<<"Ingrese el tipo de terreno: ";
                                			cin>>tipo;
                                			disenos obra(nombre,autor,fecha,tipo);
                                			lista_obras.push_back(obra);
						}else{
							cout<<"Opcion no valida";
						}
					}
				}
			}
				
		}else{
			if(opcion==2){
				int transferir;
				for(int i=0;i<lista_obras.size();i++)
                                                        cout<< i+1<< "- "<<lista_obras[i].toString()<<endl<<endl;
				cout<<"Ingrese la obra a transferir:";
				cin>>transferir;
				lista_transferidos.push_back(lista_obras[transferir-1].toString());
				lista_obras.erase(lista_obras.begin()+transferir-1);
			}else{
				if(opcion==3){
					for(int i=0;i<lista_obras.size();i++)
                                                        cout<< i+1<< "- "<<lista_obras[i].toString()<<endl<<endl;
				}else{
					if(opcion==4){
						for(int i=0;i<lista_transferidos.size();i++)
                                                        cout<< i+1<< "- "<<lista_transferidos[i]<<endl<<endl;

					}else{
						if(opcion==5)
							acabar=true;
						else
							cout<<"Opcion no valida";
					}
				}
			}
		}
	}	
	return 0;
}
