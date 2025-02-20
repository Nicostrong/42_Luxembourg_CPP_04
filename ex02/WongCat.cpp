/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WongCat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:38:49 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:30:09 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "WongCat.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default Constructor of class WongCat
 */
WongCat::WongCat( void ) :	AAnimal("WongCat"), \
							Cat("WongCat"), \
							WongAnimal("WongCat")
{
	std::cout << "Default constructor WongCat called." << std::endl;
	return ;
}

/*
 *	Constructor of class WongCat with type parameter
 */
WongCat::WongCat( const std::string type ) :	AAnimal(type), \
												Cat(type), \
												WongAnimal(type)
{
	std::cout << "Constructor WongCat with parameter type called." << std::endl;
	return ;
}

/*
 *	Copy constructor of class WongCat
 */
WongCat::WongCat( const WongCat &src_object ) :	AAnimal(src_object), \
												Cat(src_object), \
												WongAnimal(src_object)
{
	std::cout << "Copy constructor WongCat called." << std::endl;
	return ;
}

/*
 *	Destructor of class WongCat
 */
WongCat::~WongCat( void )
{
	std::cout << "Destructor of class WongCat called." << std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
WongCat	&WongCat::operator=( const WongCat &src_object )
{
	std::cout << "Assignation operator overload WongCat called." << std::endl;
	if (this != &src_object)
	{
		this->Cat::operator=(src_object);
		this->WongAnimal::operator=(src_object);
	}
	return (*this);
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	Method to make sound of WongCat
 */
void	WongCat::makeSound( void ) const
{
	std::cout << "Meow-Wong!" << std::endl;
	return ;
}
