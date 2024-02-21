#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int v[] = {6, 7, 8};
	int *pi = NULL;
	int num;
	pi=v;
	for (int i = 0; i < 3; ++i) {
		num = v[i];// toma el valor de sub i que inicia en 0
		cout << "num : " << num << endl;
		cout << "pi  : " << *pi << endl;
		pi++;
		cout << endl; // Salto de línea
	}
	
	return 0;
}
