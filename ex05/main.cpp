#include <iostream>
#include <string>
#include "Harl.hpp"

int	main()
{
	Harl	h;

	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("ERROR");
	h.complain("NOT_VALID");
	h.complain("");
	return (0);
}
