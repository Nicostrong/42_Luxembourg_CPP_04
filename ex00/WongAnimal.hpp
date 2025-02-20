/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WongAnimal.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:38:09 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:05:05 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef WONGANIMAL_HPP
# define WONGANIMAL_HPP

# include "Animal.hpp"

class	WongAnimal : public virtual Animal
{
	public:

		/*	Canonical Form	*/
		WongAnimal( void );
		WongAnimal( std::string type );
		WongAnimal( const WongAnimal &src_object );
		virtual ~WongAnimal( void );
		
		virtual WongAnimal	&operator=( const WongAnimal &src_object );

		/*	Methode	*/
		void				makeSound( void ) const;

};

#endif
