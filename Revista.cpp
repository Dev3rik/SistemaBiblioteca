#include "Revistas.h"

void revistas::llenar_data(){
	Documentos::llenar_data();
	cout<<"Editorial: ";cin>>editorial;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
}

void revistas::mostrar_data(){
	Documentos::mostrar_data();
	cout<<"Editorial: "<<editorial<<endl;
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}

char *revistas::getcod(){
	return cod;
}

char *revistas::getnombre(){
	return cod;
}