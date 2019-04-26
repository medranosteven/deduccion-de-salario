//hecho por jesus steven medrano
//carnet MC18055

#include <iostream>
#include <string.h>
#include <conio.h>
#include "misclases.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

//clase: propiedades y metodos definidos e implementados
//clase abstracta:propiedades , metodos definidos/implementados y por lo menos un metodo sin implementar
//interfaces:son clases que no tienen ningun metodo implementado
int main(int argc, char** argv) {
	 
	ISSS *d=new ISSS();
//	d->setcodigo(1);
//	d->settipo("isss");
    cout<<"Total ISSS:"<<d->getCalculo(600)<<endl<<endl;
    
    AFP *de=new AFP();
    cout<<"Total AFP:"<<de->getCalculo(600)<<endl<<endl;
    
    getch();
	return 0;
}
