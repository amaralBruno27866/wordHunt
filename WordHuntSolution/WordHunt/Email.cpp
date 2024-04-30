#define _CRT_NO_SECURE_WARNINGS

#include <iostream>
#include <cstring>
#include "Email.h"

using namespace std;
namespace hunting {
	Email::Email()
	{
	}

	Email::Email(string sender, string recipient, string subject, string body, Time dateSent, Time dateReceived)
	{
	}

	Email::Email(const Email& email)
	{
		init(email);
	}

	Email& Email::operator=(const Email& email)
	{
		if (this != &email) {
			init(email);
		}

		return *this;
	}

	Email::~Email()
	{
	}

	void Email::init(const Email& email)
	{
		e_sender = email.e_sender;
		e_recipient = email.e_recipient;
		e_subjetc = email.e_subjetc;
		e_body = email.e_body;
		e_dateSent = email.e_dateSent;
		e_dateReceived = email.e_dateReceived;
	}

	string Email::getSender() const
	{
		return e_sender;
	}

	string Email::getRecipient() const
	{
		return e_recipient;
	}

	string Email::getSubjetc() const
	{
		return e_subjetc;
	}

	string Email::getBody() const
	{
		return e_body;
	}

	Time Email::getDateSent() const
	{
		return Time();
	}

	Time Email::getDateReceived() const
	{
		return Time();
	}
}
