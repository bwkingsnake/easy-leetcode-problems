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