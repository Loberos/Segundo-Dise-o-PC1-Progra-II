#pragma once
#include <iostream>
#include <string>
using namespace std; 
using namespace System; 
class CCancion
{
public:
	CCancion(string _nombre, string c_odigo, string _autor, string _anio, string _tiempo, string _version);
	~CCancion();
	string getnombre(); 
	string getCodigo(); 
	string getautor(); 
	string getanio(); 
	string gettiempo(); 
	string getversion(); 

private:
	string nombre, codigo, autor, anio, tiempo, version; 

};

CCancion::CCancion(string _nombre, string _codigo, string _autor, string _anio, string _tiempo, string _version)
{
	nombre = _nombre; 
	codigo = _codigo; 
	autor = _autor;
	anio = _anio; 
	tiempo = _tiempo; 
	version = _version; 
}

CCancion::~CCancion()
{
}
string CCancion::getnombre() {
	return nombre; 
}
string CCancion::getCodigo() {
	return codigo; 
}
string CCancion::getautor() {
	return autor; 
}
string CCancion::getanio() {
	return anio; 
}
string CCancion::gettiempo() {
	return tiempo; 
}
string CCancion::getversion() {
	return version; 
}