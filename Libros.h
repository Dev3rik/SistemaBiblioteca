#ifndef LIBROS_H
#define LIBROS_H
#include "Documento.h"
class Libros :public Documentos{
    char *autor=new char[100];
public:
    void llenar_data();
	void mostrar_data();
	char* getcod();
	char* getnombre();
};
#endif
