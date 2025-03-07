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