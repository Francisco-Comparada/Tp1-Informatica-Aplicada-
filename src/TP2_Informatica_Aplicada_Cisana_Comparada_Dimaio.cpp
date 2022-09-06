
#include <iostream>
#include <time.h>

#include "Cinta.h" //libreria Cinta
#include "Menu.h"

using namespace std;

int main() {
		int n; // cantidad de eventos a simular
		int i;
		srand(time(NULL)); /* seeds random function */
		Menu menu; //objeto de clase Menu
		Cinta cinta;//objeto de clase Cinta
		while (n!=-1){
			n=menu.menu();//igualamos a n al metodo de la clase Menu, a la funcion menu que devuelve cantidad de eventos
			if (n!=-1){ //inicializacion s1=0,s2=0 c0c1=110 para cada simulacion
			cinta.setC0C1(110);
			cinta.setS1(0);
			cinta.setS2(0);
			cout<<"N° de Evento:"<<"\t"<<"Estado de sensores"<<"\t"<<"Estado de la cinta (C0C1)"<<"\t\t"<<"Acccion"<<endl;
			cout<<"     "<<1<<"\t\t";
			cinta.comparador();
			}
			for (i = 0; i < n - 1; i++) { // en este for recorremos n-1 eventos ya que el primero esta inicializado anteriormente
				cinta.setS1(rand()% 2); // damos valores aleatorios a s1 y s2
				cinta.setS2(rand()% 2);
				cout<<"     "<<i+2<<"\t\t";
				cinta.comparador(); // llamos a la funcion en clase Cinta la cual se encarga de analizar los eventos
			}
			cinta.~Cinta(); //destructor Cinta
			menu.~Menu();//destructor Menu
		}
	menu.~Menu();//destructor Menu
	cout << "!!!FIN!!!" << endl;
	return 0;

}
