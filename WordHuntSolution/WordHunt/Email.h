#ifndef EMAIL_H
#define EMAIL_H

#include <iostream>
#include <cstring>

#include "Time.h"

using namespace std;
namespace hunting {
	class Email {
	private:
		// Member Operators
		string e_sender;
		string e_recipient;
		string e_subjetc;
		string e_body;
		Time e_dateSent;
		Time e_dateReceived;

	public:
		// Constructos
		Email();
		Email(string sender, string recipient, string subject, string body, Time dateSent, Time dateReceived);
		Email(const Email& email);
		Email& operator=(const Email& email);
		~Email();
		void init(const Email& email);

		// Member Functions
		string getSender() const;
		string getRecipient() const;
		string getSubjetc() const;
		string getBody() const;
		Time getDateSent() const;
		Time getDateReceived() const;
	};
}

#endif // !EMAIL_H
