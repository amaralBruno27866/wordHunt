#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <cstring>
#include <filesystem>
#include <fstream>

#include "Email.h"

using std::filesystem::path;

namespace hunting {
	class File {
	private:
		File* f_list;
		int f_totalResult;
		bool f_isOpen;
		bool f_isSave;
		string f_keyword;
		path f_emailFolder;
		path f_resultFolder;
	public:
		File();
		~File();

		bool openEmailFile(const string& fileName, Email& email);
		bool searchEmailContent(const Email& email);
		bool saveEmailCPY(const Email& email, const string& fileName);
		void setKeyword(const string& keyword);
		bool isOpen() const { return f_isOpen; }
		bool isSave() const { return f_isSave; }
		string getKeyword() const { return f_keyword; }
		void checkAndCreateDirectory(const std::filesystem::path& dirPath);

		ostream& showListEmail(ostream& os) const;
	};

	extern File F;
}

#endif // !FILE_H
