#ifndef REVISTA_H
#define REVISTA_H
#include "Documento.h"

class revistas:public Documentos{
    char *editorial=new char[100];
	public:
    	void llenar_data();
		void mostrar_data();
		char* getcod();
		char* getnombre();
};
#endif