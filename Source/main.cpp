#include "HeaderFiles/LeetCodeProblems.h"
#include "HeaderFiles/EdabitProblems.h"

int main() {
	
	vector<int> nums = { 2,7,11,15 };
	int target = 26;

	vector<int> outPut = twoSum(nums, target);

	for (int i = 0; i < outPut.size(); i++) {
		log(outPut[i]);
	}

	cin.get();

}