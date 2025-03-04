/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:38:49 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:16:29 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default Constructor of class WrongCat
 */
WrongCat::WrongCat( void ) :	WrongAnimal("WrongCat")
{
	std::cout	<< MAGENTA
				<< "Default constructor WrongCat called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Constructor of class WrongCat with type parameter
 */
WrongCat::WrongCat( const std::string type ) :	WrongAnimal(type)
{
	std::cout	<< MAGENTA
				<< "Constructor WrongCat with parameter type called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Copy constructor of class WrongCat
 */
WrongCat::WrongCat( const WrongCat &src_object ) :	WrongAnimal(src_object)
{
	std::cout	<< MAGENTA
				<< "Copy constructor WrongCat called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Destructor of class WrongCat
 */
WrongCat::~WrongCat( void )
{
	std::cout	<< MAGENTA
				<< "Destructor of class WrongCat called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
WrongCat		&WrongCat::operator=( const WrongCat &src_object )
{
	std::cout	<< MAGENTA
				<< "Assignation operator overload WrongCat called."
				<< RESET << std::endl;
	if (this != &src_object)
		this->WrongAnimal::operator=(src_object);
	return (*this);
}

/*******************************************************************************
 *								METHOD										   *
 ******************************************************************************/

/*
 *	Method to make sound of WrongCat
 */
void		WrongCat::makeSound( void ) const
{
	std::cout	<< MAGENTA
				<< "Meow-Wrong!"
				<< RESET << std::endl;
	return ;
}
