/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WongAnimal.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:39:02 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 10:01:34 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "WongAnimal.hpp"

/*
 *	Default Construnctor of class WongAnimal
 */
WongAnimal::WongAnimal( void ) : Animal("WongAnimal")
{
	std::cout << "Default constructor WongAnimal called" << std::endl;
	return ;
}

/*
 *	Constructor of class WongAnimal with type parameter
 */
WongAnimal::WongAnimal( const std::string type ) : Animal(type)
{
	std::cout << "Constructor WongAnimal called with parameter type" << std::endl;
	return ;
}

/*
 *	Copy constructor of class WongAnimal, copy the value of src to the current object
 */
WongAnimal::WongAnimal( const WongAnimal &src_object ) : Animal(src_object)
{
	std::cout << "Copy constructor WongAnimal called" << std::endl;
	return ;
}

/*
 *	Destructor of class WongAnimal
 */
WongAnimal::~WongAnimal( void )
{
	std::cout << "Destructor of class WongAnimal called" << std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
WongAnimal	&WongAnimal::operator=( const WongAnimal &src_object )
{
	std::cout << "Assignation operator overload WongAnimal called" << std::endl;
	if (this != &src_object)
		this->_type = src_object._type;
	return (*this);
}

/*
 *	Method to make sound of WongAnimal
 */
void		WongAnimal::makeSound( void ) const
{
	std::cout << "Wong Wong!" << std::endl;
	return ;
}

