/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:39:04 by mohaben-          #+#    #+#             */
/*   Updated: 2025/07/25 17:12:56 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *heap_zombie = newZombie("Heap Zombie");

	heap_zombie->announce();
	delete heap_zombie;
	randomChump("Stack Zombie");
	return (0);
}
