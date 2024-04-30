#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <algorithm>

#include "Utils.h"
#include "Time.h"

using namespace std;
namespace hunting {

	bool debug = false;
	Utils U;

	void Utils::setDebugTime(int hour, int min)
	{
		hunting::debug = true;
		m_testMins = hour * 60 + min;
	}

	int Utils::getTime()
	{
		int mins = -1;
		if (debug) {
			int duration[]{ 3,5,9,20,30 };
			mins = (m_testMins %= 1440);
			m_testMins += duration[m_testIndex++ % 5];
		}
		else {
			time_t t = time(NULL);
			tm lt = *localtime(&t);
			mins = lt.tm_hour * 60 + lt.tm_min;
		}
		return mins;
	}

	int Utils::strcmp(const char* s1, const char* s2) const
	{
		int i;
		for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++);
		return s1[i] - s2[i];
	}

	bool Utils::isNumber(int value)
	{
		bool isTrue = false;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
		}
		else {
			isTrue = true;
		}

		return isTrue;
	}

	void Utils::error()
	{
		cout << "Bad time entry, retry (HH:MM): ";
	}

	bool Utils::maxChar(const char* word)
	{
		bool isValid = false;
		if (word != nullptr && word[0] != '\0') {
			size_t count = strlen(word);
			if (count <= 50) {
				isValid = true;
			}
		}
		return isValid;
	}

	bool Utils::checkNumber(const std::string& str)
	{
		return !str.empty() && all_of(str.begin(), str.end(), ::isdigit);
	}

	void Utils::copy(char*& dest, const char* src)
	{
		delete[] dest;
		dest = nullptr;
		if (src != nullptr && src[0] != '\0') {
			dest = new char[strlen(src) + 1];
			strcpy(dest, src);
		}
	}
}