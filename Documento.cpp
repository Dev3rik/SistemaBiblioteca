#include "Documento.h"

void Documentos::llenar_data(){
	fflush(stdin);
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"Nombre: ";cin.getline(nombre,100,'\n');
	cout<<"Codigo: ";cin.getline(cod,100,'\n');
	disponible = true;
}

void Documentos::mostrar_data(){
   	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Codigo: "<<cod<<endl;
}