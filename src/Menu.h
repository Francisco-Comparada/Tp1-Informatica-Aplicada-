/*
 * Menu.h
 *
 *  Created on: 14 jun. 2022
 *      Author: franc
 */

#ifndef MENU_H_
#define MENU_H_

class Menu {
private:
	int cantEventos;
public:
	Menu();
	~Menu(); // Liberando la memoria en el destructor
	int menu();
};

#endif /* MENU_H_ */
