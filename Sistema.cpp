#include "sistema.h"

Sistema::Sistema(){
	for (int i=0;i<100;i++){
		listaAlumno[i]= new Alumno;
		listaProfesor[i]= new Profesor;
		listaLibros[i]=new Libros;
        listaTesis[i]=new tesis;
        listaRevistas[i]=new revistas;
		listaPrestamos[i]=new Prestamo;
	}
	actualAlumno=actualProfesor=actualLibros=actualTesis=actualRevistas=actualprestamo=0;
}
/////////////////////////////SISTEMA-ingresar/////////////////////////////////////////////77777777777777777
void Sistema::ingresar(int tipo){
	if (tipo==1){
		listaAlumno[actualAlumno]->llenar_data();
		actualAlumno++;
	}
	else if (tipo==2){
		listaProfesor[actualProfesor++]->llenar_data();
	}
	else if (tipo==3){
        listaLibros[actualLibros++]->llenar_data();
    }
    else if (tipo==4){
        listaTesis[actualTesis++]->llenar_data();
    }
    else if (tipo==5){
        listaRevistas[actualRevistas++]->llenar_data();
    }
	else if (tipo==6){
        //listaPrestamos[actualprestamo++]->llenar_data();
    }


	// Completar


}
//////////////////////////////////SISTEMA-listar/////////////////////////////////////////////////////
void Sistema::listar(int tipo){
	if (tipo==1){
		for(int i=0;i<actualAlumno;i++){
			listaAlumno[i]->mostrar_data();
		}
	}
	else if (tipo==2){
		for(int i=0;i<actualProfesor;i++){
			listaProfesor[i]->mostrar_data();
		}
	}
	else if (tipo==3){
		for(int i=0;i<actualLibros;i++){
			listaLibros[i]->mostrar_data();
		}
	}
	else if (tipo==4){
		for(int i=0;i<actualTesis;i++){
			listaTesis[i]->mostrar_data();
		}
	}	
	else if (tipo==5){
		for(int i=0;i<actualRevistas;i++){
			listaRevistas[i]->mostrar_data();
		}
	}
	else if (tipo==6){
		for(int i=0;i<actualprestamo;i++){
			listaPrestamos[i]->mostrar_data();
		}
	}
	// Completar


}
///////////////////SISTEMA-buscar/////////////////////////////////////////////////////////////////
void Sistema::buscar(int tipo){
	if(tipo==1){
		int x;
		cout<<"Buscar por"<<endl;
		cout<<"(1) Codigo"<<endl;
		cout<<"(2) Nombre"<<endl;
		cout<<"Opcion: ";cin>>x;
		if (x==1){
			char *codex= new char [20];
			cout<<"Codigo de Alumno: ";cin>>codex;
			for(int i=0;i<actualAlumno;i++)
			{
				if(strcmp(codex,listaAlumno[i]->getcod())==0)
					listaAlumno[i]->mostrar_data();
			}
		}
		else if (x==2){
			char *name= new char [20];
			cout<<"Nombre de Alumno: ";cin>>name;
			for(int i=0;i<actualAlumno;i++)
			{
				if(strcmp(name,listaAlumno[i]->getnombre())==0)
					listaAlumno[i]->mostrar_data();
			}
		}
	}
	else if(tipo==2){
		int x;
		cout<<"Buscar por"<<endl;
		cout<<"(1) Codigo"<<endl;
		cout<<"(2) Nombre"<<endl;
		cout<<"Opcion: ";cin>>x;
		if (x==1){
			char *codex= new char [20];
			cout<<"Codigo de Profesor: ";cin>>codex;
			for(int i=0;i<actualProfesor;i++)
			{
				if(strcmp(codex,listaProfesor[i]->getcod())==0)
					listaProfesor[i]->mostrar_data();
			}
		}
		else if (x==2){
			char *name= new char [20];
			cout<<"Nombre de Profesor: ";cin>>name;
			for(int i=0;i<actualProfesor;i++)
			{
				if(strcmp(name,listaProfesor[i]->getnombre())==0)
					listaProfesor[i]->mostrar_data();
			}
		}
	}
	else if(tipo==3){
		int x;
		cout<<"Buscar por"<<endl;
		cout<<"(1) Codigo"<<endl;
		cout<<"(2) Nombre"<<endl;
		cout<<"Opcion: ";cin>>x;
		if (x==1){
			char *codex= new char [20];
			cout<<"Codigo de Libro: ";cin>>codex;
			for(int i=0;i<actualLibros;i++)
			{
				if(strcmp(codex,listaLibros[i]->getcod())==0)
					listaLibros[i]->mostrar_data();
			}
		}
		else if (x==2){
			char *name= new char [20];
			cout<<"Nombre de Libro: ";cin>>name;
			for(int i=0;i<actualLibros;i++)
			{
				if(strcmp(name,listaLibros[i]->getnombre())==0)
					listaLibros[i]->mostrar_data();
			}
		}
	}
	else if(tipo==4){
		int x;
		cout<<"Buscar por"<<endl;
		cout<<"(1) Codigo"<<endl;
		cout<<"(2) Nombre"<<endl;
		cout<<"Opcion: ";cin>>x;
		if (x==1){
			char *codex= new char [20];
			cout<<"Codigo de tesis: ";cin>>codex;
			for(int i=0;i<actualTesis;i++)
			{
				if(strcmp(codex,listaTesis[i]->getcod())==0)
					listaTesis[i]->mostrar_data();
			}
		}
		else if (x==2){
			char *name= new char [20];
			cout<<"Nombre de tesis: ";cin>>name;
			for(int i=0;i<actualTesis;i++)
			{
				if(strcmp(name,listaTesis[i]->getnombre())==0)
					listaTesis[i]->mostrar_data();
			}
		}
	}
	else if(tipo==5){
		int x;
		cout<<"Buscar por"<<endl;
		cout<<"(1) Codigo"<<endl;
		cout<<"(2) Nombre"<<endl;
		cout<<"Opcion: ";cin>>x;
		if (x==1){
			char *codex= new char [20];
			cout<<"Codigo de Revistas: ";cin>>codex;
			for(int i=0;i<actualRevistas;i++)
			{
				if(strcmp(codex,listaRevistas[i]->getcod())==0)
					listaRevistas[i]->mostrar_data();
			}
		}
		else if (x==2){
			char *name= new char [20];
			cout<<"Nombre de Revistas: ";cin>>name;
			for(int i=0;i<actualRevistas;i++)
			{
				if(strcmp(name,listaRevistas[i]->getnombre())==0)
					listaRevistas[i]->mostrar_data();
			}
		}
	}
	/*else if(tipo==6){
		int x;
		cout<<"Buscar por"<<endl;
		cout<<"(1) Codigo"<<endl;
		cout<<"(2) Nombre"<<endl;
		cout<<"Opcion: ";cin>>x;
		if (x==1){
			char *codex= new char [20];
			cout<<"Codigo de Prestamo: ";cin>>codex;
			for(int i=0;i<actualPrestamo;i++)
			{
				if(strcmp(codex,listaPrestamo[i]->getcod())==0)
					listaPrestamo[i]->mostrar_data();
			}
		}
		else if (x==2){
			char *name= new char [20];
			cout<<"Nombre de Alumno del prestamo: ";cin>>name;
			for(int i=0;i<actualPrestamo;i++)
			{
				if(strcmp(name,listaPrestamo[i]->getnombre())==0)
					listaPrestamo[i]->mostrar_data();
			}
		}
	}
*/
	// Completar
}
///////////////////////SISTEMA-eliminar///////////////////////////////////////////////////////////
void Sistema::eliminar(int tipo){
	// Completar
	if(tipo==1){
		int x;
		cout<<"Buscar por"<<endl;
		cout<<"(1) Codigo"<<endl;
		cout<<"(2) Nombre"<<endl;
		cout<<"Opcion: ";cin>>x;
		if (x==1){
			char *codex= new char [20];
			cout<<"Codigo de Alumno: ";cin>>codex;
			for(int i=0;i<actualAlumno;i++){
				if(strcmp(codex,listaAlumno[i]->getcod())==0){
					for(int j=i;j<actualAlumno;j++){
						listaAlumno[i]=listaAlumno[i+1];
					}					
					actualAlumno--;
					break;
				}
			}
		}
		else if (x==2){
			char *name= new char [20];
			cout<<"Nombre de Alumno: ";cin>>name;
			for(int i=0;i<actualAlumno;i++){
				if(strcmp(name,listaAlumno[i]->getnombre())==0){
					for(int j=i;j<actualAlumno;j++){
						listaAlumno[i]=listaAlumno[i+1];
					}
					actualAlumno--;
				}
			}
		}
	}
	else if(tipo==2){
		int x;
		cout<<"Buscar por"<<endl;
		cout<<"(1) Codigo"<<endl;
		cout<<"(2) Nombre"<<endl;
		cout<<"Opcion: ";cin>>x;
		if (x==1){
			char *codex= new char [20];
			cout<<"Codigo de Profesor: ";cin>>codex;
			for(int i=0;i<actualProfesor;i++){
				if(strcmp(codex,listaProfesor[i]->getcod())==0){
					for(int j=i;j<actualProfesor;j++){
						listaProfesor[i]=listaProfesor[i+1];
					}					
					actualProfesor--;
					break;
				}
			}
		}
		else if (x==2){
			char *name= new char [20];
			cout<<"Nombre de Profesor: ";cin>>name;
			for(int i=0;i<actualProfesor;i++){
				if(strcmp(name,listaProfesor[i]->getnombre())==0){
					for(int j=i;j<actualProfesor;j++){
						listaProfesor[i]=listaProfesor[i+1];
					}
					actualProfesor--;
				}
			}
		}
	}
	else if(tipo==3){
		int x;
		cout<<"Buscar por"<<endl;
		cout<<"(1) Codigo"<<endl;
		cout<<"(2) Nombre"<<endl;
		cout<<"Opcion: ";cin>>x;
		if (x==1){
			char *codex= new char [20];
			cout<<"Codigo de Profesor: ";cin>>codex;
			for(int i=0;i<actualProfesor;i++){
				if(strcmp(codex,listaProfesor[i]->getcod())==0){
					for(int j=i;j<actualProfesor;j++){
						listaProfesor[i]=listaProfesor[i+1];
					}					
					actualProfesor--;
					break;
				}
			}
		}
		else if (x==2){
			char *name= new char [20];
			cout<<"Nombre de Profesor: ";cin>>name;
			for(int i=0;i<actualProfesor;i++){
				if(strcmp(name,listaProfesor[i]->getnombre())==0){
					for(int j=i;j<actualProfesor;j++){
						listaProfesor[i]=listaProfesor[i+1];
					}
					actualProfesor--;
				}
			}
		}		
	}
	else if(tipo==4){
		int x;
		cout<<"Buscar por"<<endl;
		cout<<"(1) Codigo"<<endl;
		cout<<"(2) Nombre"<<endl;
		cout<<"Opcion: ";cin>>x;
		if (x==1){
			char *codex= new char [20];
			cout<<"Codigo de Profesor: ";cin>>codex;
			for(int i=0;i<actualProfesor;i++){
				if(strcmp(codex,listaProfesor[i]->getcod())==0){
					for(int j=i;j<actualProfesor;j++){
						listaProfesor[i]=listaProfesor[i+1];
					}					
					actualProfesor--;
					break;
				}
			}
		}
		else if (x==2){
			char *name= new char [20];
			cout<<"Nombre de Profesor: ";cin>>name;
			for(int i=0;i<actualProfesor;i++){
				if(strcmp(name,listaProfesor[i]->getnombre())==0){
					for(int j=i;j<actualProfesor;j++){
						listaProfesor[i]=listaProfesor[i+1];
					}
					actualProfesor--;
				}
			}
		}		
	}
	else if(tipo==5){
		int x;
		cout<<"Buscar por"<<endl;
		cout<<"(1) Codigo"<<endl;
		cout<<"(2) Nombre"<<endl;
		cout<<"Opcion: ";cin>>x;
		if (x==1){
			char *codex= new char [20];
			cout<<"Codigo de Profesor: ";cin>>codex;
			for(int i=0;i<actualProfesor;i++){
				if(strcmp(codex,listaProfesor[i]->getcod())==0){
					for(int j=i;j<actualProfesor;j++){
						listaProfesor[i]=listaProfesor[i+1];
					}					
					actualProfesor--;
					break;
				}
			}
		}
		else if (x==2){
			char *name= new char [20];
			cout<<"Nombre de Profesor: ";cin>>name;
			for(int i=0;i<actualProfesor;i++){
				if(strcmp(name,listaProfesor[i]->getnombre())==0){
					for(int j=i;j<actualProfesor;j++){
						listaProfesor[i]=listaProfesor[i+1];
					}
					actualProfesor--;
				}
			}
		}		
	}

}