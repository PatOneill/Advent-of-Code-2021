#include "ProblemTwo_DayOne.h"

ProblemTwo_DayOne::ProblemTwo_DayOne(vector<int>& input)
{
	_UserInput = input;
	_LeadingWindowStart = 1;
	_LeadWindowResults = 0;
	SolutionOne();
}

void ProblemTwo_DayOne::SolutionOne()
{
	auto start = high_resolution_clock::now();

	bool canContinue = true;
	int increasesInDepth = 0;

	while (canContinue)
	{
		if (_LeadingWindowStart + 2 > _UserInput.size() - 1)
		{
			canContinue = false;
		}
		else
		{
			if (TrailingRollingWindow() < RollingWindow(_LeadingWindowStart))
			{
				increasesInDepth += 1;
			}
		}
	}

	cout << "Result: " << to_string(increasesInDepth) + "\n";
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Time Result : " <<duration.count() << endl;
}

void ProblemTwo_DayOne::SolutionTwo()
{
	auto start = high_resolution_clock::now();

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() << endl;
}

int ProblemTwo_DayOne::RollingWindow(int& startLocation)
{
	_LeadWindowResults = _UserInput[startLocation] + _UserInput[startLocation + 1] + _UserInput[startLocation + 2];
	startLocation += 1;
	return _LeadWindowResults;
}

int ProblemTwo_DayOne::TrailingRollingWindow()
{
	if (_LeadWindowResults == 0)
	{
		return _UserInput[0] + _UserInput[1] + _UserInput[2];
	}
	else {
		return _LeadWindowResults;
	}
}

ProblemTwo_DayOne::~ProblemTwo_DayOne()
{

}
