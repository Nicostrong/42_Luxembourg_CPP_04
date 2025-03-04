/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:38:28 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 09:46:46 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat:	public WrongAnimal
{
	public:

		/*	Canonical Form	*/
		WrongCat( void );
		WrongCat( std::string type );
		WrongCat( const WrongCat &src_object );
		~WrongCat( void );
		
		WrongCat	&operator=( const WrongCat &src_object );

		/*	Method	*/
		void			makeSound( void ) const;
	
};

#endif
