//*chrono Library IN C++ 11 & 14*/
/*==================================================================================================

       Name of Training:- C++ 11 and 14 New Features 
	   Name of Trainer :- Mithun Shinde 
	   Name of Trainee :- Samir Mastekar (Team Center Integrated NX)
====================================================================================================
File description: Chrono Library
		Chrono library is used to deal with date and time.
	Concept:-
		system_clock:-
			It is the current time according to the system.(we seen on toolbar of compute)
		steady_clock:-
			It is monotonic clock that will never be adjusted. It goes at uniform rate.
		high_resolution_clock:-
			It provide the smallest possible tick period.
		Time Point:-
			A time_point object is at particular point time in nanoseconds
====================================================================================================
   Date           Name                    Description of Change
11-Feb-2020       Samir Mastekar          Practice work
$HISTORY$
==================================================================================================*/
#include <iostream>
#include <string>
#include <chrono>
using namespace std;

long long factorial(int num){
    return num == 1 ? 1 : num * factorial(num-1);
}

long long cal_fact(int num, int rep){
    int cnt{0};
    long long result{};
    while(cnt++ < rep){
        result = factorial(num);
    }
    return result;
}
void main()
{
	{
		std::chrono::steady_clock::time_point startTime = std::chrono::steady_clock::now(); //It will give you time object at point
		long long result = cal_fact(20, 1000);
		std::chrono::steady_clock::time_point endTime = std::chrono::steady_clock::now(); //It will give you time object at point after executing long factorial loop

		/* std::chrono::duration<int, std::ratio<1, 1000000000>> dur = end - start; */
		/* std::chrono::duration<int, std::nano> dur = end - start; */
		/* std::chrono::nanoseconds dur = end - start; */
		std::chrono::microseconds dur = chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);
		cout << "factorial: " << result << endl;
		cout << "execution time: " << dur.count() << endl;
    }     
    {
        std::chrono::system_clock::time_point tp{std::chrono::system_clock::now()};
        time_t tm = std::chrono::system_clock::to_time_t(tp);
        const char* time_str = ctime(&tm);
        cout << "Time: " << time_str << endl;
	}
}
