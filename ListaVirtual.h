#pragma once
#include "Cancion.h"
class CListaVirtual
{
public:
	CListaVirtual();
	~CListaVirtual();

	void push_back(CCancion* dato);
	void eliminar(int posicion);
	int size();
	CCancion* at(int posicion);

private:
	int tamanioArr;
	CCancion** arrObjetos;
};

CListaVirtual::CListaVirtual()
{
	tamanioArr = 0;
	arrObjetos = new CCancion * [tamanioArr];
}

CListaVirtual::~CListaVirtual()
{
}
void CListaVirtual::push_back(CCancion* dato) {
	CCancion** aux = new CCancion * [tamanioArr + 1];
	for (int i = 0; i < tamanioArr; i++)
	{
		aux[i] = arrObjetos[i];
	}
	aux[tamanioArr] = dato;
	tamanioArr++;
	delete[]arrObjetos;
	arrObjetos = aux;
	aux = nullptr;
	delete aux;
}
void CListaVirtual::eliminar(int posicion) {
	CCancion** aux = new CCancion * [tamanioArr - 1];
	for (int i = 0; i < tamanioArr - 1; i++)
	{
		if (i < posicion) {
			aux[i] = arrObjetos[i];
		}
		else { aux[i] = arrObjetos[i + 1]; }
	}
	tamanioArr--;
	delete[]arrObjetos;
	arrObjetos = aux;
	aux = nullptr;
	delete aux;
}
int CListaVirtual::size() {
	return tamanioArr;
}
CCancion* CListaVirtual::at(int posicion) {
	return arrObjetos[posicion];
}

