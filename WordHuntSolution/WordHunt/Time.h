#ifndef TIME_H
#define TIME_H

#include <cstdlib>
#include <ctime>

#include "Utils.h"

using namespace std;
namespace hunting {
	class Time {
	private:
		unsigned int m_minute;
	public:
        Time(unsigned int minute = 0u);
        Time& reset();
        ostream& write(ostream& os) const;
        istream& read(istream& is);

        operator unsigned int() const;
        Time& operator*=(int val);
        Time& operator-=(const Time& D);
        Time operator-(const Time& T) const;
	};
    ostream& operator<<(ostream& os, const Time& T);
    istream& operator>>(istream& is, Time& T);
}

#endif // !TIME_H
