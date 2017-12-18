#include <iostream>

#include "tools/ReplaceHelper.h"
#include "file/InputReader.h"

using namespace std;

namespace {
	static const string s_inputFileName = "in.txt";
	static const string s_replacementsFileName = "replacements.txt";
	static const string s_outputFileName = "out.txt";

	void printInputFileMissingError(const string & _exePath, const string & _filename) {
		cerr << "Failed to open input file: \"" << _filename << "\"" << endl
			<< "You should put it near the executable here:\n\"" << _exePath  << "\"" << endl;
		cerr << "Press <enter> to exit ..." << endl;
		std::getchar();
	}
}

int main(int _argc, char * _argv[]) {
	InputReader reader;

	const vector<pair<string, string>> replacements = reader.readReplacements(s_replacementsFileName);

	if (replacements.empty()) {
		printInputFileMissingError(_argv[0], s_replacementsFileName);
		return 1;
	}

	string sourceString = reader.readSourceString(s_inputFileName);

	if (sourceString.empty()) {
		printInputFileMissingError(_argv[0], s_inputFileName);
		return 2;
	}

	cout << "Replacing occurences ..." << endl;
	ReplaceHelper::replaceAll(sourceString, s_outputFileName, replacements);

	cout << "Done. Results written to file: \"" << s_outputFileName << "\"" << endl;
	cout << "Press <enter> to exit ..." << endl;
	std::getchar();

	return 0;
}
