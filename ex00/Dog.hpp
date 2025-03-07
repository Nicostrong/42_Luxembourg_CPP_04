/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:10:47 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 10:59:23 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog:	public Animal
{
	public:

		/*	Canonical Form	*/
		Dog( void );
		Dog( std::string type );
		Dog( const Dog &src_object );
		virtual ~Dog( void );
		
		virtual Dog	&operator=( const Dog &src_object );

		/*	Method	*/
		void		makeSound( void ) const;

};

#endif