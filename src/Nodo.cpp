/*Montoya Rangel luis Rodrigo
Definición de los métodos definidos en Nodo.h*/

#include "Nodo.h"

/*Método constructor, crea un nodo con un dato dado por el usuario y establece el siguiente nodo
@params: Dato, Sig
@result: Nodo*/ 
Nodo::Nodo(int Dato , Nodo* Sig)
{
	this->Dato = Dato;
	this->Sig = Sig;
}
/*Método constructor, crea un nodo con un dato dado por el usuario
@params: Dato
@result: Nodo*/
Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
	this->Sig = NULL;
}
/*Cambia el dato guardado en el nodo
@params: Dato
@result: Null*/
void Nodo::setDato(int Dato)
{
	this->Dato = Dato;
}
/*Establece cual sera el nodo siguiente al actual
@params: Sig
@result: Null*/
void Nodo::setSig(Nodo* Sig)
{
	this->Sig = Sig;
}
/*Obtiene el dato guardado en el nodo
@params: NULL
@result: int*/
int Nodo::getDato()
{
	return this->Dato;
}
/*obtiene el nodo siguiente al actual
@params: NULL
@result: Nodo*/
Nodo* Nodo::getSig()
{
	return this->Sig;
}
