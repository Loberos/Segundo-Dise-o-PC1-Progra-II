#pragma once
#include "Cancion.h"
#include "ListaVirtual.h"
class Controlador
{
public:
	Controlador();
	~Controlador();
	void menu(); 
	void agregarLista(); 
	void mostrarLista(); 
	 
private:
	string nombre, codigo, autor, anio, tiempo, version;
	CCancion* objCancion; 
	CListaVirtual* Arr; 
	int opcion; 
	int posicion; 
};

Controlador::Controlador()
{
	
	Arr = new CListaVirtual();
}

Controlador::~Controlador()
{
}
void Controlador::menu() {
	do
	{
		cout << "::::::::::::::::::::MENU::::::::::::::::::::" << endl;
		cout << "	1. - Agregar nueva canción" << endl;
		cout << "	2. - Listado canciones" << endl;
		cout << "	3. - Eliminar canción" << endl;
		cout << "	4. - Reporte de canciones por año" << endl;
		cout << "        5 - Salir" << endl;
		cout << "Ingrese Opcion: "; 
		cin >> opcion; 
		switch (opcion)
		{
		case 1:  
			agregarLista(); 
			system("pause");
			break;
		case 2: 
			mostrarLista(); 
			system("pause");
			break;
		case 3: 
			cout << "Que posicion de cancion desea eliminar: "; 
			cin >> posicion; 
			Arr->eliminar(posicion);  break;
		case 4: break;
		}
		system("cls");
	} while (opcion!=5);
	
	
}
void Controlador::agregarLista() {
	cout << endl; cout << endl;
	cout << "::::::::::::::::::::REGISTRAR CANCION CANCIONES::::::::::::::::::::" << endl;
	cout << "Nombre: "; cin >> nombre;
	cout << "Codigo: "; cin >> codigo;
	cout << "Autor: "; cin >> autor; 
	cout << "Anio: "; cin >> anio; 
	cout << "Tiempo: "; cin >> tiempo;
	cout << "Version: "; cin >> version; 
	Arr->push_back(new CCancion(nombre, codigo, autor, anio, tiempo, version));
}
void Controlador::mostrarLista() {
	cout << "::::::::::::::::::::LISTA DE CANCIONES::::::::::::::::::::" << endl;
	cout << "NOMBRE \t |     CODIGO \t |     AUTOR \t |    ANIO \t |    TIEMPO \t |    VERSION " << endl; 
	for (int i = 0; i < Arr->size(); i++)
	{
		cout << Arr->at(i)->getnombre(); cout << "\t\t"; 
		cout << Arr->at(i)->getCodigo(); cout << "\t\t"; 
		cout << Arr->at(i)->getautor();	 cout << "\t\t"; 
		cout << Arr->at(i)->getanio();	 cout << "\t\t"; 
		cout << Arr->at(i)->gettiempo(); cout << "\t\t"; 
		cout << Arr->at(i)->getversion();cout << "\t\t"; 
	}
	cout << endl; 
}
