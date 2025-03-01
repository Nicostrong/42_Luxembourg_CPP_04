/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:42:02 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:42:19 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

/*
 *	Fabric of materia can learn to make a new materia and can clone it
 */
class	IMateriaSource
{
	public:

		/*	Interface not Canonical Form	*/
		virtual ~IMateriaSource( void ) {}

		/*	Method	*/
		virtual void			learnMateria( AMateria *materia ) = 0;
		virtual AMateria		*createMateria( std::string const &type ) = 0;

};

#endif
