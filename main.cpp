#include <iostream>
#include <cmath>

using namespace std;

int menu();
void ejercicio1();
void ejercicio2();
void ejercicio3();
double seno(double num);
double coseno(double num);
double arcoseno(double num);
long factorial(double num);

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

	cout << endl;
	cout << "Seno del ángulo: " << seno(anguloGrados) << endl;
	cout << "Coseno del ángulo: " << coseno(anguloGrados) << endl;

}

void ejercicio3(){
	float ladoA;
	float ladoB;
	float ladoC;
	float anguloA;
	float anguloB;
	float anguloC;
	float area;
	float alturaA;
	float alturaB;
	float alturaC;
	float s;

	cout << "Ingrese la información de triángulo" << endl << endl;
	cout << "Lado a: ";
	cin >> ladoA;
	cout << "Lado b: ";
	cin >> ladoB;
	cout << "Ángulo A: ";
	cin >> anguloA;

	//cout << anguloA << endl;

	//cout << (ladoB*(seno(anguloA)))/ladoA;
	anguloB = arcoseno((ladoB*(seno(anguloA)))/ladoA);
	anguloC = 180 - anguloA - anguloB;
	ladoC = ((seno(anguloC))*(ladoA/(seno(anguloA))));
	//anguloC = asin((ladoC*(seno(anguloA)))/ladoA);

	s = (ladoA + ladoB + ladoC)/2;
	area = sqrt(s*(s-ladoA)*(s-ladoB)*(s-ladoC));

	alturaA = (2/ladoA)*area;
	alturaB = (2/ladoB)*area;
	alturaC = (2/ladoC)*area;

	cout << "Información calculada: " << endl << endl
		<< "Lado c: " << ladoC << endl
		<< "Ángulo B: " << anguloB << endl
		<< "Ángulo C: " << anguloC << endl
		<< "Semiperímetro: " << s << endl
		<< "Área: " << area << endl
		<< "Altura a: " << alturaA << endl
		<< "Altura b: " << alturaB << endl
		<< "Altura c: " << alturaC << endl;
}

double seno(double num){
	int cont;

	num *= 3.14159265;
	num /= 180;
	cont = 0;
	
	for(int i = 3; i < 25; i += 2){
		if(cont%2 == 0){
			num -= (pow(num, i))/factorial(i);	
		}else{
			num += (pow(num, i))/factorial(i);
		}

		cont ++;
	}

	return num;
}

double coseno(double num){
	int cont;

	num *= 3.14159265;
	num /= 180;
	cont = 0;

	double num2 = 1;
	
	for(int i = 2; i < 12; i += 2){
		if(cont%2 == 0){
			num2 -= (pow(num, i))/factorial(i);	
		}else{
			num2 += (pow(num, i))/factorial(i);
		}

		cont ++;
	}

	return num2;
}

double arcoseno(double num){
	num = asin(num);
	num *= 180;
	num /= 3.14159265;
	return num;
}

long factorial(double num){
	//cout << num << endl;

	long num2;
	num2 = num;

	for(int i = num - 1; i > 0; i--){
		num2 *= i;
	}
	
	//cout << num2 << endl;
	return num2;
}
