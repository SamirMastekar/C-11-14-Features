/*nullptr_keyword IN C++ 11 & 14*/
/*==================================================================================================

       Name of Training:- C++ 11 and 14 New Features Training at Siemens Software Pvt. Ltd.
	   Name of Trainer:- Mithun Shinde (NX Arctechiture Team)
	   Name of Trainee :- Samir Mastekar (Team Center Integrated NX)
====================================================================================================
File description: nullptr KeyWord
	
		nullptr is a keyword that can be used at any place where is NULL expexcted.
		Like NULL, nullptr is implicitly convertible and comparable to any pointer.
		nullptr is convertible to bool  also.
			
====================================================================================================
   Date           Name                    Description of Change
11-Feb-2020       Samir Mastekar          Practice work
$HISTORY$
==================================================================================================*/
#include <iostream>
#include <string>    //We are using string
using namespace std;

void print_num(int* ptr)
{
	if(ptr != nullptr) //Here it will check input is not NULL
		cout<<"Interger value:- "<<*ptr<<endl;
	else
		cout<<"Incorrect Interger Input"<<endl;
}

void print_num(double* ptr)
{
	if(ptr != nullptr) //Here it will check input is not NULL
		cout<<"Double value:- "<<*ptr<<endl;
	else
		cout<<"Incorrect Double Input"<<endl;
}

void print_num(nullptr_t /* value */)  //Error unrefernce formal parameter
{
	cout<<"Incorrect Input"<<endl;
}

void print_num(int num)
{
	cout<<num<<endl;
}

void main()
{
	int num = 10;
	print_num(&num);
	
	/* print_num(null); */ //Undefine indentifier "null" value
	
	print_num(nullptr); // for this call print_num(nullptr_t) function will search compiler otherwise it will gives error (ambiguity Problem)
	
}