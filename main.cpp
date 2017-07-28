#include <iostream>
#include <cmath>

using namespace std;

int menu();
void ejercicio1();
void ejercicio2();
void ejercicio3();

int main(){
	cout << "Laboratorio 2 - Carlos Velásquez" << endl;

	do{
		if(menu() == -1){
			return 0;
		}
	}while(true);


	return 0;
}

int menu(){
	cout << "- - - - - - - - - - - - - - -" << endl;

	cout << "Menú Principal" << endl << endl;
	cout << "1. Calcular distancia entre dos puntos" << endl;
	cout << "2. Calcular la serie de seno y coseno" << endl;
	cout << "3. Calcular info de un triángulo" << endl;
	cout << "4. Salir del Programa" << endl << endl;
	cout << "Ingrese el número de la opción que desea: ";

	int resp;
	cin >> resp;

	cout << "- - - - - - - - - - - - - - -" << endl;


	switch(resp){
		case 1:
			ejercicio1();
			break;
		case 2:
			ejercicio2();
			break;
		case 3:
			ejercicio3();
			break;
		case 4:
			return -1;
			break;
		default:
			cout << "Opción inválida, por favor intente de nuevo" << endl;
			break;
	}

	return 0;
}


void ejercicio1(){
	float x1;
	float x2;
	float y1;
	float y2;

	cout << "Ingrese las coordenadas de los puntos" << endl << endl;

	cout << "Punto 1" << endl;
	cout << "Valor de X: ";
	cin >> x1;
	cout << "Valor de Y: ";
	cin >> y1;
	cout << endl;

	cout << "Punto 2" << endl;
	cout << "Valor de X: ";
	cin >> x2;
	cout << "Valor de Y: ";
	cin >> y2;
	cout << endl;

	cout << "Coordenadas ingresadas: (" << x1 << "," << y1 << ") - (" << x2
		<< "," << y2 << ")" << endl;

	float resp;
	resp = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

	cout << "Distancia entre los puntos dados: " << resp << endl;

}

void ejercicio2(){
	float anguloGrados;

	cout << "Ingrese el ángulo en grados: ";
	cin >> anguloGrados;


}

void ejercicio3(){
	float ladoA;
	float ladoB;
	float ladoC;
	float anguloA;
	float anguloB;
	float anguloC;

	cout << "Ingrese la información de triángulo" << endl << endl;
	cout << "Lado a: " << endl;
	cin >> ladoA;
	cout << "Lado b: " << endl;
	cin >> ladoB;
	cout << "Ángulo a: " << endl;
	cin >> anguloA;

	cout << endl;

	anguloB = asin((ladoB*(seno(anguloA)))/ladoA);
	anguloC = asin((ladoC*(seno(anguloA)))/ladoA);
	ladoC = ((seno(anguloC))*(ladoA/(seno(anguloA));

	
	
	cout << "" << endl;
}

