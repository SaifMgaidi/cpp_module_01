#include "Zombie.hpp"

int	main(void)
{
	int		N = 10;
	Zombie*	zombies = zombieHorde(N, "saif");

	for (int i = 0; i < N; ++i)
		zombies[i].announce();

	if (zombies)
		delete[] zombies;
	return (0);
}