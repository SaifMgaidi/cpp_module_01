#include "utils.hpp"

std::string	string_replace(const std::string& line, const std::string& s1,
	const std::string& s2)
{
	std::string	new_string 	= "";
	size_t		i 			= 0;
	size_t		index 		= line.find(s1, i);

	if (index == std::string::npos || s1 == "")
		return (line);
	while (i < line.size())
	{
		while (i < index)
		{
			new_string += line[i];
			i++;
		}
		new_string += s2;
		i += s1.size();

		if (line.find(s1, i) == std::string::npos)
		{
			if (i < line.size())
				new_string += line.substr(i);
			break ;
		}
		index = line.find(s1, i);
	}
	return (new_string);
}

const std::string	get_out_filename(char* filename)
{
	std::string	out_file = filename;
	return (out_file + ".replace");
}
