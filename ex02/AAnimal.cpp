/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:03 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 11:23:55 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default constructor of class AAnimal
 */
AAnimal::AAnimal( void ) : _type("AAnimal")
{
	std::cout	<< GREEN
				<< "Default constructor AAnimal called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Constructor of class AAnimal with type parameter
 */
AAnimal::AAnimal( const std::string type ) : _type(type)
{
	std::cout	<< GREEN
				<< "Constructor AAnimal with parameter type called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Copy constructor of class AAnimal, copy the value of src to the current object
 */
AAnimal::AAnimal( const AAnimal &src_object ) : _type(src_object._type)
{
	std::cout	<< GREEN
				<< "Copy constructor AAnimal called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Destructor of class AAnimal
 */
AAnimal::~AAnimal( void )
{
	std::cout	<< GREEN
				<< "Destructor of class AAnimal called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
AAnimal		&AAnimal::operator=( const AAnimal &src_object )
{
	std::cout	<< GREEN
				<< "Copy assignation operator of class AAnimal called."
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
std::string	AAnimal::getType( void ) const
{
	return (this->_type);
}
