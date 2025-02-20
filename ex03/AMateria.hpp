/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:07:55 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:32:01 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

/*
 *	Define a generic magical materia with a type
 *	can be cloned or using
 */
class	AMateria
{
	protected:

		std::string			_type;

	public:

		/*	Canonical Form	*/
		AMateria( void );
		AMateria( std::string const &type );
		AMateria( AMateria const &src_object );
		virtual ~AMateria( void );

		virtual AMateria	&operator=( AMateria const &src_object );

		/*	Getter	*/
		std::string const	&getType( void ) const;

		/*	Method	*/
		virtual AMateria	*clone( void ) const = 0;
		virtual void		use( ICharacter &target );

};

#endif
