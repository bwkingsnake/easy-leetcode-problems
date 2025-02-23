#pragma once
#include <iostream>
#include <vector> 
using namespace std;

//problem 1 "Convert the Temperature"

vector<double> convertTemperature(double celsius) {

    double Kelvin = celsius + 273.15;
    double Farenheit = celsius * 1.80 + 32;

    vector<double> ans = { Kelvin, Farenheit };
    return ans;
}