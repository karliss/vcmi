#include "Global.h"

namespace vstd {

	std::vector<std::string> split(std::string s, std::string separators)
	{
		std::vector<std::string> result;
		boost::split(result, s, boost::is_any_of(separators));
		return result;
	}

}
