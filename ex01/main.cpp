/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:39:04 by mohaben-          #+#    #+#             */
/*   Updated: 2025/07/25 17:30:21 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int		horde_size = 10;
	Zombie*	hordes = zombieHorde(horde_size, "HordeZombie");

	if (!hordes)
	{
		std::cout << "Failed to create zombie horde." << std::endl;
		return (1);
	}
	for (int i = 0; i < horde_size; i++)
	{
		std::cout << "[" << i + 1 << "] ";
		hordes[i].announce();
	}
	delete[] hordes;
	return (0);
}
