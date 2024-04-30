#define _CRT_NO_SECURE_WARNINGS

#include <iostream>
#include <cstring>
#include <fstream>
#include <filesystem>

#include "Email.h"
#include "File.h"

using namespace std;
namespace hunting {
	File::File()
	{
		f_isOpen = false;
		f_isSave = false;
		f_keyword = "";
		f_emailFolder = std::filesystem::current_path() / "email";
		f_resultFolder = std::filesystem::current_path() / "result";

		checkAndCreateDirectory(f_emailFolder);
		checkAndCreateDirectory(f_resultFolder);
	}

	File::~File()
	{
	}

	bool File::openEmailFile(const string& fileName, Email& email)
	{
		return false;
	}

	bool File::searchEmailContent(const Email& email)
	{
		return false;
	}

	bool File::saveEmailCPY(const Email& email, const string& fileName)
	{
		return false;
	}

	void File::setKeyword(const string& keyword)
	{
	}

	void File::checkAndCreateDirectory(const std::filesystem::path& dirPath)
	{
		if (!std::filesystem::exists(dirPath)) {
			std::filesystem::create_directory(dirPath);

			cout << "The email and result folders have been created, copy all" << endl;
			cout << "email files with[.eml] extension to the email folder, these" << endl;
			cout << "files will be the target of the search, when the search and" << endl;
			cout << "filtering of the results are finished, all the selected emails" << endl;
			cout << "will be saved in the result folder, they will be organized by" << endl;
			cout << "the id that is added during the search, they will be[.txt] files" << endl;
			cout << "so they will not be opened directly on the email server, use" << endl;
			cout << "them only as a guide to find within your email server the necessary files." << endl;
		}
		else {
			cout << "The email and result folders already exist, insert your emails in" << endl;
			cout << "the email folder, the results will be saved in the result folder." << endl;
			cout << std::filesystem::current_path() / "email" << endl;
			cout << std::filesystem::current_path() / "result" << endl;
		}
	}
}
