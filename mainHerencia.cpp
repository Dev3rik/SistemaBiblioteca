#include "sistema.h"

int main(){
    Sistema s;
    int menu;
	cout<<"Bienvenido al sistema de la biblioteca, Qué desea hacer hoy?"<<endl;
    for ( ; ; )
    {
			cout<<"\t(1) Ingresar datos "<<endl;
	        cout<<"\t(2) Mostrar  Datos "<<endl;
	        cout<<"\t(3) Buscar  datos "<<endl;
	        cout<<"\t(4) Eliminar datos "<<endl;
	        cout<<"\t(5) Salir "<<endl;
	        cout<<"Opcion : ";
	        cin>>menu;
	        cout<<"\n \n";
	        switch (menu){
	        case 1:
	            cout<<"(1) Ingresar Alumno "<<endl;
	            cout<<"(2) Ingresar Profesor "<<endl;
	            cout<<"(3) Ingresar Libro "<<endl;
	            cout<<"(4) Ingresar Tesis "<<endl;
	            cout<<"(5) Ingresar Revista "<<endl;
	            cout<<"(6) Realizar Prestamo "<<endl;
				cout<<"(7) Regresar "<<endl;
	            cout<<"Opcion : ";
	            cin>>menu;
	            s.ingresar(menu);
	            cout<<"\n";
	            break;
	        case 2:
	            cout<<"(1) Mostrar Alumno "<<endl;
	            cout<<"(2) Mostrar Profesor "<<endl;
	            cout<<"(3) Mostrar Libro "<<endl;
	            cout<<"(4) Mostrar Tesis "<<endl;;
	            cout<<"(5) Mostrar Revista "<<endl;
				cout<<"(6) Mostrar Prestamos "<<endl;
	            cout<<"(7) Regresar "<<endl;
	            cout<<"Opcion : ";
	            cin>>menu;
	            s.listar(menu);
	            break;
	            cout<<"\n";
	        case 3:
	            cout<<"(1) Buscar Alumno "<<endl;
	            cout<<"(2) Buscar Profesor "<<endl;
	            cout<<"(3) Buscar Libro "<<endl;
	            cout<<"(4) Buscar Tesis "<<endl;
	            cout<<"(5) Buscar Revista "<<endl;
				cout<<"(6) Buscar Prestamo "<<endl;
	            cout<<"(7) Regresar "<<endl;
	            cout<<"Opcion : ";
	            cin>>menu;
	            s.buscar(menu);
	            break;
	            cout<<"\n";
	        case 4:
	            cout<<"(1) Eliminar Alumno "<<endl;
	            cout<<"(2) Eliminar Profesor "<<endl;
	            cout<<"(3) Eliminar Libro "<<endl;
	            cout<<"(4) Eliminar Tesis "<<endl;
	            cout<<"(5) Eliminar Revista "<<endl;
	            cout<<"(6) Regresar "<<endl;
	            cout<<"Opcion : ";
	            cin>>menu;
	            s.eliminar(menu);
	            break;
	            cout<<"\n";
	        case 5:
	            cout<<"Gracias por usar el Sistema"<<endl;
	            return 0;
	        }


    }
}