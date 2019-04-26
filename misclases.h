//hecho por jesus steven medrano
//carnet MC18055

#include <string.h>
#ifndef MISCLASES_H
#define MISCLASES_H

//misclases{

using namespace std;

class Deducciones{
	private:
	int codigo;
	string tipo;
	float total;
	
	/*CODIGO SET Y GET PARA LOS ATRIBUTOS*/
	public:
	void setcodigo(int c){
		this->codigo=c;
	}
	int getcodigo()
	{
		return this->codigo;
	}
	//****************************
	void settipo(string t){
		this->tipo=t;
	}
	string gettipo()
	{
		return this->tipo;
	}
	//*****************************
	void settotal(float t){
		this->total=t;
	}
	float gettotal()
	{
		return this->total;
	}
	/*METODO VIRTUAL**/
	virtual  float  getCalculo(float salario)=0;//metodo adstracto	
};


class Interface{
	public:
	virtual  float  getCalculo(float salario)=0;

};


class ISSS:public Interface{
public:
   float getCalculo(float salario)
   {
   		float isss=0;
   		
   		if(salario>600)
   		{
	   		isss=600*0.03f;
		}
		else
		{
			isss=salario*0.03f;
		}
   		return isss;
   } 
};

class AFP:public Interface{
public:
   float getCalculo(float salario)
   {
   		float afp=0;
   		
   		if(salario>600)
   		{
	   		afp=600*0.0725f;
		}
		else
		{
			afp=salario*0.0725f;
		}
   		return afp;
   } 
};
//};
#endif

