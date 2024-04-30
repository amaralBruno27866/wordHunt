#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstring>
#include "Time.h"
#include "Utils.h"

using namespace std;
namespace hunting {
	Time::Time(unsigned int minute)
	{
		m_minute = minute;
	}

	Time& Time::reset()
	{
		m_minute = U.getTime();
		return *this;
	}

	ostream& Time::write(ostream& os) const
	{
		unsigned int hours = m_minute / 60;
		unsigned int minutes = m_minute % 60;

		if (hours < 10) {
			os << "0";
		}
		os << hours << ":";
		if (minutes < 10) {
			os << "0";
		}
		os << minutes;

		return os;
	}

	istream& Time::read(istream& is)
	{
		char p;
		unsigned int h, m;

		is >> h >> p >> m;

		if (is && p == ':' && h < 25 && m < 60) {
			m_minute = h * 60 + m;
		}
		else {
			m_minute = 0;
		}

		return is;
	}

	Time::operator unsigned int() const
	{
		return m_minute;
	}

	Time& Time::operator*=(int val)
	{
		m_minute *= val;
		return *this;
	}

	Time& Time::operator-=(const Time& D)
	{
		if (m_minute >= D.m_minute) {
			m_minute -= D.m_minute;
		}
		else {
			m_minute = 1440 - (D.m_minute - m_minute);
		}

		return *this;
	}

	Time Time::operator-(const Time& T) const
	{
		Time r = *this;

		return r -= T;
	}

	ostream& operator<<(ostream& os, const Time& T)
	{
		T.write(os);
		return os;
	}

	istream& operator>>(istream& is, Time& T)
	{
		T.read(is);
		return is;
	}
}