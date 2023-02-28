/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:08:06 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/27 18:54:18 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): Form("PresidentialPardonForm", 25, 5), _Target("")
{

}

PresidentialPardonForm::PresidentialPardonForm( std::string target ): Form("PresidentialPardonForm", 25, 5), _Target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & rhs ): Form("PresidentialPardonForm", 25, 5), _Target(rhs.getTarget())
{
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	
}

const PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	*this = rhs;
	return (*this);
}

void	PresidentialPardonForm::execute( const Bureaucrat &Boss) const
{
	try
	{
		if (Boss.getGrade() > this->getExecutionGrade())
			throw(Form::GradeTooLowException());
		if (this->getSignature() == 0)
			throw(Form::NotSigned());
		std::cout << this->_Target << "have been pardon by Zaphod Beeblebrox" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return (this->_Target);
}