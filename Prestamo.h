#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "Persona.h"
#include "Documento.h"

class Prestamo{
	protected:
		//Codigo, fecha, usuario, documento
		friend class Sistema;
		char *cod = new char [100];
		char *fecha = new char [100];
		Persona *usuario ;
		Documentos *documento ; 
	public:
		void hacer_prestamo();
		void devolver_prestamo();
		void mostrar_data();
		char* getdocument();
		char* getnombre();

};
#endif
