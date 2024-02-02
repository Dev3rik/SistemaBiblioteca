all: krosti exc
krosti:
	g++ mainHerencia.cpp  Alumno.cpp Documento.cpp Libros.cpp Persona.cpp Prestamo.cpp Profesor.cpp Revista.cpp Sistema.cpp Tesis.cpp  -o main2

exc:
	./main2.exe