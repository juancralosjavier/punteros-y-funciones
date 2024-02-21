#include <iostream>
using namespace std;

void funcion(int n ){
	cout<<"hola INTEGER"<<endl;
}
void funcion(char c){
		cout<<"FUNCION CHAR"<<endl;
}
void funcion(double n){
			cout<<"FUNCION DOUBLE"<<endl;
}
void funcion(){
		cout<<"hola mundo"<<endl;
}
		
int main(int argc, char *argv[]) {
	
	funcion();//LLAMA A LA FUNCION EN VACIO
	funcion(5);//LLAMA A LA FUNCION ENTERA
	funcion('h');//LLAMA A LA FUNCION STRING
	funcion(11.5);//LLAMA A LA FUNCION DOUBLE
	return 0;
}

