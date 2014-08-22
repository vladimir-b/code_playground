#include "string_manipulations.h"
#include <algorithm>

char * end(char * str)
{
	return str + std::strlen(str);
}

const char * end(const char * str)
{
	return str + std::strlen(str);
}

void reverse(std::string & src)
{
	std::reverse(src.begin(), src.end());
}

void reverse(char * src)
{
	for (char * _begin = src, *_end = std::prev(end(src)); _begin < _end; ++_begin, --_end)
	{
		std::swap(*_begin, *_end);
	}
}

void remove_dublicates(std::string & str)
{
	str.erase(std::unique(str.begin(), str.end()), str.end());
}

char * unique(char * first, char * last)
{
	if (std::distance(first, last) < 2)
		return last;

	for (char * next = std::next(first); next != last; ++next)
	{
		if (*first != *next)
		{
			*(++first) = *next;
		}
	}
	return first;
}

void erase(char * first, char * last)
{
	last;
	*first = 0;
}

void remove_dublicates(char * str)
{
	erase(unique(str, end(str)), end(str));
}
