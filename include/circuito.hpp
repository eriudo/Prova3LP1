#ifndef CIRCUITO_HPP
#define CIRCUITO_HPP

#include <cstdlib>
#include <iostream>
#include <string>

/**
*@file main.cpp
*@brief Arquivo main que gerencia as funcionalidades do nosso jogo dos sapos.
*@author Erildo Gomes de Medeiros Junior Costa
*@since 01/06/2018
*@date 07/06/2018
*@version 1.0
*/

using namespace std;

class Circuito{  //classe circuito que define todos os parametros necessarios para criar uma pista, no caso o tamanho o nome e a identificaçao
protected:
		string nome;
		int tamanho;
		int id;
public:
		Circuito(string nome, int id, int tamanho);
			string getNome();	
			int getTamanho();
			int getIde();
	};
	
#endif	