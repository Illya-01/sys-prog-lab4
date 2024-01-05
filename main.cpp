#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
	Calculator calculator;
	double a = 100.2;
	double b = 4.7;
	
   cout << "Sum: " << a << " + " << b << " = " << calculator.Add(a, b) << endl;
   cout << "Difference: " << a << " - " << b << " = " << calculator.Sub(a, b) << endl;

   return 0;
}