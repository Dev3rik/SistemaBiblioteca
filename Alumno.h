#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"

class Alumno:public Persona{
	friend class Sistema;
	char *creditos=new char [100];
	public:
		void llenar_data();
		void mostrar_data();
		char* getcod();
		char* getnombre();
};
#endif