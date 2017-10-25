#include <iostream>
#include "Pentagon.h"
#include "Square.h"

using namespace std;

int main() {

	char c = -1;
	Shape *newShape = nullptr;
	cin >> c;
	switch (c)
	{
	case '1':
		newShape = new Pentagon();
		break;
	case '2':
		newShape = new Square();
		break;
	default:
		break;
	}

	newShape->draw();


	system("pause");
	return 0;
}