#pragma once

#include <string>
#include <vector>

class InputReader {
public:
	std::vector<std::pair<std::string, std::string>> readReplacements(const std::string & _replacementsFileName) const;

	std::string readSourceString(const std::string & _inputFileName) const;
};
