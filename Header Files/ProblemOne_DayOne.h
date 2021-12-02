#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <chrono>

using namespace std::chrono;
using namespace std;

class ProblemOne_DayOne
{
public:
	ProblemOne_DayOne(vector<int>& input);
	~ProblemOne_DayOne();
private:
	vector<int> _UserInput;
	void SolutionOne();
	void SolutionTwo();
};

