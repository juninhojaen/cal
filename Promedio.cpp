//Realizar un programa que pida notas hasta que diga noy sauqe 2 promedios
//uno mayor o igual a 18 y otro igual o meno a 12
using namespace std;
#include<iostream>
int main ()
{

	char resp=0;
	int cont1=0,cont2=0,acum1=0,acum2=0, nota=0;
	float promedio1=0, promedio2=0;

	{
	 cout<<"¿Desea Introducir Notas?..s/n..\n";
	 cin>>resp;
    }
 
	 while (resp=='s' or resp=='S')
	 {
		 cout<<"Introduce una Nota:\n";
		 cin>>nota;
		 if (nota<=12)
		 {
		 acum1=acum1+nota;
		 cont1=cont1+1;
	 } 
	 else (nota>=18);
	 {
		 acum2=acum2+nota;
		 cont2=cont2+1;
		 }
		do (resp=='n' or resp=='N' )
		 
			{ cout<<"Hasta la Proxima...";}
			 
			 promedio1=acum1/cont1;
			 promedio2=acum2/cont2;
			 
			 cout<<"La cantidad de notas iguales o menores de 12 son:\n"<<cont1;
			 cout<<"El Promedio de notas iguales o menores de 12 es:\n"<<promedio1;
			 cout<<"La cantidad de notas iguales o mayores de 18 son:\n"<<cont2;
			 cout<<"El Promedio de notas iguales o mayores de 18 es :\n"<<promedio2;
			 }
		 
			 return 0;
	}
