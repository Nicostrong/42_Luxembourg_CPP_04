/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:03 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 10:40:04 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
 *	Default constructor of class Animal
 */
Animal::Animal( void ) : _type("Animal")
{
	std::cout << "Default constructor Animal called" << std::endl;
	return ;
}

/*
 *	Constructor of class Animal with type parameter
 */
Animal::Animal( const std::string type ) : _type(type)
{
	std::cout << "Constructor Animal called with parameter type" << std::endl;
	return ;
}

/*
 *	Copy constructor of class Animal, copy the value of src to the current object
 */
Animal::Animal( const Animal &src_object ) : _type(src_object._type)
{
	std::cout << "Copy constructor Animal called" << std::endl;
	return ;
}

/*
 *	Destructor of class Animal
 */
Animal::~Animal( void )
{
	std::cout << "Destructor of class Animal called" << std::endl;
	return ;
}

/*******************************************************************************
 *							OVERLOAD OPERATOR								   *
 ******************************************************************************/

/*
 *	Assignation operator overload
 */
Animal	&Animal::operator=( const Animal &src_object )
{
	std::cout << "Copy assignation operator of class Animal called" << std::endl;
	if (this != &src_object)
		this->_type = src_object._type;
	return (*this);
}

/*
 *	Getter for the type attribute
 */
std::string	Animal::getType( void ) const
{
	return (this->_type);
}

