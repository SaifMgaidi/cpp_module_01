#include "HumanA.hpp"

HumanA::HumanA(std::string string_name, Weapon& weap)
	: name(string_name),
	  weapon(weap)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
