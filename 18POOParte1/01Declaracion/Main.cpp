/**
 * @author Fernando Ismael Canul Caballero
 * 
 */

#include <iostream>
#include "Punto.h"

using namespace std;

int main(int argc, char** argv) {
	
	Punto punto(10, 10);
	
	cout<<"El valor de x es: "<<punto.getX()<<endl;
	cout<<"El valor de y es: "<<punto.getY()<<endl;
		
	getchar();
	return 0;
}