//*Scope Enum keyword IN C++ 11 & 14*/
/*==================================================================================================

       Name of Training:- C++ 11 and 14 New Features Training at Siemens Software Pvt. Ltd.
	   Name of Trainer :- Mithun Shinde (NX Arctechiture Team)
	   Name of Trainee :- Samir Mastekar (Team Center Integrated NX)
====================================================================================================
File description: Scope Enum
		C++11 has introduced enum classes(also called scoped enumeration)
		that makes enum strongly typed and strongly scoped.
		
		Class enum doesn't allow implicit conversion to int and also doesn't comapre
		enumeration from different enumeration.
				
====================================================================================================
   Date           Name                    Description of Change
11-Feb-2020       Samir Mastekar          Practice work
$HISTORY$
==================================================================================================*/
#include <iostream>
using namespace std;

enum class COLOR{RED, YELLOW, BLUE, GREEN, BLACK};
enum SIGNAL{ GREEN, ORANGE, RED};

void main()
{
	COLOR col{COLOR::GREEN};
	
	int sign = ORANGE;
	cout<<sign<<endl;
	
	/* int col2 = COLOR::RED; */
	
	
	cout << "size of COLOR: " << sizeof(COLOR) << endl;
}
