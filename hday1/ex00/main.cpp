/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:35:45 by wmonacho          #+#    #+#             */
/*   Updated: 2023/01/26 15:05:19 by wmonacho         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void randomChump( std::string name );

int	main(void)
{
	Zombie* roulettes = newZombie("saucisse");
	roulettes->annouce();
	randomChump("a roulettes");
	delete roulettes;
	return (0);
}