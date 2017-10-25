#include "Pentagon.h"

#include <iostream>
using namespace std;


Pentagon::Pentagon() : Shape()
{

}

void Pentagon::draw()
{

	cout << "    *   " << endl << endl;
	cout << "*       *" << endl << endl;
	cout << "  *   * " << endl;
}