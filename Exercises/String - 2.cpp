#include <stdlib.h>
#include <iostream>
#include <string>

// O uso de namespace facilita na digita��o do c�digo
// deve-se usar com muita cautela
using namespace std;

// C�digo para fazer input de strings no sistema
// Este c�digo reconhece espa�o entre as palavras
// Este programa � uma otimiza��o do String - 1 utilizando C++
int main()
{
	// Declara��o da vari�vel que ir� alocar a string
	string sPalavra;
	
	// Imprime instru��o ao usu�rio
	cout << "Digite uma palavra: ";
	
	// Solicita input do texto pelo usu�rio
	// Usa o getline para poder reconhecer os espa�os entre as palavras
	getline (cin, sPalavra);
	
	// Imprime a palavra digitada
	cout << "A palavra digitada eh: " << sPalavra << endl;
	
	// Para a execu��o do sistema
	system("pause");
	
	// Como a fun��o principal � do tipo int (limita��o do C++) deve-se retornar algo
	return 0;
}
