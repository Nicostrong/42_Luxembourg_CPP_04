/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:09:28 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/21 07:38:09 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

/*
 *	Create a character with an inventary of 4 materias maxi
 */
class	Character : public	ICharacter
{

	private:

		std::string	_name;
		AMateria	*_inventory[4];
		Ground		*_ground;

	public:
	
		/*	Canonical Form	*/
		Character( std::string name, Ground *ground );
		Character( Character const &src_object );
		virtual ~Character( void );

		Character 			&operator=( Character const &src_object );
		
		/*	Method	*/
		std::string const	&getName( void ) const;
		void				equip( AMateria *m);
		void				unequip( int idx );
		void				use( int idx, ICharacter &target );
		void				dropMateria( int idx );
		void				pickupMateria( void );
};


#endif
