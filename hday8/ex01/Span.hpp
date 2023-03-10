/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmonacho <wmonacho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:34:31 by will              #+#    #+#             */
/*   Updated: 2023/03/08 13:45:49 by wmonacho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <stdlib.h>
#include <time.h>
#include <string>

class Span
{
	public :
        class SizeToLow : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return ("Size to low");
                }
        };  
        
        class RangeIteratorToBig : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return ("Range iterator is bigger than size max");
                }
        };
		private :
		unsigned int							_SizeMax;
		std::vector<unsigned int>				_Containers;
		
		public :
		Span( void );
		Span( unsigned int n);
		Span( Span const & rhs);
		~Span( void );
		const Span&	operator=( Span const & obj);
		
		void	addNumber( int	Number );
		int		shortestSpan( void );
		int		longestSpan( void );
		void	sortContainer( void );
		const std::vector<unsigned int>&	getContainer( void );
		void	populate( const std::vector<unsigned int>::iterator&	begin, const std::vector<unsigned int>::iterator& end);
		
};

#endif