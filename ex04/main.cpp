#include <iostream>
#include <string>
#include <fstream>
#include "utils.hpp"

int	main(int argc, char *argv[])
{
	std::ifstream	file;
	std::ofstream	out_file;
	std::string		out_filename	= "";
	std::string		line			= "";

	if (argc != 4)
	{
		std::cerr << "error: Please enter three parameters <filename> <s1> <s2>.\n";
		return (1);
	}
	file.open(argv[1]);
	if (!file.is_open())
	{
		std::cerr << "error: Unable to open file.\n";
		return (1);
	}
	out_filename = get_out_filename(argv[1]);
	out_file.open(out_filename.c_str());
	if (!out_file.is_open())
	{
		std::cerr << "error: Unable to create output file.\n";
		return (1);
	}
	while (getline(file, line))
	{
		out_file << string_replace(line, argv[2], argv[3]);
		if (!file.eof())
			out_file << "\n";
	}
	return (0);
}
