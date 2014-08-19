#include <vector>
#include <algorithm>

template<class FwdIt>
int maximum_subarray_problem(FwdIt first, FwdIt last)
{
	int max_so_far = *first, max_ending_here = *first;

	FwdIt begin = first;
	FwdIt begin_temp = first;
	FwdIt end = first;

	for (++first; first != last; ++first)
	{
		if (max_ending_here < 0)
		{
			max_ending_here = *first;
			begin_temp = first;
		}
		else
		{
			max_ending_here += *first;
		}

		if (max_so_far < max_ending_here)
		{
			max_so_far = max_ending_here;

			begin = begin_temp;
			end = first;
		}
	}
	return max_so_far;
}