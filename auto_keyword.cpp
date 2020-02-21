/*AUTO_KEYWORD IN C++ 11 & 14*/
/*==================================================================================================

       Name of Training:- C++ 11 and 14 New Features 
	   Name of Trainer:- Mithun Shinde 
	   Name of Trainee :- Samir Mastekar (Team Center Integrated NX)
====================================================================================================
File description: auto KeyWord
	Before c++ 11, the programmer explicitely need to declared the data type.
	But after new version of C++, which allow a programmer to leave the type deduction.
	The time for compilation increases slightely, but it does not affect on the run time.
	
	1) The "auto" keyword specifies the type of variable automatically from its initilization.
	2) In case of function return type is auto then that will be evaluated by the return type 
		expression at runtime.
====================================================================================================
   Date           Name                    Description of Change
11-Feb-2020       Samir Mastekar          Practice work
$HISTORY$
==================================================================================================*/
#include <iostream>
#include <string>    //We are using string
using namespace std;

int number{};		//Global Declaration
/* void set_num(auto num) */  //We can not use auto function parameter
void set_num(int num)
{
	number = num;
}

/* We can use "auto" keyword at function return */
auto set_num()
{
	return number;
}

void main()
{
	{
        auto num{10};    // Variable "num" type is Integer
        cout << typeid(num).name() << endl;
        
        auto num2{10.2};  // Variable "num" type is Double
        cout << typeid(num2).name() << endl;
        
        auto num3{15.9f};	// Variable "num" type is Float
        cout << typeid(num3).name() << endl;
    }
	cout<<endl<<endl;
    {
        auto str = "C++11";		// Variable "num" type is const char*
        cout << typeid(str).name() << endl;
        
        auto str2 = "C++14"s;	// Variable "num" type is String
        cout << typeid(str2).name() << endl;
    }
    cout<<endl<<endl;
    {
        auto arr = {1,2,3,4,5};		// Variable "num" type is Initilizer List
        cout << typeid(arr).name() << endl;
    }
	cout<<endl<<endl;
	{
		set_num(10);
	}
	cout<<endl<<endl;
	{
		auto funReturn = set_num();
		cout<<funReturn<<endl;
	}
}
