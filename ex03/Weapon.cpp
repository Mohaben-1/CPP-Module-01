/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 18:58:52 by mohaben-          #+#    #+#             */
/*   Updated: 2025/07/25 19:37:07 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {};

const std::string&	Weapon::getType( void )
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
