/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:10:17 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 11:52:14 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

# include <iostream>

class	A_Animal
{
	protected:

		std::string	_type;

	public:

		A_Animal( void );
		A_Animal( std::string type );
		A_Animal( const A_Animal &src_object );
		virtual ~A_Animal( void );

		virtual A_Animal		&operator=( const A_Animal &src_object );

		/*	Getter	*/
		virtual std::string	getType( void ) const;

		/*	Methodes	*/
		virtual void		makeSound( void ) const = 0;
};

#endif