#include "Weapon.hpp"

Weapon::Weapon(): type("")
{
}

Weapon::Weapon(std::string string_type): type(string_type)
{
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string string_type)
{
	type = string_type;
}