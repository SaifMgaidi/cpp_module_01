#include "Zombie.hpp"

int	main(void)
{
	int		N = 3;
	Zombie*	zombies = zombieHorde(N, "saif");

	if (zombies)
	{
		for (int i = 0; i < N; ++i)
			zombies[i].announce();
		delete[] zombies;
	}
	return (0);
}
