#include "Profesor.h"

void Profesor::llenar_data(){
	fflush(stdin);
	Persona::llenar_data();
	cout<<"Especialidad : ";cin>>especialidad;
	limite = 3;
}
void Profesor::mostrar_data(){
	Persona::mostrar_data();
	cout<<"Especialidad: "<<especialidad<<endl;
	cout<<"\n--------------------------------------------\n";
}
char *Profesor::getcod(){
	return cod;
}
char *Profesor::getnombre(){
	return nombre;
}