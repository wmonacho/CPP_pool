/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:52:15 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/10 11:42:51 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _value(0.0f)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int integer ): _value(integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = integer * (1 << 8);
}

Fixed::Fixed( float number )
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(number * (1 << 8));
}

Fixed::Fixed( Fixed const & src): _value(src._value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=( Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs._value;
	return (*this);
}

bool	Fixed::operator==( Fixed const & rhs) const
{
	return (this->_value == rhs._value);
}

bool	Fixed::operator!=( Fixed const & rhs) const
{
	return (this->_value != rhs._value);
}

bool	Fixed::operator>=( Fixed const & rhs) const
{
	return (this->_value >= rhs._value);
}

bool	Fixed::operator<=( Fixed const & rhs) const
{
	return (this->_value <= rhs._value);
}

bool	Fixed::operator<( Fixed const & rhs) const
{
	return (this->_value < rhs._value);
}

bool	Fixed::operator>( Fixed const & rhs) const
{
	return (this->_value > rhs._value);
}

Fixed	Fixed::operator-( Fixed const & rhs) const
{
	Fixed	result;
	
	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return(result);
}

Fixed	Fixed::operator+( Fixed const & rhs) const
{
	Fixed	result;
	
	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return(result);
}

Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	Fixed	result;
	
	result.setRawBits((this->getRawBits() * rhs.getRawBits()) >> this->_bit);
	return(result);
}

Fixed	Fixed::operator/( Fixed const & rhs) const
{
	Fixed	result(this->toFloat() / rhs.toFloat());
	
	return(result);
}

Fixed&	Fixed::operator--( void )
{
	this->_value--;
	return(*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	inst(*this);
	
	this->_value--;
	return(inst);
}

Fixed&	Fixed::operator++( void )
{
	this->_value++;
	return(*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	inst(*this);
	
	this->_value++;
	return(inst);
}

Fixed&	Fixed::min(Fixed & one, Fixed & two)
{

	if ( one < two)
		return (one);
	else
		return (two);
}

const Fixed&	Fixed::min(const Fixed & one, const Fixed & two)
{

	if ( one < two)
		return (one);
	else
		return (two);
}

Fixed&	Fixed::max(Fixed & one, Fixed & two)
{

	if ( one > two)
		return (one);
	else
		return (two);
}

const Fixed&	Fixed::max(const Fixed & one, const Fixed & two)
{

	if ( one > two)
		return (one);
	else
		return (two);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)(1 << 8));
}

int	Fixed::toInt( void ) const
{
	return (this->_value / (1 << 8));
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw)
{
	this->_value = raw;
}

int	Fixed::getValue( void ) const
{
	return (this->_value);
}

std::ostream	&operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}