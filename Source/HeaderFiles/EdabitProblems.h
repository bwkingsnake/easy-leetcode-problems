#pragma once
#pragma once
#include <iostream>
#include <vector> 
using namespace std;

bool isEvenOrOdd(int num) {
	if (num % 2 == 0) return true;
	return false;
}

bool isPalindrome(string oldString)
{
	int oldLength = oldString.length() - 1;

	for (int i = 0; i < oldString.length(); i++) {

		if (oldString[i] != oldString[oldLength]) {
			return false;
		}
		else
		{
			oldLength = oldLength - 1;
		}
	}
	return true;
}

string longBurp(int num) {

	string r = "r";
	string p = "p";
	string burp = "Bu";

	for (int i = 1; i <= num; i++) {
		burp += r;
	}
	string longBurp = burp + p;
	return(longBurp);
}

int vectorSum(vector<int>Vector) {
	int sum = 0;
	for (int num : Vector) {
		sum += num;
	}

	return sum;
}

unsigned int warOfNumbers(vector<int>lst) {

	vector<int> oddNumbers = {};
	vector<int> evenNumbers = {};

	int oddNumbersSum = 0;
	int evenNumbersSum = 0;

	for (int i = 0; i < lst.size(); i++) {

		bool isEven = isEvenOrOdd(lst[i]);

		if (isEven)
		{
			evenNumbers.push_back(lst[i]);
		}
		else
		{
			oddNumbers.push_back(lst[i]);
		}
	}

	evenNumbersSum = vectorSum(evenNumbers);
	oddNumbersSum = vectorSum(oddNumbers);

	if (evenNumbersSum > oddNumbersSum) {

		return evenNumbersSum - oddNumbersSum;
	}
	else (oddNumbersSum > evenNumbersSum); {

		return oddNumbersSum - evenNumbersSum;
	}
}

int fibonacci(int n) {
	if (n <= 0) return 0;
	if (n == 1) return 1;

	int prev = 0;
	int curr = 1;

	for (int i = 2; i <= n; i++) {
		int next = prev + curr;
		prev = curr;
		curr = next;
	}
	return curr;
}

string moveCharacters(string word) {

	vector<char> alphaBet = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y' };
	string newString = "";

	for (int wordIndex = 0; wordIndex < word.size(); wordIndex++) {

		for (int alphaBetIndex = 0; alphaBetIndex < alphaBet.size(); alphaBetIndex++) {

			if (word[wordIndex] == alphaBet[alphaBetIndex]) {
				newString = newString + alphaBet[alphaBetIndex + 1];
			}
		}
	}
	return newString;
}
