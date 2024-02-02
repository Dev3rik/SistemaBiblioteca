#include "Tesis.h"

void tesis::llenar_data(){
	fflush(stdin);
	Documentos::llenar_data();
	cout<<"Tema de Investigacion: ";cin>>temadeinvestigacion;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
}

void tesis::mostrar_data(){
	Documentos::mostrar_data();
	cout<<"Tema de Investigacion: "<<temadeinvestigacion<<endl;
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}

char *tesis::getcod(){
	return cod;
}

char *tesis::getnombre(){
	return nombre;
}