#pragma once

#include <string>
using namespace std;

void pushFront(string& str, char c)
{
	string tmp(1, c);
	str.insert(0, tmp);
}

void pushBack(string& str, char c)
{
	string tmp(1, c);
	str.append(tmp);
}

char popFront(string& str)
{
	int idx = 0;
	char tmp = str[idx];
	str.erase(idx, 1);
	return tmp;
}

char popBack(string& str)
{
	int idx = str.size() - 1;
	char tmp = str[idx];
	str.erase(idx, 1);
	return tmp;
}