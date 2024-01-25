#include <iostream>
#include <vector>
#include "catch.hpp"
/* String functions section */

// Splits a single string on separator into a vector of strings
std::vector<std::string> Split(std::string whole, std::string separator);

// takes two strings and returns a new string that is the result of removing all occurrences of s2 from s1. ***TO-DO***
std::string RemoveAllSubstrings(std::string s1, std::string s2);

// Sums all numbers in a vector and returns the resulting value ---- ***TO DO***
int Sum(std::vector<int> nums);

// Multiplies all numbers in a vector together and returns the resulting value **TO-DO**
int Product(std::vector<int> nums);

// returns -1 if the number is negative and 1 if positive
int Sign(int num);

// // Sums all numbers in a vector and returns the resulting value
// double Sum(std::vector<double> nums);

// // Multiplies all numbers in a vector together and returns the resulting value
// double Product(std::vector<double> nums);

// // Adds an double n to each element of a given vector
// std::vector<double> VectorPlusN(std::vector<double> v, double n);

// // Multiples an double n with each element of a given vector
// std::vector<double> VectorTimesN(std::vector<double> v, double n);

// // takes in two doubles and returns a vector of size n with
// // values n*1, n*2, n*3... up to n*m
// std::vector<double> Multiples(double n, double m);

// // returns -1 if the number is negative and 1 if positive
// double Sign(double num);


// // adds n to each element of the vector
// std::vector<int> AddN(std::vector<int> v, int n);

// adds n to each element of the vector
//std::vector<double> AddN(std::vector<double>, double n);

// adds n to each element of the vector
//std::vector<std::string> AddN(std::vector<std::string>, std::string n);


// subtracts n to each element of the vector
//std::vector<int> SubtractN(std::vector<int>, int n);

// subtracts n to each element of the vector
//std::vector<double> SubtractN(std::vector<double>, double n);

// int main(){
// 	// std::cout << Factorial (5) <<std::endl;
// 	// std::vector<int> v{1,2,3};
// 	// std::vector<int> res = AddN(v, 5);
// 	// for(int i=0;i<res.size();i++){
// 	// 	std::cout<<res[i]<<" ";
// 	// }
	

// 	return 0;

// }
