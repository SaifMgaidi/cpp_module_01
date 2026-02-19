#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <fstream>
#include <string>

std::string			string_replace(const std::string& line,
	const std::string& s1, const std::string& s2);

const std::string	get_out_filename(char* filename);

#endif