#include <iostream>

using namespace std;

main () {
	setlocale(LC_ALL, "Portuguese");
	
	float peso,altura,media;
	
	cout << "*********************" <<endl;
	cout << "******Bem-vindo******" <<endl;
	cout << "*********************" <<endl;
	
	cout << "Informe seu peso: ";
	cin >> peso;
	
	cout << "Informe sua altura: ";
	cin >> altura;

	if (peso <18,5){
		cout << "Abaixo do peso ";
	}
	
	

