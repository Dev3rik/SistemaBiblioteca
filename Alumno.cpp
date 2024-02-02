#include "Alumno.h"

void Alumno::llenar_data(){
	fflush(stdin);
	Persona::llenar_data();
	cout<<"Creditos: ";cin>>creditos;
	limite = 2;
}
void Alumno::mostrar_data(){
	Persona::mostrar_data();
	cout<<"Creditos: "<<creditos<<endl;
	cout<<"---------------------------------------------------------------------"<<endl;
}
char *Alumno::getcod(){
	return cod;
}
char *Alumno::getnombre(){
	return nombre;
}