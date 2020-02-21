/*Uniform Initialization IN C++ 11 & 14*/
/*==================================================================================================

       Name of Training:- C++ 11 and 14 New Features 
	   Name of Trainer :- Mithun Shinde 
	   Name of Trainee :- Samir Mastekar (Team Center Integrated NX)
====================================================================================================
File description: Uniform Initialization
	
		Uniform Initialization is a feature in C++ 11 that allow the usage of consistent
		syntax to initilize the variable & object. Ranging from the primitive type to object.
		
		It introduce brace initialization that uses braces({}) to enclose the inilize value.
		
		type var_name{argument1, argument2, .....etc);	
====================================================================================================
   Date           Name                    Description of Change
11-Feb-2020       Samir Mastekar          Practice work
$HISTORY$
==================================================================================================*/
#include <iostream>
#include <string>    //We are using string
#include <vector>
using namespace std;

class Test
{
	private:
	public:
		Test()  //Default constructor
		{
			cout<<__FUNCSIG__<<endl;
		}
		
		Test(int num)	//Parameterized constructor
		{
			cout<<__FUNCSIG__<<endl;
		}
};

void main()
{
	{
		Test obj; 	//Default constructor get call
		Test obj2(10);		//Parameter constructor get call
		Test obj3; 
		Test obj4 = Test();
		
	}
	cout<<endl<<endl;
	{
		/*----------------Uniform Initialization-------------*/
		
        Test obj{};
        
        Test obj2{10};
        
        Test obj3{};
        
        Test obj4 = Test{};
    }
	cout<<endl<<endl;
	{
		int num{};  //By default value of {} is "0".
		cout<<"Num:- "<<num<<endl;
		int num2{20}; //The variable "num2" is initialize to "20"
		
		int num_ptr{num2}; 	//The variable "num_ptr" is initialize to "num2"
		cout<<"Num_Ptr:- "<<num_ptr<<endl;
		
		int* num_ptr2{&num};
		cout<<"Num_Ptr:- "<<num_ptr2<<endl; //Address of num_ptr2
		cout<<"Num_Ptr:- "<<*num_ptr2<<endl; //value of num_ptr2

        int& num_ref{num};
		cout<<"Num_Ptr:- "<<num_ref<<endl;

        /* int& num_ref2{10}; */
		
		/* char ch = 300; */
		char ch{(char)300};  //Uniform Initialization with casting
		cout<<"Value of Ch:- "<<ch<<endl;
	}
	cout<<endl<<endl;
	{
		/* Vector Initialization */
		vector<int> lst{1, 2, 3, 4, 5};
		for(auto val:lst) //Here value get copied to "val" from vector lst(Consume More memory/Deep Copy)
		{
			cout<<val<<"--";
		}
		cout<<endl;
		for(auto& val:lst) //Here shallow copy create/less memory consumption
		{
			cout<<val<<"--";
		}
		
		
	}
}
	
	
	
	
	
