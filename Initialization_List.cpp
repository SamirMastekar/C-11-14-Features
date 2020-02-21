//*Initialization List IN C++ 11 & 14*/
/*==================================================================================================

       Name of Training:- C++ 11 and 14 New Features 
	   Name of Trainer :- Mithun Shinde 
	   Name of Trainee :- Samir Mastekar (Team Center Integrated NX)
====================================================================================================
File description: Initialization List
		Initialization List is used in initialization of data member of a class.
		The list of member is indicated with contructor as comma-separated list 
		followed by a colon(:).
		
		In below example everytime "Parameterized constructor with Initializer list 
		get called. Other constructor compiler will ignore
		
====================================================================================================
   Date           Name                    Description of Change
11-Feb-2020       Samir Mastekar          Practice work
$HISTORY$
==================================================================================================*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Message
{
	public:
		/* Parameterized constructor with single parameter */
		Message(string s)
		{
			cout<<__FUNCSIG__<<endl;
			vect.push_back(s);
		}
		
		/* Parameterized constructor with two parameter */
		Message(string s1, string s2)
		{
			cout<<__FUNCSIG__<<endl;
			vect.push_back(s1);
			vect.push_back(s2);
		}
		
		/* Parameterized constructor with initializer list as parameter */
		Message(initializer_list<string> list):vect{list}
		{
			cout<<__FUNCSIG__<<endl;
		}
		
		/* Function to display elements in vector */
		void Show()
		{
			for(vector<string>::iterator it = vect.begin(); it != vect.end(); it++)
			{
				cout<< *it <<endl;
			}
			cout<<endl;
		}
	private:
		vector<string> vect;
};
void main()
{
	{
        Message msg{"C++11"};
        msg.Show();
    }
    {
        Message msg{"C++11", "C++14"};
        msg.Show();
    }
    {
        Message msg{"C++11", "C++14", "C++17"};
        msg.Show();
    }
}
