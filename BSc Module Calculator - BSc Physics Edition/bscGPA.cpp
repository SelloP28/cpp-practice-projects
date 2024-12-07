#include<iostream>
#include<string>
#include<cstdlib>
#include<iomanip>

using namespace std;

void extendedProgramme();
void yearOfStudy();
void streams();
void astronomy();
void extendedCOS();
void currExtended();
void prevExtended();
//void semester(int);

struct Astronomy
{
	string module;
	double credits;
	float grade;
	float gpa;
	
};

struct Extended
{
	string module;
	double credits;
	float grade;
	float gpa;
	
};

int main()
{
	string degree_Name;
	char ch = 'y';
	
	cout <<"\t-=Welcome to the University of Pretoria GPA calculator=- \n ";
	cout << "=====================================================================\n\n";
	
	do
	{

	cout <<"Enter degree program: ";
	getline(cin, degree_Name);
	
	
			
	if(degree_Name == "bsc physics" || degree_Name == "BSc Physics" || degree_Name == "BSc physics" || degree_Name == "physics")
		{
			extendedProgramme();
			//yearOfStudy();
			streams();
				
		}
	else
		cout<<"Enter the correct choice \n\n";
		
	cout <<"Do you want to repeat? [Y/N] ";
	cin.get(ch);
	cin.ignore();
		
}while(ch == 'y' || ch == 'Y');

	system("pause");
	
	return 0;
}


void extendedProgramme()
{
	char xtended,//'xtended' short-hand to avoid confusion with 'extended' which has already been used.
		currentOrPrevious;
		cout<<endl;
		
		//include current and/or previous extended program functions
		cout<<"Were you in the Extended Programme? {Y/N} ";
			xtended = cin.get();
			cout<<endl;
			
			if (xtended == 'Y'||xtended == 'y')
				{
					cout<<"Please select if you are CURRENTLY admitted into ";
					cout<<" OR if you were PREVIOUSLY admitted into a BSc Extended Programme ";
					cout<<endl<<endl;
					cout<<"Select (c) for Current or (p) for Previous: ";
					cin>>currentOrPrevious;
					cout<<endl;
					
				if(currentOrPrevious == 'c')
					{
						currExtended();
						//yearOfStudy();
					}
						
				}
			else
				if(xtended == 'n'|| xtended == 'N')
					yearOfStudy();
						
			else
				{
					cout<<"Please choose the correct choice "<<endl;	
					exit(0);
				}
				
}

void currExtended()
{
	int choice;
	
	cout<<endl;
	cout <<"Please select your electives: \n";
	cout << "1. COS 133 & COS 143(phased out from 2016)\n";
	cout << "2. MLB 133 & MLB143\n";
	cout << "3. WST133 & WST143\n\n";
	cout <<"choice: ";
	cin >> choice;
	cout<<"\n";
	
	switch(choice)
		{
			case 1:
				extendedCOS();
				break;
			case 2:
				//extendedMLB();
				break;		
			case 3:
				//extendedWST();
				break;
			default:
				cout<<"Please enter a valid choice"<<endl;	
		}
			
	exit(EXIT_SUCCESS);	

}


void yearOfStudy()
{
	int year = 0;
	char electives;
	
	cout<<"\nWhich year of study are you doing?[Excluding Extended Programme] \n";
	cout<<"Year: ";
	cin >>year;
	cout<<endl;
	
	if (year = 1)
		{
			cout<<"Please select the stream choice you are in below: \n";
			cout<<"1. Mathematics as second major\n";
			cout<<"2. Second major in applied mathematics or mathematical statistics\n";
			cout<<"3. Second major in applied mathematics with an interest in astronomy \n";
			cout<<"4. Second major in chemistry or geology\n";
			cout<<"5. Computational physics\n\n";
						
		}
	
	//cout<<"Do you have any electives? {Y/N} ";
	//cin >> electives;
	
	//if (electives == 'Y'||electives == 'y')
		
	
}

void streams()
{
	//int stream;
	
	int streamChoice = 0;
	
	cout<<"stream choice: ";
	cin >> streamChoice;
	cout<<"\n\n";
	
	switch(streamChoice)
		{
			case 1:
				cout <<"\t -= You are in the mathematics as a second major stream=-\n";
				cout <<"====================================================================\n";
				break;
			case 2:
				cout <<"\t -=You are in the second major in applied mathematics or mathematical statistics stream=-\n";
				cout <<"=====================================================================================================\n";
				break;
			case 3:
				cout <<"\t -=You are in the second major in applied mathematics with an interest in astronomy stream=-\n";
				cout <<"======================================================================================================\n\n";
				
				astronomy();
				break;
			case 4:
				cout <<"\t -=You are in the second major in chemistry or geology stream\n=-";
				cout <<"==============================================================================\n";
				break;
			case 5:
				cout <<"\t -=You are in the computational physics stream=-\n";
				cout <<"===========================================================\n";
				break;
			default:
				cout<<"Enter a valid choice"<<endl;					
		}
	
	
	
}

void astronomy()
{
	const int sizeSemester1 = 0x4,
			  sizeSemester2 = 0x4;
			  
	Astronomy firstSem[sizeSemester1] = {{"COS151 - INTRODUCTION TO COMPUTER SCIENCE", 8},
										{"COS132 - IMPERATIVE PROGRAMMING", 16}, 
										{"WTW115 - DISCRETE STRUCTURES", 8}, {"WTW152 - MATHEMATICAL MODELING", 8}};
							
	Astronomy secondSem[sizeSemester2] = {{"PHY124 - FIRST COURSE IN PHYSICS B", 16},
										{"WTW123 - NUMERICAL ANALYSIS", 8}, {"WTW124 - MATHEMATICS", 16}, 
										{"WTW162 - DYNAMICAL PROCESSES", 8}};						
	
	cout<<fixed<<setprecision(2)<<showpoint;
							
	float gpa = 0.00;
	int semester = 0;
	double sum = 0.00;	
	
	cout<<"What semester are you in?"<<endl;
	cout<<"semester: ";
	cin>>semester;
	cout<<endl;
	
	
	if(semester == 1)
		{
			for(int i=0; i<sizeSemester1; i++)
				{
					cout<<"Module Name: "<<firstSem[i].module<<endl;
					cout<<"Credits: "<<firstSem[i].credits<<endl;
					cout<<"Enter grade: ";
					cin>>firstSem[i].grade;
					cout<<endl<<endl;
					
					gpa += (firstSem[i].grade*firstSem[i].credits);
					sum += firstSem[i].credits;
			
				}	
				
				cout<<"Your weighted average % for the term is: "<<(float)(gpa/sum)<<endl;					
		}
	else
		if(semester == 2)
			{
				for(int j=0; j<sizeSemester2; j++)
					{
						cout<<"Module Name: "<<secondSem[j].module<<endl;
						cout<<"Credits: "<<secondSem[j].credits<<endl;
						cout<<"Enter grade: ";
						cin>>secondSem[j].grade;
						cout<<endl<<endl;
						
						gpa += (secondSem[j].grade*secondSem[j].credits);
						sum += secondSem[j].credits;
					}
					cout<<"Your weighted average % for the term is: "<<(float)(gpa/sum)<<endl;
			}						
	
	else
		{
			cout<<"Enter the correct choice\n";
			exit(0);
		}
}

void extendedCOS()
{
	
	const int sizeSemester1 = 0x6,
			  sizeSemester2 = 0x6;
			  
	Extended firstSem[sizeSemester1] = {{"AIM111 - ACADEMIC INFORMATION MANAGEMENT", 4}, {"CMY133 - CHEMISTRY", 8},
										{"COS133 - INTRO TO PROGRAMMING", 8}, {"LST133 - LANGUAGE, LIFE & STUDY SKILLS", 8}, 
										{"PHY133 - PHYSICS", 8}, {"WTW133 - PRECALCULUS", 8}};
							
	Extended secondSem[sizeSemester2] = {{"AIM121 - ACADEMIC INFORMATION MANAGEMENT", 4}, {"CMY143 - CHEMISTRY", 8},
										{"COS143 - INTRO TO PROGRAMMING", 8}, {"LST143 - LANGUAGE, LIFE & STUDY SKILLS", 8}, 
										{"PHY143 - PHYSICS", 8}, {"WTW143 - CALCULUS", 8}};						
	
	cout<<fixed<<setprecision(2)<<showpoint;
							
	float gpa = 0.00;
	int semester = 0;
	double sum = 0.00;	
	
	cout<<"What semester are you in?"<<endl;
	cout<<"semester: ";
	cin>>semester;
	cout<<endl;
	
	if(semester == 1)
		{
			for(int i=0; i<sizeSemester1; i++)
				{
					cout<<"Module Name: "<<firstSem[i].module<<endl;
					cout<<"Credits: "<<firstSem[i].credits<<endl;
					cout<<"Enter grade: ";
					cin>>firstSem[i].grade;
					cout<<endl<<endl;
					
					gpa += (firstSem[i].grade*firstSem[i].credits);
					sum += firstSem[i].credits;
			
				}	
				
				cout<<"Your weighted average % for the term is: "<<(float)(gpa/sum)<<endl;	
				cout<<endl;
				cout<<"Do you want to calculate your average for semester 2?{y/n}";
				
				char sem2;
				cin>>sem2;
				
				if(sem2 == 'y'|| sem2 == 'Y')
					{
						for(int j=0; j<sizeSemester2; j++)
							{
								cout<<"Module Name: "<<secondSem[j].module<<endl;
								cout<<"Credits: "<<secondSem[j].credits<<endl;
								cout<<"Enter grade: ";
								cin>>secondSem[j].grade;
								cout<<endl<<endl;
						
								gpa += (firstSem[j].grade*firstSem[j].credits);
								sum += firstSem[j].credits;
							}
					
							cout<<"Your weighted average % for the term is: "<<(float)(gpa/sum)<<endl;
					}				
}
	else
		if(semester == 2)
			{
				for(int j=0; j<sizeSemester2; j++)
					{
						cout<<"Module Name: "<<secondSem[j].module<<endl;
						cout<<"Credits: "<<secondSem[j].credits<<endl;
						cout<<"Enter grade: ";
						cin>>secondSem[j].grade;
						cout<<endl<<endl;
						
						gpa += (firstSem[j].grade*firstSem[j].credits);
						sum += firstSem[j].credits;
					}
					
					cout<<"Your weighted average % for the term is: "<<(float)(gpa/sum)<<endl;
			}						
	
	else
		{
			cout<<"Enter the correct choice\n";
			exit(0);
		}
	
}

