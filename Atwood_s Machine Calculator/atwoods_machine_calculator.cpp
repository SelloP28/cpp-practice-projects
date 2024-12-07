#include<iostream>
#include<cmath>
using namespace std;

const double  g  = 9.8;    /* These initialised variables have been globalised.
                           */

	  double m1  = 0.0,
	  		 m2  = 0.0;
	  		 
	  		 
double accelerate(double, double);   // These are the two function prototypes, accelerate & tension. 
double tension(double, double);


int main()  // We are in our main function.
{
		  //double  a  = accelerate(m1, m2),
		  		  //t  = tension(m1, m2);
		  		  
	cout<< "Enter mass 1: \n";
	cin>>m1;
	
	cout<<"Enter mass 2: \n";
	cin>>m2;
	
	
	accelerate(m1, m2);
	tension(m1, m2);
	
	system("pause");
		
	return 0;  		  
}

double accelerate(double m1, double m2)
{
	double a = (m2 - m1)* g/(m1 + m2);
	
	cout<< "The value of the accelaration is: "	<< a << "m/s^2 \n";
		  		  
	return a;
		  		  	
}

double tension(double m1, double m2)
{
	double t = (2.0*m2*m1*g)/(m1 + m2);
	
	cout<< "The value of the tension is: "	<< t << "N \n";
	
		  		  
	return t; 	  		  
}



