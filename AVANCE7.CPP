#include <iostream>
using namespace std;
// pasando a una funcion el parametro puntero
int vocales(char *ptr) {
	int contador = 0;
	
	while (*ptr != '\0') {
		if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
			*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
			contador++;
		}
		ptr++;
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

