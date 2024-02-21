#include <iostream>
#include <vector>
#include <string>
using namespace std;
void funcion(int &var){
	var=100;
}
int main(int argc, char *argv[]) {
	int var=10;
	funcion(var);
	cout<<"var:"<<var;//imprimir 100
	return 0;
}
