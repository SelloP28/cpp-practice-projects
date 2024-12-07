//This is a fahrenheit to celsius converter using functions.

#include <iostream>
using namespace std;

	double  Tf = 0.0,
		Tc = 0.0;
		
	double celsius(int Tc);
	double fahrenheit(int Tf);		

int main()
{
	
					

	cout <<"Please enter the fahrenheit value: \n";
	cin >> Tf;
	
	cout << "The Celsius value is: " << celsius(Tc) << endl;
	
	system("pause");
	
	return 0;
}

double celsius(int Tc)
{
	Tc = (5.0/9 * (Tf - 32.0));
	
	return Tc;	
	
}

double fahrenheit(int Tf)
{
	Tf = ((9.0/5)*Tc - 32.0);
	
	return Tf;	
}




