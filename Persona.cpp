#include "Persona.h"

void Persona::llenar_data(){
	fflush(stdin);
	cout<<"Nombre :  ";cin.getline(nombre,100,'\n');
	cout<<"Codigo :  ";cin.getline(cod,100,'\n');
}
void Persona::mostrar_data(){
	cout<<"Nombre : "<<nombre<<endl;
	cout<<"Codigo : "<<cod<<endl;
}