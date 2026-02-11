#include "Zombie.hpp"

Zombie::Zombie(): name("")
{
}

Zombie::Zombie(std::string name_string): name(name_string)
{
}

Zombie::~Zombie()
{
	std::cout << "Zombie: " << name << " destroyed.\n";
}

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}