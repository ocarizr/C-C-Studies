#include <stdlib.h>
#include <iostream>

// Exerc�cio de uso de fun��es
// Existem melhores praticas para executar as fun��es do programa
// O objetivo � apenas usar fun��es para qualquer fim

using namespace std;

int sqr(int iValue);
int sum(int a, int b);
bool greater(int a, int b);

int main()
{
	// Declara��o das vari�veis
	int iVal1, iVal2;
	
	// Input do usu�rio
	cout << "Insira o primeiro valor: ";
	cin >> iVal1;
	cout << "Insira o segundo valor: ";
	cin >> iVal2;
	
	// testa a fun��o sqr
	cout << "O quadrado de " << iVal1 << " eh: " << sqr(iVal1) << endl;
	cout << "O quadrado de " << iVal2 << " eh: " << sqr(iVal2) << endl;
	
	// testa a fun��o sum
	cout << "A soma " << iVal1 << " + " << iVal2 << " = " << sum(iVal1, iVal2) << endl;
	
	// Testa a fun��o greater
	if (greater(iVal1, iVal2))
	{
		cout << iVal1 << " eh maior que " << iVal2 << endl;
	} else
	{
		cout << iVal1 << " eh menor que " << iVal2 << endl;
	}
	
	// Pausa a execu��o do programa
	system("pause");
	
	return 0;
}

int sqr(int iValue)
{
	return (iValue * iValue);
}

int sum(int a, int b)
{
	return (a + b);
}

bool greater(int a, int b)
{
	if (a > b)
	{
		return true;
	}
	
	return false;
}
