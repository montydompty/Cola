/*Montoya Rangel luis Rodrigo
Método principal de la cola*/

#include "Cola.h"

int main()
{
	/*Main que utiliza el constructor de cola para crear una cola vacia y probar su funcionamineto*/
	Cola c = Cola();
	c.Encolar(2);	
	c.Encolar(3);
	c.Encolar(4);
	c.Desencolar();
	c.Encolar(5);
	c.Show();
	c.VaciarCola();
	c.Show();
	return 0;
}
