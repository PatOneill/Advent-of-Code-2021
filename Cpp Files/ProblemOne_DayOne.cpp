#include "ProblemOne_DayOne.h"

ProblemOne_DayOne::ProblemOne_DayOne(vector<int>& input) {
	_UserInput = input;
	SolutionOne();
}

void ProblemOne_DayOne::SolutionOne() {
	auto start = high_resolution_clock::now();

	int increasesInDepth = 0;

	int lastIndex = 0;
	int currentIndex = 1;
	for (int i = 1; i < _UserInput.size(); ++i) {
		if (_UserInput[lastIndex] < _UserInput[currentIndex]) {
			increasesInDepth += 1;
		}
		lastIndex = currentIndex;
		currentIndex += 1;
	}
	cout << "Result: " << to_string(increasesInDepth) + "\n";
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Time Result: " << duration.count() << endl;
}

void ProblemOne_DayOne::SolutionTwo()
{
	auto start = high_resolution_clock::now();

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() << endl;
}

ProblemOne_DayOne::~ProblemOne_DayOne() {

}