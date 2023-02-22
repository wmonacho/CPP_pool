/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: will <will@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:08:59 by wmonacho          #+#    #+#             */
/*   Updated: 2023/02/22 22:27:22 by will             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
    public :
        class GradeTooHighException : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return ("Grade too high");
                }
        };  
        
        class GradeTooLowException : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return ("Grade too low");
                }
        };
    
    private :
        const std::string   _Name;
        unsigned int        _Grade;
    
    public :
        Bureaucrat( void );
        Bureaucrat( std::string name, int grade );
        Bureaucrat( Bureaucrat const & rhs);
        ~Bureaucrat( void );
        const Bureaucrat& operator=( Bureaucrat const & rhs);
        const std::string& getName( void ) const;
        unsigned int   getGrade( void ) const;
        void		retrograde( void );
		void		promotion( void );
};
std::ostream	&operator<<( std::ostream & o, Bureaucrat const & rhs);