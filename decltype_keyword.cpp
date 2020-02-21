//*decltype keyword IN C++ 11 & 14*/
/*==================================================================================================

       Name of Training:- C++ 11 and 14 New Features 
	   Name of Trainer :- Mithun Shinde 
	   Name of Trainee :- Samir Mastekar (Team Center Integrated NX)
====================================================================================================
File description: decltype keyword
		Many time auto keyword looses its constantness and referenceness
		In that case decltype keyword plays important role in it.
		It hold the constantness and referenceness of variable
		
====================================================================================================
   Date           Name                    Description of Change
11-Feb-2020       Samir Mastekar          Practice work
$HISTORY$
==================================================================================================*/
#include <iostream>
using namespace std;

float get_val()
{
    return 10.2f;
}

void main()
{
	{
		const int number{20};
		auto number2{number};
		cout<<"Number:- "<<number2<<endl; // Here the output is "20"
		number2++; 						  //Here constantness looses 
		cout<<"Number:- "<<number2<<endl; //Here the output is "21"
	}
	cout<<endl<<endl;
	{
		int num{30};
		cout<<"Address:-"<<&num<<endl;
		int& num_ref{num};
		cout<<"Address of num_ref :-"<<&num_ref<<" Value of num_ref:- "<<num_ref<<endl; //Address of num_ref is same as num
		auto num_ref2{num_ref};
		cout<<"Address of num_ref2:- "<<&num_ref2<<" Value of num_ref2:- "<<num_ref2<<endl; //Here the variable num_ref2 loose it referenceness.
	}
	cout<<endl<<endl;
	{
		int num{40};
		int& num_ref{num};
		
		decltype(num_ref) num_ref2{num_ref};
		num+= 10;
		cout << "num_ref: " << num_ref << endl;
        cout << "num_ref2: " << num_ref2 << endl; 
	}
	cout<<endl<<endl;
	{
		int num{10};
        decltype((num)) num_ref{num};
        num += 20;
        cout << num_ref << endl;	
	}
	cout<<endl<<endl;
	{
        decltype(get_val()) num{};
        cout << typeid(num).name() << endl;
        cout << num << endl;
    }
}
