#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string> 

using namespace std;
#define log(x) std::cout << x << std::endl

//probllem 1 "To Lower Case"

string toLowerCase(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

//problem 2 "Convert the Temperature"

vector<double> convertTemperature(double celsius) {

    double Kelvin = celsius + 273.15;
    double Farenheit = celsius * 1.80 + 32;

    vector<double> ans = { Kelvin, Farenheit };
    return ans;
}

//problem 3 Final Value of Variable After Performing Operations

int finalValueAfterOperations(vector<string>& operations) {
    int x = 0;
    
    for (int i = 0; i < operations.size(); i++) {
        if (operations[i] == "++X" || operations[i] == "X++") {
            x = x + 1;
        }
        else x = x - 1;
    }
    log(x);
    return x;
}

//problem 4 fizz buzz

vector<string> fizzBuzz(int n) {
    vector<string> fizzBuzz = {};
    while (n > 0) {
        if (n % 3 == 0 && n % 5 == 0) {
            fizzBuzz.insert(fizzBuzz.begin(), "FizzBuzz");
        }
        else if (n % 3 == 0) {
            fizzBuzz.insert(fizzBuzz.begin(), "Fizz");
        }
        else if (n % 5 == 0) {
            fizzBuzz.insert(fizzBuzz.begin(), "Buzz");
        }
        else {
            fizzBuzz.insert(fizzBuzz.begin(), to_string(n));
        }       
        n = n - 1;
    }
    return fizzBuzz;
}

//problem 4 Defanging an IP Address

string defangIPaddr(string address) {

    string defangedIp = "";

    for (int i = 0; i < address.size(); i++) {
        log(address[i]);
        if (address[i] == '.') {

            defangedIp.push_back('[');
            defangedIp.push_back('.');
            defangedIp.push_back(']');
        }
        else {
            defangedIp.push_back(address[i]);
        }
    }

    return defangedIp;
}

//problem 5 Subtract the Product and Sum of Digits of an Integer

int subtractProductAndSum(int n) {
  
    vector<int> removedNumbers = {};

    while (n > 0){
        int removedNum = n % 10;
        removedNumbers.push_back(removedNum);
        n = n / 10;
    }
    
    int sum = 0;

    for (int i = removedNumbers.size() - 1;i > -1;i--) {
        sum += removedNumbers[i];
    }

    int productOfDigits = (removedNumbers[removedNumbers.size() - 1]);
    
    for (int i = removedNumbers.size() - 2;i > -1;i--) {
        productOfDigits = productOfDigits * removedNumbers[i];
    }

    return productOfDigits - sum;
}

//problem 6 Number of Good Pairs

int numIdenticalPairs(vector<int>& nums) {

    int validPairs = 0;

    for (int i = 0; i < nums.size();i++) {
        for (int j = i + 1 ; j < nums.size(); j++) {

            if (nums[i] == nums[j]) {
             
                validPairs += 1;
            }
        }
    }

    log(validPairs);

    return validPairs;
}

//problem 7 How Many Numbers Are Smaller Than the Current Number

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

    vector<int> sortedNums = {};

    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums.size(); j++) {

            if (nums[j] < nums[i]) {
                count++;
            }
        }
        sortedNums.push_back(count);
        count = 0;
    }

    return sortedNums;
}

//problem 8 Check If Two String Arrays are Equivalent

bool arrayStringsAreEqual(vector<string>& wordList1, vector<string>& wordList2) {

    string newWord1 = "";
    string newWord2 = "";

    if (wordList1.size() == 1) {
        newWord1 = wordList1[0];
    }
    else {
        for (int i = 0; i < wordList1.size();i++) {
            string wordCopy = wordList1[i];
            newWord1 = newWord1 + wordCopy;
        }
    }

    if (wordList2.size() == 1) {
        newWord2 = wordList2[0];
    }
    else {
        for (int i = 0; i < wordList2.size();i++) {
            string wordCopy = wordList2[i];
            newWord2 = newWord2 + wordCopy;
        }
    }

    if (newWord1 == newWord2) {
        log("true");
        return true;
    }
    else {
        log("false");
        return false;
    }
}

//problem 9, two sum

vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> indicies = {};
    bool targetFound = false;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {

            if (nums[i] + nums[j] == target) {

                indicies.push_back(i);
                indicies.push_back(j);

                targetFound = true;
                break;
            }
            if (targetFound == true) {
                break;
            }
        }
    }
    
    return indicies;
}

//problem 10 Running Sum of 1d Array

vector<int> runningSum(vector<int>& nums) {

    vector<int> outPut = {};
    int numCopy = 0;

	for (int i = 0; i < nums.size(); i++) {
		numCopy += nums[i];
		outPut.push_back(numCopy);
	}

    return outPut;
}

//problem 11 Maximum Number of Words Found in Sentences

int mostWordsFound(vector<string>& sentences) {

    int output = 0;
    for (int i = 0; i < sentences.size(); i++) {
		log(sentences[i]);
    }
   

    return output;
}