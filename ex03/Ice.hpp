/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:38:13 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 17:16:08 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

/*
 *	Specific magic object built with AMateria class
 *	can be cloned or using
 */
class	Ice : public	AMateria
{
	public:

		Ice( void );
		Ice( Ice const &src_object );
		virtual ~Ice( void );

		Ice			&operator=( Ice const &src_object );

		AMateria	*clone( void ) const;
		using AMateria::use;
		void		use( ICharacter &target );

};

#endif
