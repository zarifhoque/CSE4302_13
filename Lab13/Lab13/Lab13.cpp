// Lab13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <array>


namespace my_namespace
{
	float const PI = 6.000;
	void foo() { std::cout << "Hello!" << std::endl; }
}

namespace my_namespace_2
{
	float const PI = 3.14159265f;
	void foo() { std::cout << "Hola!" << std::endl; }
}







int main()
{
	//Task 1
	std::array<int,10>arr_odd;
	std::set<int>set_even;
	std::vector<int>res(20);
	int val = 1;
	for (int x = 0;x < 10;x++) { arr_odd[x] = val;val += 2; }
	val = 0;
	for (int x = 0;x < 10;x++) { set_even.insert(val);val += 2; }
	std::merge(arr_odd.begin(), arr_odd.end(), set_even.begin(),set_even.end(), res.begin());
	for (int x = 0;x < res.size();x++) { std::cout << res[x] << "	"; }
	std::cout << std::endl;

	//Task 2
	my_namespace::foo();
	my_namespace_2::foo();
	std::cout << my_namespace::PI << std::endl;
	std::cout << my_namespace_2::PI << std::endl;
	

	






}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
