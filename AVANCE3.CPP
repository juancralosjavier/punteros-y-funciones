#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int var=10;
	int num=0;
	int *puntero=NULL;
	puntero =&var;
	puntero=&num;
	cout<<"var:"<<var<<endl;//
	cout<<"valor puntero : "<<*puntero<<endl;
	cout<<"direccion puntero: "<<puntero<<endl;
	
	return 0;
}
