#pragma once

#include <string>
#include <vector>

class ReplaceHelper {
public:
	static void replaceAll(const std::string & _src, const std::string & _outputFileName, const std::vector<std::pair<std::string, std::string>> & _replacements);
};
