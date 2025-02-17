/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:10 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 09:57:10 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

/*
 *	Default Constructor of class Dog
 */
Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Default constructor Dog called" << std::endl;
	return ;
}

/*
 *	Constructor of class Dog with type parameter
 */
Dog::Dog( const std::string type ) : Animal(type)
{
	std::cout << "Constructor Dog called with parameter type" << std::endl;
	return ;
}

/*
 *	Copy constructor of class Dog, copy the value of src to the current object
 */
Dog::Dog( const Dog &src_object ) : Animal(src_object)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	return ;
}

/*
 *	Destructor of class Dog
 */
Dog::~Dog( void )
{
	std::cout << "Destructor of class Dog called" << std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
Dog	&Dog::operator=( const Dog &src_object )
{
	std::cout << "Assignation operator overload Dog called" << std::endl;
	if (this != &src_object)
		this->_type = src_object._type;
	return (*this);
}

/*
 *	Methode makeSound of class Dog
 */
void	Dog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
	return ;
}