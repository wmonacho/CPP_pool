/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:08:00 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/14 13:46:15 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie* roulettes = new Zombie(name);
	return (roulettes);
}

void	randomChump( std::string name )
{
	Zombie mumu(name);
	mumu.annouce();
	
}