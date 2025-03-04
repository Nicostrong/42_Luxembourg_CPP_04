/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:10 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 09:16:09 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default Constructor of class Dog
 */
Dog::Dog( void ) : Animal("Dog")
{
	std::cout	<< BLUE
				<< "Default constructor Dog called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Constructor of class Dog with type parameter
 */
Dog::Dog( const std::string type ) : Animal(type)
{
	std::cout	<< BLUE
				<< "Constructor Dog with parameter type called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Copy constructor of class Dog
 */
Dog::Dog( const Dog &src_object ) : Animal(src_object)
{
	std::cout	<< BLUE
				<< "Copy constructor Dog called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Destructor of class Dog
 */
Dog::~Dog( void )
{
	std::cout	<< BLUE
				<< "Destructor of class Dog called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
Dog		&Dog::operator=( const Dog &src_object )
{
	std::cout	<< BLUE
				<< "Assignation operator overload Dog called."
				<< RESET << std::endl;
	if (this != &src_object)
		this->_type = src_object._type;
	return (*this);
}

/*******************************************************************************
 *									METHOD 									   *
 ******************************************************************************/

/*
 *	Method makeSound of class Dog
 */
void	Dog::makeSound( void ) const
{
	std::cout	<< BLUE
				<< "Woof! Woof!"
				<< RESET << std::endl;
	return ;
}