#ifndef TESIS_H
#define TESIS_H
#include "Documento.h"

class tesis :public Documentos{
    char *temadeinvestigacion=new char[100];
	public:
    	void llenar_data();
		void mostrar_data();
		char* getcod();
		char* getnombre();
};
#endif