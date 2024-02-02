#ifndef PROFESOR_H
#define PROFESOR_H
#include "Persona.h"

class Profesor:public Persona{
	friend class Sistema;
	char *especialidad=new char[100];
public:
	void llenar_data();
	void mostrar_data();
	char* getcod();
	char* getnombre();
};
#endif