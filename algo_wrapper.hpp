#ifndef __ALGO__WRAPPER
#define __ALGO__WRAPPER

#include <algorithm>

template<typename Container> //inline
typename Container::iterator adjacent_find(Container& container)
{
	return adjacent_find(container.begin(), container.end());
}

template<typename Container, typename T> //inline
typename Container::iterator find(Container& container, const T& value)
{
	return std::find(container.begin(), container.end(), value);
}
#endif
