/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:39:12 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 17:30:59 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>

class	AMateria;

/*
 *	Character who can get and use magical object and an inventary of 4 materias
 */
class	ICharacter
{
	public:

		virtual ~ICharacter( void ) {}

		virtual std::string const	&getName( void ) const = 0;
		virtual void				equip( AMateria *m ) = 0;
		virtual void				unequip( int idx ) = 0;
		virtual void				use( int idx, ICharacter &target ) = 0;

};

#endif
