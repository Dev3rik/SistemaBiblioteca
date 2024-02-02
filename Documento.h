#ifndef DOCUMENTO_H
#define DOCUMENTO_H
#include <iostream>
using namespace std;

class Documentos{
	protected:
		friend class Sistema;
		friend class Prestamo;
		bool disponible;
   		char *cod=new char [100],*nombre=new char[100];
	public:
    	void llenar_data();
    	void mostrar_data();
};
#endif