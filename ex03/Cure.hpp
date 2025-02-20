/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:38:25 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:36:35 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

/*
 *	Specific magic object built with AMateria class
 *	can be cloned or using
 */
class	Cure : public AMateria
{
	public:

		/*	Canonical Form	*/
		Cure( void );
		Cure( Cure const &src_object );
		virtual ~Cure( void );

		Cure		&operator=( Cure const &src_object );

		/*	Method	*/
		AMateria	*clone( void ) const;
		using 		AMateria::use;
		void		use( ICharacter &target );

};

#endif
