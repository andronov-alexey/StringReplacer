#include "InputReader.h"

#include <fstream>

using namespace std;

vector<pair<string, string>> InputReader::readReplacements(const string & _replacementsFileName) const {
	vector<pair<string, string>> replacements;

	ifstream inputStream{ _replacementsFileName };

	if (inputStream) {
		string replaceSource;
		string replacementString;

		while (getline(inputStream, replaceSource) && getline(inputStream, replacementString)) {
			replacements.push_back(make_pair(replaceSource, replacementString));
		}

		inputStream.close();
	}

	return replacements;
}

std::string InputReader::readSourceString(const string & _inputFileName) const {
	ifstream inputStream{ _inputFileName };
	string input;

	if (inputStream) {
		getline(inputStream, input);

		inputStream.close();
	}

	return input;
}
