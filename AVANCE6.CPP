#include <iostream>
#include <vector>
#include <string>
using namespace std;
//realiza el conteo de vocales de la cadena por medio del puntero.
int contarVocales(char *cadena) {
	int contador = 0;
	
	while (*cadena != '\0') {
		if (*cadena == 'a' || *cadena == 'e' || *cadena == 'i' || *cadena == 'o' || *cadena == 'u' ||
			*cadena == 'A' || *cadena == 'E' || *cadena == 'I' || *cadena == 'O' || *cadena == 'U') {
			contador++;
		}
		cadena++;
	}
	
	return contador;
}

int main(int argc, char *argv[]) {
	char cadena[] = "holaaaa mundoooo";
	char *pc = cadena;
	
	int totalVocales = contarVocales(pc);
	
	cout << "El total de vocales en la cadena es: " << totalVocales << endl;
	
	return 0;
}

