/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:03 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 11:53:04 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

/*
 *	Default constructor of class A_Animal
 */
A_Animal::A_Animal( void ) : _type("A_Animal")
{
	std::cout << "Default constructor A_Animal called" << std::endl;
	return ;
}

/*
 *	Constructor of class A_Animal with type parameter
 */
A_Animal::A_Animal( const std::string type ) : _type(type)
{
	std::cout << "Constructor A_Animal called with parameter type" << std::endl;
	return ;
}

/*
 *	Copy constructor of class A_Animal, copy the value of src to the current object
 */
A_Animal::A_Animal( const A_Animal &src_object ) : _type(src_object._type)
{
	std::cout << "Copy constructor A_Animal called" << std::endl;
	return ;
}

/*
 *	Destructor of class A_Animal
 */
A_Animal::~A_Animal( void )
{
	std::cout << "Destructor of class A_Animal called" << std::endl;
	return ;
}

/*******************************************************************************
 *							OVERLOAD OPERATOR								   *
 ******************************************************************************/

/*
 *	Assignation operator overload
 */
A_Animal	&A_Animal::operator=( const A_Animal &src_object )
{
	std::cout << "Copy assignation operator of class A_Animal called" << std::endl;
	if (this != &src_object)
		this->_type = src_object._type;
	return (*this);
}

/*
 *	Getter for the type attribute
 */
std::string	A_Animal::getType( void ) const
{
	return (this->_type);
}

