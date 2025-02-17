/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:07:38 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 17:33:13 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

/*
 *	Default constructor
 */
AMateria::AMateria( void ) : _type("default")
{
	std::cout << "Default constructor AMateria called." << std::endl;
	return ;
}

/*
 *	Constructor with parameter type
 */
AMateria::AMateria( std::string const &type ) : _type(type)
{
	std::cout << "Constructor AMAteria with parameter type called." << std::endl;
	return ;
}

/*
 *	Copy constructor AMateria
 */
AMateria::AMateria( AMateria const &src_object )
{
	std::cout << "Copy constructor AMateria called." << std::endl;
	*this = src_object;
	return ;
}

/*
 *	Destructor
 */
AMateria::~AMateria( void )
{
	std::cout << "Destructor AMateria called." << std::endl;
	return ;
}

/*
 *	AMateria opertor overide
 */
AMateria	&AMateria::operator=( AMateria const &src_object )
{
	if (this != &src_object)
		this->_type = src_object._type;
	return (*this);
}

/*
 *	Getter
 */
std::string const	&AMateria::getType( void ) const
{
	return (this->_type);
}

/*
 *	Methode use
 */
void	AMateria::use( ICharacter &target )
{
	std::cout	<< "* uses "
				<< this->_type
				<< " on "
				<< target.getName()
				<< " *"
				<< std::endl;
	return ;
}
