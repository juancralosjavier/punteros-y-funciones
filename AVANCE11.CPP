#include <iostream>
#include <cstdlib> // Para utilizar la funci�n rand()
#include <ctime> // Para inicializar el generador de n�meros aleatorios
using namespace std;

typedef struct { 
	int hora, minuto, segundo; 
} tiempo;

// Funci�n para generar una hora aleatoria entre 0 y 23
int horaRand() {
	return rand() % 24;
}

// Funci�n para generar un minuto o segundo aleatorio entre 0 y 59
int msRand() {
	return rand() % 60;
}

// Funci�n para agregar valores aleatorios a la estructura tiempo
void agregar(tiempo vt[], int tamanio) {
	for (int i = 0; i < tamanio; i++) {
		vt[i].hora = horaRand();
		vt[i].minuto = msRand();
		vt[i].segundo = msRand();
	}
}

// Funci�n para imprimir los valores de la estructura tiempo
void imprimir(tiempo vt[], int tamanio) {
	for (int i = 0; i < tamanio; i++) {
		cout << "La Hora es : " << vt[i].hora << ":" << vt[i].minuto << ":" << vt[i].segundo << endl;
	}
}

int main(int argc, char *argv[]) {
	const int TMA = 5;
	tiempo vt[TMA];
	
	// Inicializa el generador de n�meros aleatorios
	srand(time(NULL));
	
	// Agrega valores aleatorios a la estructura tiempo
	agregar(vt, TMA);
	
	// Imprime los valores de la estructura tiempo
	imprimir(vt, TMA);
	
	return 0;
}

