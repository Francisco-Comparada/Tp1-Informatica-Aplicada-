/*
 * Cinta.h
 *
 *  Created on: 14 jun. 2022
 *      Author: franc
 */

#ifndef CINTA_H_
#define CINTA_H_

class Cinta {
	private: //Atributos (ENCAPSULADO) solo los metodos pueden modificar los datos
		int s1;
		int s2;
		int C0C1;
	public:
		Cinta();// Constructor. (ayuda a inicializar los atributos)
		~Cinta(); // Destructor.
		//METODOS
		void comparador();
		void setS1(int s1) {
			this->s1 = s1;
		}
		void setS2(int s2) {
			this->s2 = s2;
		}
		void setC0C1(int c0C1) {
			this->C0C1 = c0C1;
		}
};

#endif /* CINTA_H_ */
