/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:16 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 09:14:19 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default Constructor of class Cat
 */
Cat::Cat( void ) : Animal("Cat")
{
	std::cout	<< CYAN
				<< "Default constructor Cat called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Constructor of class Cat with type parameter
 */
Cat::Cat( const std::string type ) : Animal(type)
{
	std::cout	<< CYAN
				<< "Constructor Cat with parameter type called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Copy constructor of class Cat
 */
Cat::Cat( const Cat &src_object ) : Animal(src_object)
{
	std::cout	<< CYAN
				<< "Copy constructor Cat called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Destructor of class Cat
 */
Cat::~Cat( void )
{
	std::cout	<< CYAN
				<< "Destructor of class Cat called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
Cat		&Cat::operator=( const Cat &src_object )
{
	std::cout	<< CYAN
				<< "Assignation operator overload Cat called."
				<< RESET << std::endl;
	if (this != &src_object)
		this->_type = src_object._type;
	return (*this);
}

/*******************************************************************************
 *									METHOD									   *
 ******************************************************************************/

/*
 *	Method makeSound of class Cat
 */
void	Cat::makeSound( void ) const
{
	std::cout	<< CYAN
				<< "Meow! Meow!"
				<< RESET << std::endl;
	return ;
}
