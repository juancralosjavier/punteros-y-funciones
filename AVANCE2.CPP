#include <iostream>
#include <vector>
#include <string>
using namespace std;

	int main(int argc, char *argv[]) {
     int var=10;
	 int *puntero;
	 puntero =&var;
	 *puntero=100;
	 cout<<"var:"<<var<<endl;//
	 cout<<"valor puntero : "<<*puntero<<endl;
	 cout<<"direccion puntero: "<<puntero<<endl;
	 
		return 0;
	}
