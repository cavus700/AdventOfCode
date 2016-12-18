// AdventOfCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

#include "Day1.h"
#include "Day2.h"
#include "Day3.h"
#include "Day4.h"
#include "Day5.h"
#include "Day6.h"
#include "Day7.h"
#include "Day8.h"

//#define INPUT_TEXT "../input/day1.txt"
//#define INPUT_TEXT "../input/day2.txt"
//#define INPUT_TEXT "../input/day3.txt"
//#define INPUT_TEXT "../input/day4.txt"
//#define INPUT_TEXT "../input/day5.txt"
//#define INPUT_TEXT "../input/day6.txt"
//#define INPUT_TEXT "../input/day7.txt"
#define INPUT_TEXT "../input/day8.txt"

using namespace std;

int main(int argc, char** argv)
{
	vector<string> input;
	string tmpIn;
	ifstream reader(INPUT_TEXT);

	if (!reader.is_open())
		return -1;

	while (getline(reader, tmpIn))
		input.push_back(tmpIn);

	reader.close();

	//Day1 day;
	//Day2 day;
	//Day3 day;
	//Day4 day;
	//Day5 day;
	//Day6 day;
	//Day7 day;
	Day8 day;

	day.startA(input);
	day.startB(input);

	system("pause");
	return 0;
}

