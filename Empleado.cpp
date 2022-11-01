#include<iostream>
#include<string>
using namespace std;

int main(){
	string nombre;
	float salario, horas;
	
	cout<<"Ingrese el nombre del empleado: "<<endl;
	cin>>nombre;
	
	cout<<"Ingrese el salario basico por hora: "<<endl;
	cin>>salario;
	
	cout<<"Ingrese el numero de horas trabajadas en el mes: "<<endl;
	cin>>horas;
	
	if((salario*horas)>450000){
		cout<<"Nombre: "<<nombre<<endl;
		cout<<"Salario mensual: "<<salario*horas<<endl;
	}
	else{
		cout<<"Nombre: "<<nombre<<endl;
	}
	
	return 0;
}