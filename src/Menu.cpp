/*
 * Menu.cpp
 *
 *  Created on: 14 jun. 2022
 *      Author: franc
 */

#include "Menu.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cstring>
#include <algorithm>

using namespace std;

// Inicializamos el constructor.
Menu::Menu() {
	cantEventos=0;
}
// Inicializamos el destructor.
Menu::~Menu() {
}
bool isNumber(const string& n)
{
    return !n.empty() &&
        find_if(n.begin(), n.end(),
            [](unsigned char c) { return !isdigit(c); }) == n.end();
    // La funcion "isdigit" nos informa si el caracter está contenido en el rango de números
    // del código ASCII, es decir, si se encuentra entre 48 y 57 y si el mismo es positivo.
}

Menu::menu() {
	int si=0, no=0, val=0;
	string op;
	string n="0";
	cout<<"\nSi desea realizar una simulacion ingrese la palabra \"si\".\nSi desea finalizar la ejecucion del programa ingrese la palabra \"no\".\n"<<endl;
	cin>>op;
	if(op.compare("si")==0){ // Similar al strcopy.
		si=1;
	}
	if(op.compare("no")==0){
		no=1;
	}
	while(si==0 and no==0){
		// Validacion de que los datos ingresados por el el teclado sean unicamente las opciones si o no.
		cout<<"Por favor, ingrese \"si\" o \"no\". Procure que sea en minusculas. \n"<<endl;;
		cin>>op;
		if(op.compare("si")==0){
			si=1;
		}
		if(op.compare("no")==0){
			no=1;
		}
	}
	if (si==1){
		cout<<"Ingrese la cantidad de eventos que quiera simular:\n"<<endl;
		cin>>n;
		while(val==0){
			//validacion de que el numero de eventos a simular sea mayor a cero y no sea una letra.
			if(isNumber(n)==true and (n.compare("0")!=0)){
				val=1;
			}
			else{
				cout<<"Ingrese la cantidad de eventos que quiera simular:\n"<<endl;
				cin>>n;
			}
		}
		cantEventos=stoi(n); // Cambia la variable de caracter a entero.
	}
	else{
	    cantEventos=-1;
    }
	return cantEventos;
}
