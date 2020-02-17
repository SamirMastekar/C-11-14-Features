//*Range Loop IN C++ 11 & 14*/
/*==================================================================================================

       Name of Training:- C++ 11 and 14 New Features Training at Siemens Software Pvt. Ltd.
	   Name of Trainer :- Mithun Shinde (NX Arctechiture Team)
	   Name of Trainee :- Samir Mastekar (Team Center Integrated NX)
====================================================================================================
File description: Range Loop
		The range based loop is added in c++11. It executes a for loop
		over the range. Used as more readable equivalent to the traditional
		for loop operating over a range of value, such as elements in a container.
		
		Disadvantage of normal for loop:-
				There is no bound checking in normal for loop.
				for(int i = 0; i < 10; i++)
				{
					cout<<array[500]<<endl;
				}
				In the above example array[500] is not element of array.
				It will give any garbeage value.
====================================================================================================
   Date           Name                    Description of Change
11-Feb-2020       Samir Mastekar          Practice work
$HISTORY$
==================================================================================================*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{
	{
		int num[]{10, 20, 30, 40, 50};
		for(int i = 0; i<5; i++)
		{
			cout<<num[i]<<" ~ ";
		}
		cout<<endl;
	}
	//C++11: Better way to iterate array using std::begin and std::end global function
	{
		int num_arr[]{10, 20, 30, 40, 50};
		for(int* it = std::begin(num_arr); it != std::end(num_arr); it++)
		{
			cout<<*it<<" | ";
		}
		cout<<endl;
	}
	//C++11: Best way to iterate array using range loop
	{
		int num_arr[]{10, 20, 30, 40, 50};
		for(auto num : num_arr) //It will generate copy of local variable without reference
		{
			cout<<num<<" ** ";
		}
		cout<<endl;
	}
	{
		int num_arr[]{10, 20, 30, 40, 50};
		for(auto& num : num_arr) //It will generate shallow copy of  variable with reference
		{
			num*=10;
			cout<<num<<" !! ";
		}
		cout<<endl;
	}
	/* Vector initialization with rane loop */
	{
		vector<string> vect{"Samir", "Aakash", "onkar", "Vishal", "Juli"};
		for(auto val:vect)
		{
			cout<<val<<" %% ";
		}
		cout<<endl;
	}
	{
		auto vect = {"Samir", "Aakash", "onkar", "Vishal", "Juli"}; //Initializer_list
		cout<<typeid(vect).name()<<endl;
		for(auto val:vect)
		{
			cout<<val<<" @@ ";
		}
		cout<<endl;
	}
	
}
