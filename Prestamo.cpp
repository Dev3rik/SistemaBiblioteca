#include "Prestamo.h"

void Prestamo::mostrar_data() {
        cout << "Documento: "<<endl;
        documento->mostrar_data();
        cout << "Persona que realizó el préstamo: "<<endl;
        usuario->mostrar_data();
    }
char* Prestamo::getdocument(){
	return documento->nombre;
}
char* Prestamo::getnombre(){
	return usuario->nombre;
}