#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;
class Persona{
    protected:
    	// Una función friend de una clase es una función que no pertenece a la clase, pero que tiene permiso para acceder
    	// a sus variables y funciones miembro privadas. Si una clase se declara friend de otra, todas sus funciones miembro
    	// o métodos son friend de esta segunda clase.
		friend class Sistema;
		friend class Prestamo;
		int limite;
    	char *cod = new char [100];
		char *nombre = new char[100];
	public:
    	void llenar_data();
    	void mostrar_data();
};


#endif