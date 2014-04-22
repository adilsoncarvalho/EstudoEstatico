// EstudoEstatico.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Calc.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Calc c = Calc();

	cout << "Sucesso " << c.Sum(10,20) << endl;
	system("pause");

	return 0;
}

