/*Montoya Rangel luis Rodrigo
Define los metodos de la cola */
#include "Cola.h"
/*Método constructor, crea una cola vacia
@params: NULL
@result: Cola
*/
Cola::Cola()
{
	this->H=NULL;
	this->T=NULL;
}
/*Método que verifica si la cola esta vacia
@params: NULL
@result: bool*/
bool Cola::ColaVacia()
{
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}
/*Método que agrega un nodo a la cola
@params: Dato
@result: NULL*/
void Cola::Encolar(int Dato)
{
	Nodo * aux = new Nodo(Dato);
	if (ColaVacia())
	{
		this->H=aux;
		this->T=aux;
		return;		
	}
	this->T->setSig(aux);
	this->T=aux;
	return;
}
/*Método que elimina el primer nodo de la cola y regresa su valor
@params: NULL
@result: int*/
int Cola::Desencolar()
{
	if (ColaVacia())
	{
		std::cout<<"La lista esta vacia"<<std::endl;
		return NULL;
  	}
	int Dato=this->H->getDato();	
	if (this->H==this->T)
	{
		this->H=NULL;
		this->T=NULL;
		std::cout<<"El elemento "<<Dato<<" fue sacado de la cola"<<std::endl;
	}
	else
	{
		Nodo *aux=this->H;
		this->H=aux->getSig();
		std::cout<<"El elemento "<<Dato<<" fue sacado de la cola"<<std::endl;
	}
	return Dato;
}
/*Método que vacia la cola
@params: NULL
@result: NULL*/
void Cola::VaciarCola()
{
	this->H=NULL;
	this->T=NULL;
	std::cout<<"La cola ha sido vaciada"<<std::endl;
	return;
}
/*Método que muestra los elementos de la cola
@params: Dato
@result: Nodo*/ 
void Cola::Show()
{
	if(ColaVacia())
	{
		std::cout<<"La cola esta vacia"<<std::endl;
		return;
	}
	Nodo *aux = this->H;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
	return;
}
