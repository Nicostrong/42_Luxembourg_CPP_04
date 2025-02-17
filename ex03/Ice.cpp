/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:38:19 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 16:34:42 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
 *	Default constructor
 */
Ice::Ice( void ) : AMateria( "ice")
{
	std::cout << "Default constructor Ice called." << std::endl;
	return ;
}

/*
 *	Constructor by copy
 */
Ice::Ice( Ice const &src_object ) : AMateria(src_object)
{
	std::cout << "Copy constructor Ice called." << std::endl;
	return ;
}

/*
 *	Destructor
 */
Ice::~Ice( void )
{
	std::cout << "Destructor Ice called." << std::endl;
	return ;
}

/*
 *	Assignation opertor overide
 */
Ice	&Ice::operator=( Ice const &src_object )
{
	AMateria::operator=(src_object);
	return (*this);
}

/*
 *	Methode clone
 */
AMateria	*Ice::clone( void ) const
{
	std::cout << "Clone of Ice materia called." << std::endl;
	return (new Ice(*this));
}

/*
 *	Methode use
 */
void	Ice::use( ICharacter &target )
{
	std::cout	<< "* Shoots an ice bolt at "
				<< target.getName()
				<< " *"
				<< std::endl;
	return ;
}
