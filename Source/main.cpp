#include "HeaderFiles/LeetCodeProblems.h"
#include "HeaderFiles/EdabitProblems.h"

int main() {
	
	vector<int> nums = { 7,7,7,7 };
	
	vector<int> outPut = smallerNumbersThanCurrent(nums);

	for (int i = 0; i < outPut.size(); i++) {
		log(outPut[i]);
	}

	cin.get();

}