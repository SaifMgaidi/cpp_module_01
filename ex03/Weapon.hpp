#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon
{
public:
	Weapon();
	Weapon(std::string string_type);
	~Weapon();
	const std::string&	getType() const;
	void				setType(std::string string_type);
private:
	std::string	type;
};

#endif