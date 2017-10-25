#include "Square.h"

#include <iostream>
using namespace std;


Square::Square() : Shape()
{

}

void Square::draw()
{

	cout << "*******" << endl ;
	cout << "*     *" << endl ; 
	cout << "*     *" << endl; 
	cout << "*     *" << endl; 
	cout << "*     *" << endl;
	cout << "*******" << endl;;

}