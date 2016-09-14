/*Montoya Rangel luis Rodrigo
Clase cola con atributos y métodos */

#include "Nodo.h"

class Cola
{
public:
	//Nodos sentinelas
	Nodo* H;
	Nodo* T;
	//constructor	
	Cola();
	//metodos
	void Encolar(int Dato);
	int Desencolar();
	void Show();
	bool ColaVacia();
	void VaciarCola();
};
