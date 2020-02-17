//*Type alias keyword IN C++ 11 & 14*/
/*==================================================================================================

       Name of Training:- C++ 11 and 14 New Features Training at Siemens Software Pvt. Ltd.
	   Name of Trainer :- Mithun Shinde (NX Arctechiture Team)
	   Name of Trainee :- Samir Mastekar (Team Center Integrated NX)
====================================================================================================
File description: Type Alias
		A type alias is a different name by which a type can be identified.
		In c++, any vaid type can be aliased so that it can be refered to with different 
		identifier.
				
====================================================================================================
   Date           Name                    Description of Change
11-Feb-2020       Samir Mastekar          Practice work
$HISTORY$
==================================================================================================*/
#include <iostream>
using namespace std;

typedef void(*Function_ptr)(const char*);
using FunctionPtr = void(*)(const char*);

void print_string(const char* str)
{
	cout<<" **** "<< str << " **** "<<endl;
}
void main()
{
	void(*fun_ptr)(const char*) = print_string;
	fun_ptr("C++ 11");
	
	/* By using declaration  */
	Function_ptr function_ptr2 = print_string;
	function_ptr2("C++ 14");
	
	/* By using "using" keyword */
	FunctionPtr fun_ptr3 = print_string;
	fun_ptr3("C++ 17");
}
