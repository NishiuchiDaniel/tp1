// Ejercicio1PC.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void main(void)
{
	int a, b, c;
	for (a = 1, b = 2, c = 3; (a*b*c) != ((a + b + c) * 800); a++, b++, c++);
	
	cout << a << " " << b << " " << c << endl;
	
	system("pause");

}

