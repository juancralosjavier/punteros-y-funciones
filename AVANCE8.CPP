#include <iostream>
using namespace std;
// pasando a una funcion el parametro puntero
int vocales(char *pc) {
	int contador = 0;
	
	while (*pc != '\0') {
		switch(tolower(*pc)){
			case 'a';
			case 'a';
			case 'a';
		}
	}
	
	return contador;
}

int main(int argc, char *argv[]) {
	char cadena[] = "hola mundo";
	char *pc = cadena;
	
	int totalVocales = vocales(pc);
	
	cout << "El total de vocales es: " << totalVocales << endl;
	
	return 0;
}
