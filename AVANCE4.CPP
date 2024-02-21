#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int v[]={6,7,8};
	int *pi=NULL;
	int num;
	num=v[0];
	pi=v;//apuntando el primer elemento
	cout<<"num : "<<num<<endl;
	cout<<"pi  : "<<*pi<<endl;
	cout<<endl;//salto de linea
	
	num=v[1];
	pi=pi+1;
	cout<<"num : "<<num<<endl;
	cout<<"pi  : "<<*pi<<endl;
	cout<<endl;//salto de linea
	
	num=v[2];
	pi=pi+1;
	cout<<"num : "<<num<<endl;
	cout<<"pi  : "<<*pi<<endl;
	cout<<endl;//salto de linea
		
	return 0;
}
