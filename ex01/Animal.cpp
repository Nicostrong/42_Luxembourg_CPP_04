/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:03 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 11:04:19 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default constructor of class Animal
 */
Animal::Animal( void ) : _type("Animal")
{
	std::cout	<< GREEN
				<< "Default constructor Animal called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Constructor of class Animal with type parameter
 */
Animal::Animal( const std::string type ) : _type(type)
{
	std::cout	<< GREEN
				<< "Constructor Animal with parameter type called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Copy constructor of class Animal
 */
Animal::Animal( const Animal &src_object ) : _type(src_object._type)
{
	std::cout	<< GREEN
				<< "Copy constructor Animal called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Destructor of class Animal
 */
Animal::~Animal( void )
{
	std::cout	<< GREEN
				<< "Destructor of class Animal called."
				<< RESET << std::endl;
	return ;
}
/*
 *	Assignation operator overload
 */
Animal		&Animal::operator=( const Animal &src_object )
{
	std::cout	<< GREEN
				<< "Copy assignation operator of class Animal called."
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
std::string	Animal::getType( void ) const
{
	return (this->_type);
}

/*******************************************************************************
 *									METHOD									   *
 ******************************************************************************/

/*
 *	Method makeSound of class Cat
 */
void	Animal::makeSound( void ) const
{
	std::cout	<< GREEN
				<< "Animal! Animal!"
				<< RESET << std::endl;
	return ;
}
