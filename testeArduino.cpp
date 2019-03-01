#ifndef arquivoTeste
#define arquivoTeste
#include <iostream>
#include "arduino.cpp"




int main() {
	
	std::cout << "to vivo" << std::endl;
	Sensor *a = new Sensor(2 , 3);
	Sensor *b = new Sensor(6 , 7);
	
	ligaArduino();
	
	pinMode(2, 1);
	pinMode(3, 0);
	
	pinMode(6, 1);
	pinMode(7, 0);
	
	
	int leitura;
	
	
	digitalWrite(2, 1);
	leitura = digitalRead(3);
	std::cout<< "leitura de : " <<leitura << std::endl;
	
	digitalWrite(6, 0);
	leitura = digitalRead(7);
	std::cout<< "leitura de : " <<leitura << std::endl;
	
	
}
#endif