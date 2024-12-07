/*  This is a simple program designed by myself (Sello Phakoe) and is used as a 1st year BSc(Physics & Maths)-
	module calculator for students.

*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double  ave1  	 = 0.00,
			ave2 	 = 0.00,
			Tave 	 = 0.00, 
			ADLE111  = 0.00,
			ADLE122  = 0.00,				
			NPHY111  = 0.00,	
			NPHY121  = 0.00,				  	
			CMPG111  = 0.00, 
			CMPG121  = 0.00,                  
			NCHE111  = 0.00, 
			APPM122  = 0.00,                  
			MTHS111  = 0.00, 
			MTHS121  = 0.00;                   
			
	char again;
	
	cout << "\t\tHERE IS YOUR SEMESTER 1 PROGRESS\n\n";
		cout <<"********************************************************************************\n";
		
		cout << "Please enter your score for ADLE111: \n";
		cin>>ADLE111;
		cout << "Please enter your score for NPHY111: \n";
		cin>>NPHY111;
		cout << "Please enter your score for CMPG111: \n";
		cin>>CMPG111;
		cout << "Please enter your score for NCHE111: \n";
		cin>>NCHE111;
		cout << "Please enter your score for MTHS111: \n";
		cin>>MTHS111;
		
		ave1 = (ADLE111 + NPHY111 + CMPG111 + NCHE111 + MTHS111)/5.0;
		
		cout << "\n\t\tYour average for semester 1 is: "<<fixed<<showpoint<<setprecision(2)<< ave1 << "%\n";
		
		if (ave1 >= 75.0)
		{
			cout << "\nCongratulations! You have passed with distinction. \n";
			
			}
			
			else
			 
			if (ave1 < 50.0)
			{
				cout << "\nWarning: You are at risk of academic exclusion! \n";
			}
			
		
			
		cout << "\nDo you want your average score for semester 2? {Y/N}\n";
		cin>>again;
		
		if (again == 'n' || again == 'N')
		{
			
			cout<<"\n*******************************************************************************\n";
	 		cout<<"\n*******************************************************************************\n";
	 		cout<<"\n\n\tBSc(Physics & Math) semester mark calculator by S. Phakoe\n";
	
		}
		
	 while (again == 'Y' || again == 'y')
	 {
	 	cout << "\t\tHERE IS YOUR SEMESTER 2 PROGRESS\n\n";
	 	cout <<"********************************************************************************\n";
	 	
		cout << "Please enter your score for ADLE122: \n";
		cin>>ADLE122;
		cout << "Please enter your score for NPHY121: \n";
		cin>>NPHY121;
		cout << "Please enter your score for CMPG121: \n";
		cin>>CMPG121;
		cout << "Please enter your score for APPM122: \n";
		cin>>APPM122;
		cout << "Please enter your score for MTHS121: \n";
		cin>>MTHS121;
		
		ave2 = (ADLE122 + NPHY121 + CMPG121 + APPM122 + MTHS121)/5.0;
		
		cout << "\n\tYour average for semester 2 is: "<<fixed<<showpoint<<setprecision(2)<< ave2 << "%\n";
		
		if (ave2 >= 75.0)
		{
			cout << "\nCongratulations! You have passed with distinction. \n";
			
			}
			
			else
			 
			if (ave2 < 50.0)
			{
				cout << "\nWarning: You are at risk of academic exclusion! \n";
			}
			
	 	
	 
	 
	 Tave = (ave1 + ave2)/2.0;
	 
	 cout <<"\nYour cumulative average for the year is: "<<fixed<<showpoint<<setprecision(2)<< Tave << "%\n";
	 
	 if (Tave >= 75.0)
	 {
	 	cout<<"\nCONGRATULATIONS! YOUR YEAR MARK WAS PASSED WITH DISTINCTION! \n";
	 }
	 
	 else
	  
	 if (Tave < 50.0)
	 {
	 	cout<<"\nYOUR YEAR MARK IS LESS THAN 50%, THEREFORE YOUR REGISTRATION FOR NEXT YEAR IS SUBJECT TO READMITTANCE. ";
	 	cout<< "\nPLEASE CONTACT YOUR FACULTY FOR FURTHER ASSISTANCE.\n";
	 }
	 
	 cout<<"\n*****************************************************************************\n";
	 cout<<"\n*****************************************************************************\n";
	 cout<<"\n\n\tBSc(Physics & Math) semester mark calculator by S. Phakoe\n";
	
	system("pause");
		
	return 0;
	
}
}
