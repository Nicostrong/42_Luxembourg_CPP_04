/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:38:32 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 16:39:07 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
 *	Default constructor
 */
Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Default constructor Cure called." << std::endl;
	return ;
}

/*
 *	Constructor by copy
 */
Cure::Cure( Cure const &src_object ) : AMateria(src_object)
{
	std::cout << "Copy constructor Cure called." << std::endl;
	return ;
}

/*
 *	Destructor
 */
Cure::~Cure( void )
{
	std::cout << "Destructor Cure called." << std::endl;
	return ;
}

/*
 *	Assignation opertor overide
 */
Cure	&Cure::operator=( Cure const &src_object )
{
	AMateria::operator=(src_object);
	return (*this);
}

/*
 *	Methode clone
 */
AMateria	*Cure::clone( void ) const
{
	std::cout << "Clone of Cure materia called." << std::endl;
	return (new Cure(*this));
}

/*
 *	Methode use
 */
void	Cure::use( ICharacter &target )
{
	std::cout	<< "* Heals "
				<< target.getName()
				<< "'s wounds *"
				<< std::endl;
	return ;
}