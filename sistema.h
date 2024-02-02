#ifndef SISTEMA_H
#define SISTEMA_H
#include "Alumno.h"
#include "Profesor.h"
#include "Libros.h"
#include "Tesis.h"
#include "Prestamo.h"
#include "Revistas.h"


class Sistema{
	friend class Prestamo;
	Alumno *listaAlumno[100];
	Profesor *listaProfesor[100];
	Libros *listaLibros[100];
    tesis *listaTesis[100];
    revistas *listaRevistas[100];
	Prestamo *listaPrestamos[100];
	int actualAlumno,actualProfesor,actualLibros,actualTesis,actualRevistas,actualprestamo;
public:
	Sistema();
	void ingresar(int);
	void listar(int);
	void buscar(int);
	void eliminar(int);
};
#endif