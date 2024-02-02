#include "Libros.h"

void Libros::mostrar_data(){
	Documentos::mostrar_data();
	cout<<"Autor : "<<autor<<endl;
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}

char *Libros::getcod(){
	return cod;
}

char *Libros::getnombre(){
	return nombre;
}

void Libros::llenar_data(){
	Documentos::llenar_data();
	fflush(stdin);
	cout<<"Autor: ";cin.getline(autor,100,'\n');
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
}