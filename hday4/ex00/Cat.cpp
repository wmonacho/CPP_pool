/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:10:25 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/16 16:55:29 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): type("Cat")
{
	std::cout << "Cat is born" << std::endl;
}

Cat::Cat( Cat const & obj): Animal()
{
	this->type = obj.type;
}

Cat::~Cat( void )
{
	std::cout << "Cat destroyed" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "a lambda Cat sound: MIAUR BEAUTIFUL" << std::endl;
}

Cat&	Cat::operator=( Cat const & obj)
{
	this->type = obj.type;
	return (*this);
}