#include <iostream>

using namespace std;

int main(){
	int edad=25,*p_edad;
	p_edad=&edad;
	
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero edad: "<<*p_edad<<endl;
	
	cout<<"______________cambiar valores________________"<<endl;
	edad=40;
	
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero edad: "<<*p_edad<<endl;
	
	cout<<"______________Otra variable a p_edad valores________________"<<endl;
	int edad2=100;
	p_edad=&edad2;
	edad=400;
	
	cout<<"Variable edad: "<<edad<<endl;
	cout<<"Puntero edad: "<<*p_edad<<endl;
	cout<<"Variable edad2: "<<edad2<<endl;
	
	system("pause");
}