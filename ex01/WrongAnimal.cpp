/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:39:02 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 09:58:42 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default Construnctor of class WrongAnimal
 */
WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout	<< RED
				<< "Default constructor WrongAnimal called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Constructor of class WrongAnimal with type parameter
 */
WrongAnimal::WrongAnimal( const std::string type ) : _type(type)
{
	std::cout	<< RED
				<< "Constructor WrongAnimal with parameter type called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Copy constructor of class WrongAnimal
 */
WrongAnimal::WrongAnimal( const WrongAnimal &src_object ) : _type(src_object._type)
{
	std::cout	<< RED
				<< "Copy constructor WrongAnimal called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Destructor of class WrongAnimal
 */
WrongAnimal::~WrongAnimal( void )
{
	std::cout	<< RED
				<< "Destructor of class WrongAnimal called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &src_object )
{
	std::cout	<< RED
				<< "Assignation operator overload WrongAnimal called."
				<< RESET << std::endl;
	if (this != &src_object)
		this->_type = src_object._type;
	return (*this);
}

/*******************************************************************************
 *								GETTER										   *
 ******************************************************************************/

/*
 *	Getter for the type attribute
 */
std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}

/*******************************************************************************
 *								METHOD										   *
 ******************************************************************************/

/*
 *	Method to make sound of WrongAnimal
 */
void		WrongAnimal::makeSound( void ) const
{
	std::cout	<< RED
				<< "Wrong Wrong!"
				<< RESET << std::endl;
	return ;
}
