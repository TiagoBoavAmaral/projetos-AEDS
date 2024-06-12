//============================================================================
// Name        : carros-cpp-AEDS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

//DEFINICAO DA CLASSE CARRO
class Carro{
public:
	//MEMBROS DA CLASSE
	std::string marca;
	std::string modelo;
	int ano;

	//CONSTRUTOR
	Carro(const std::string &m, const std::string &mod, int a) :
		marca(m), modelo(mod), ano(a) {
		}

	//CONSTRUTOR PARA CRIAR UM CARRO VAZIO
	Carro() : marca(""), modelo(""), ano(0){
		}

	//METODO PARA EXIBIR INFORMACOES SOBRE O CARRO
	void exibirInformacoes() {
		std::cout << "Marca: " << marca << ", Modelo: " << modelo << ", Ano: "
				<< ano << std::endl;
	}
};

int main(void) {
	//CRIANDO UM OBJETO DA CLASSE CARRO
	Carro meuCarro;

	//CRIANDO UM OBJETO DA CLASSE CARRO USANDO O CONSTRUTOR
	//Carro meuCarro("Toyota", "Corolla", 2022);

	//ATRIBUINDO VALORES AOS MEMBROS DA CLASSE
	meuCarro.marca = "Toyota";
	meuCarro.modelo = "Corolla";
	meuCarro.ano = 2022;

	//CHAMANDO O METODO PARA EXIBIR INFORMACOES SOBRE O CARRO
	meuCarro.exibirInformacoes();

	return 0;

}
