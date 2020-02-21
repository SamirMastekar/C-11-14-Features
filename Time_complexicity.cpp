/*Time Duration Object IN C++ 11 & 14*/
/*==================================================================================================

       Name of Training:- C++ 11 and 14 New 
	   Name of Trainer :- Mithun Shinde 
	   Name of Trainee :- Samir Mastekar (Team Center Integrated NX)
====================================================================================================
File description: Duration Object 
		The C++ 11 has intruduce a new duration cast with the help of it
		we can measure the time required to excute the function
		
====================================================================================================
   Date           Name                    Description of Change
11-Feb-2020       Samir Mastekar          Practice work
$HISTORY$
==================================================================================================*/
#include <iostream>
#include <string>    //We are using string
#include <chrono>
#include <ctime>     //We are workin on Time
using namespace std;

long long factorial(int num)
{
	return num == 1 ? 1 : num *factorial(num-1);
}

auto cal_factorial(int num, int rep)
{
	int counter{0};
	long long result{};
	while(counter++ < rep)
	{
		result = factorial(num);
	}
	return result;
}
	
void main()
{
	{
		auto startTime = std::chrono::steady_clock::now();
		auto result = cal_factorial(15, 10000);
		auto endTime = std::chrono::steady_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(endTime-startTime);
		cout<<"Result of factorial:- "<<result<<endl;
		cout<<"Excution time:- "<<duration.count()<<endl;
	}
	cout<<endl<<endl;
	{
		/* This block the current Time and Date of sytem */
		auto timeTemp{std::chrono::system_clock::now()};
		auto tm = std::chrono::system_clock::to_time_t(timeTemp);
        auto time_str = ctime(&tm);
        cout << "Time: " << time_str << endl;
	}	
}


