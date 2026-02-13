#include "HumanB.hpp"

HumanB::HumanB(std::string string_name)
:	name(string_name),
	weapon(NULL)
{
}

HumanB::HumanB(std::string string_name, Weapon& weap)
	: name(string_name),
	  weapon(&weap)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& weap)
{
	weapon = &weap;
}

void	HumanB::attack()
{
	if (!weapon)
		std::cout << name << " has no weapon\n";
	else
		std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
}
