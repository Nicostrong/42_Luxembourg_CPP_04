/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WongCat.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:38:28 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:30:29 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef WONGCAT_HPP
# define WONGCAT_HPP

# include "Cat.hpp"
# include "WongAnimal.hpp"

class	WongCat:	public Cat, public WongAnimal
{
	public:

		/*	Canonical Form	*/
		WongCat( void );
		WongCat( std::string type );
		WongCat( const WongCat &src_object );
		virtual ~WongCat( void );

		virtual WongCat	&operator=( const WongCat &src_object );

		/*	Method	*/
		void			makeSound( void ) const;
	
};

#endif
