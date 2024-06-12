//============================================================================
// Name        : classseveiculos-cpp-AEDS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

//CLASSE BASE: Veiculo
class Veiculo {
private:
	std::string modelo;

protected:
	int ano;

public:
	Veiculo(const std::string &mod, int a) :
		modelo(mod), ano(a){
	}

	void exibirInformacoes() {
		std::cout << "Modelo: " << modelo << ", Ano: " << ano << std::endl;
	}
};

//CLASSE DERIVADA: Carro (herda de Veiculo)
class Carro: public Veiculo {
private:
	std::string marca;

public:
	Carro(const std::string &m, const std::string &mod, int a) :
		Veiculo(mod, a), marca(m) {
		}

	void exibirDetalhes() {
		std::cout << "Marca: " << marca << ", ";
		exibirInformacoes(); //CHAMA O METODO DA CLASSE BASE
	}
};

int main(void) {
	//CRIANDO UM OBJETO DA CLASSE Carro
	Carro meuCarro("Toyota", "Corolla", 2022);

	//CHAMANDO O METODO PARA EXIBIR DETALHES DO CARRO (QUE INCLUI INFORMACOES DO VEICULO)
	meuCarro.exibirDetalhes();

	return 0;
}
