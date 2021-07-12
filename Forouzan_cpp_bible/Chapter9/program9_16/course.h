#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Course
{
private:
	int numOfStds;

	const char* inputFileName;
	ifstream inputFile;

	struct Student { int id; int score; char grade; double deviation; };
	Student* students;

	double averageScore;
	double standardDeviation;

	void getInput();
	void setGrades();
	void setAverage();
	void setDeviations();
	void printResult() const;

public:
	Course(int numOfStds, const char* inputFileName);
	~Course();
};