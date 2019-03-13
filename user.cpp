#ifndef CLIENT
#define CLIENT

#include <iostream>
#include "cliente.cpp"
#include <windows.h>



void setup(){

	pinMode(2, 1);
	pinMode(3, 0);
	
	pinMode(6, 1);
	pinMode(7, 0);
}

void loop(){

	int leitura;
	
	digitalWrite(2, 1);
	leitura = digitalRead(3);
	std::cout<< "leitura de : " <<leitura << std::endl;
	
	digitalWrite(6, 0);
	leitura = digitalRead(7);
	std::cout<< "leitura de : " <<leitura << std::endl;

}

#endif // CLIENT
