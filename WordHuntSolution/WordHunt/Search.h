#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
#include <cstring>

#include "Time.h"
#include "Utils.h"

using namespace std;
namespace hunting {
	class Search {
	private:
		string s_keyword;
		string s_sender;
		string s_recipient;
		string s_subject;
		Time s_period;
	public:
		// Constructors
		Search();
		Search(string keyword, string sender, string recipient, string subject, Time period);
		Search(const Search& search);
		Search& operator=(const Search& search);
		~Search();
		void init(const Search& search);

		// Member functions
		string searchByWord(string word);
		string searchBySender(string senderEmail);
		string searchByRecipient(string recipientEmail);
		string searchBySubject(string subject);
		Time searchByPeriod(Time date);
	};

	extern Search S;
}

#endif // !SEARCH_H
