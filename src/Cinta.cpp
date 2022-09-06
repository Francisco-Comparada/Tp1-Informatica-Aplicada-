/*
 * Cinta.cpp
 *
 *  Created on: 14 jun. 2022
 *      Author: franc
 */
#include "Cinta.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
Cinta::Cinta() {
	// TODO Auto-generated constructor stub

}

Cinta::~Cinta() {
	// TODO Auto-generated destructor stub
}

void Cinta::comparador(){
	switch(C0C1){
		case 110:
			if (s1==1 and s2==0 ){//relevante
				cout<<"Sensor1: "<<s1<<" Sensor2: "<<s2<<"\t\t"<<C0C1<<"\t\t\t"<<"Sensor 1 detectado, ingreso de vela"<<endl;
				C0C1=100;
				}
			else{
				cout<<"Sensor1: "<<s1<<" Sensor2: "<<s2<<"\t\t"<<C0C1<<"\t\t\t"<<"No relevante"<<endl;
				}
		break;

		case 100:
			if (s1==1 and s2==1){//relevante
				cout<<"Sensor1: "<<s1<<" Sensor2: "<<s2<<"\t\t"<<C0C1<<"\t\t\t"<<"Diametro correcto"<<endl;
				C0C1=101;
				}
			if (s1==0 and s2==0 ){//relevante
				cout<<"Sensor1: "<<s1<<" Sensor2: "<<s2<<"\t\t"<<C0C1<<"\t\t\t"<<"Diametro incorrecto, requiere ensanchar"<<endl;
				C0C1=001;
				}
			if(s1!=s2){
				cout<<"Sensor1: "<<s1<<" Sensor2: "<<s2<<"\t\t"<<C0C1<<"\t\t\t"<<"No relevante"<<endl;
				}
		break;

		case 001:
			if (s1==1 and s2==1){//relevante
				cout<<"Sensor1: "<<s1<<" Sensor2: "<<s2<<"\t\t"<<"001"<<"\t\t\t"<<"termino de ensanchar, Diametro correcto"<<endl;
				C0C1=101;
				}
			else{
				cout<<"Sensor1: "<<s1<<" Sensor2: "<<s2<<"\t\t"<<"001"<<"\t\t\t"<<"No relevante"<<endl;
			}
		break;

		case 101:
			if (s1==0 and s2==0 ){
				cout<<"Sensor1: "<<s1<<" Sensor2: "<<s2<<"\t\t"<<"100"<<"\t\t\t"<<"Vela salio de los sensores"<<endl;
				C0C1=110;
				}
			else{
				cout<<"Sensor1: "<<s1<<" Sensor2: "<<s2<<"\t\t"<<"100"<<"\t\t\t"<<"No relevante"<<endl;
			}
		break;
	}
	return;
}
