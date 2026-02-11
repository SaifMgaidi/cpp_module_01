#include "Zombie.hpp"

int	main(void)
{
	Zombie	t("saif");
	Zombie	*n = newZombie("test");

	t.announce();
	n->announce();
	randomChump("fff");
	delete n;
	return (0);
}