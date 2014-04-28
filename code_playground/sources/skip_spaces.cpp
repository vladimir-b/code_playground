#include "skip_spaces.h"
#include <algorithm>
#include <locale>
#include <functional>

void skip_spaces(std::string const & source, std::string & destination)
{
	std::locale locale;
	std::copy_if(source.cbegin(), source.cend(), std::back_inserter(destination), 
		[&locale](char c) -> bool { return !std::isspace(c, locale); });
}