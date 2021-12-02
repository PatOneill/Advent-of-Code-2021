#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <chrono>

using namespace std::chrono;
using namespace std;

class ProblemTwo_DayOne
{
public:
	ProblemTwo_DayOne(vector<int>& input);
	~ProblemTwo_DayOne();
private:
	vector<int> _UserInput;
	int _LeadingWindowStart;
	int _LeadWindowResults;
	void SolutionOne();
	void SolutionTwo();
	int RollingWindow(int& startLocation);
	int TrailingRollingWindow();
};

