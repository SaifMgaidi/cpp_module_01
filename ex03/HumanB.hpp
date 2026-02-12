#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB
{
public:
	HumanB(std::string string_name);
	HumanB(std::string string_name, Weapon& weap);
	~HumanB();
	void	setWeapon(Weapon& weap);
	void	attack();
private:
	std::string	name;
	Weapon*		weapon;
};

#endif