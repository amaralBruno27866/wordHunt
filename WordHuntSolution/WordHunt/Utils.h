#ifndef UTILS_H
#define UTILS_h

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
namespace hunting {
	class Utils {
	private:
		unsigned int m_testMins = 480;
		unsigned int m_testIndex = 0;
	public:
		void setDebugTime(int hour, int min);
		int getTime();
		int strcmp(const char* s1, const char* s2)const;
		bool isNumber(int value);
		void error();
		bool maxChar(const char* word);
		bool checkNumber(const std::string& str);
		void copy(char*& dest, const char* src);
	};

	extern bool debug;
	extern Utils U;

	// Template defindo no MS51
	template <typename type>
	void removeDynamicElement(type* array[], int index, int& size) {
		delete array[index];
		for (int j = index; j < size; j++) {
			array[j] = array[j + 1];
		}
		size--;
	}
}

#endif // !UTILS_H
