#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	// Declara��o da matriz
	int iMatriz[2][2];
	
	// Indices para o for
	int i = 0, j = 0;
	
	// Atribuir valores para a matriz
	iMatriz[0][0] = 0;
	iMatriz[0][1] = 0;
	iMatriz[1][0] = 0;
	iMatriz[1][1] = 0;
	
	// Imprime valores iniciais
	cout << "Matriz = " << iMatriz[0][0] << "  " << iMatriz[0][1] << endl;
	cout << "         " << iMatriz[1][0] << "  " << iMatriz[1][1] << endl;
	
	// Espa�o para facilitar leitura
	cout << endl;
	
	// Solicita ao usu�rio valores para a matriz
	for (i; i < 2; i++)
	{
		for (j; j < 2; j++)
		{
			cout << "Insira o valor para Matriz (" << i + 1 << ", " << j + 1 << "): ";
			cin >> iMatriz[i][j];
		}
		// Reset do valor de j
		j = 0;
	}
	
	// Espa�o para facilitar leitura
	cout << endl;
	
	// Imprime matriz com valores inseridos pelo usu�rio
	cout << "Matriz = " << iMatriz[0][0] << " " << iMatriz[0][1] << endl;
	cout << "         " << iMatriz[1][0] << " " << iMatriz[1][1] << endl;
	
	// Espa�o para facilitar leitura
	cout << endl;
	
	// Pausa a execu��o do programa
	system("pause");
	
	return 0;
}
