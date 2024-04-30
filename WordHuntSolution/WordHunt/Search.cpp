#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

#include "Time.h"
#include "Utils.h"
#include "Search.h"

using namespace std;
namespace hunting {
	Search::Search()
		: s_keyword(""), s_sender(""), s_recipient(""), s_subject(""), s_period(0) { }

	Search::Search(string keyword, string sender, string recipient, string subject, Time period)
		: s_keyword(keyword), s_sender(sender), s_recipient(recipient), s_subject(subject), s_period(period) { }

	Search::Search(const Search& search)
	{
		init(search);
	}

	Search& Search::operator=(const Search& search)
	{
		if (this != &search) {
			init(search);
		}

		return *this;
	}

	Search::~Search()
	{
	}

	void Search::init(const Search& search)
	{
		s_keyword = search.s_keyword;
		s_sender = search.s_sender;
		s_recipient = search.s_recipient;
		s_subject = search.s_subject;
		s_period = search.s_period;
	}
}
