#include "skip_spaces.h"
#include <algorithm>
#include <locale>
#include <functional>

void skip_spaces(std::string const & source, std::string & destination)
{
	std::copy_if(source.cbegin(), source.cend(), std::back_inserter(destination), 
		[](char ch) { return !std::isspace<char>(ch, std::locale::classic()); });
}