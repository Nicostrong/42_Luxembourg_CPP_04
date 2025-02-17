/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WongAnimal.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:38:09 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 11:51:26 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef WONGANIMAL_HPP
# define WONGANIMAL_HPP

# include "A_Animal.hpp"

class	WongAnimal : public virtual A_Animal
{
	public:

		WongAnimal( void );
		WongAnimal( std::string type );
		WongAnimal( const WongAnimal &src_object );
		virtual ~WongAnimal( void );
		virtual WongAnimal	&operator=( const WongAnimal &src_object );

		/*	Methodes	*/
		void				makeSound( void ) const;

};

#endif
