/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:10:17 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 10:45:26 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	protected:

		std::string	_type;

	public:

		Animal( void );
		Animal( std::string type );
		Animal( const Animal &src_object );
		virtual ~Animal( void );

		virtual Animal		&operator=( const Animal &src_object );

		/*	Getter	*/
		virtual std::string	getType( void ) const;

		/*	Methodes	*/
		virtual void		makeSound( void ) const = 0;
};

#endif