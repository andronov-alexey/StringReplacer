#include "ReplaceHelper.h"

#include <fstream>

using namespace std;

void ReplaceHelper::replaceAll(const string & _src, const string & _outputFileName, const vector<pair<string, string>> & _replacements) {
	ofstream outputStream{ _outputFileName };

	bool isReplacementFound = false;

	for (size_t i = 0; i < _src.size();) {
		isReplacementFound = false;

		for (size_t j = 0; !isReplacementFound && j < _replacements.size(); j++) {
			const string & replacementKey = _replacements[j].first;
			if (_src.compare(i, replacementKey.size(), replacementKey) == 0) {
				outputStream << _replacements[j].second;
				i += replacementKey.size();
				isReplacementFound = true;
			}
		}

		if (!isReplacementFound) {
			outputStream << _src[i++];
		}
	}

	outputStream.close();
}
