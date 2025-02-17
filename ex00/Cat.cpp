/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:16 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 09:57:10 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

/*
 *	Default Constructor of class Cat
 */
Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Default constructor Cat called" << std::endl;
	return ;
}

/*
 *	Constructor of class Cat with type parameter
 */
Cat::Cat( const std::string type ) : Animal(type)
{
	std::cout << "Constructor Cat called with parameter type" << std::endl;
	return ;
}

/*
 *	Copy constructor of class Cat, copy the value of src to the current object
 */
Cat::Cat( const Cat &src_object ) : Animal(src_object)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	return ;
}

/*
 *	Destructor of class Cat
 */
Cat::~Cat( void )
{
	std::cout << "Destructor of class Cat called" << std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
Cat	&Cat::operator=( const Cat &src_object )
{
	std::cout << "Assignation operator overload Cat called" << std::endl;
	if (this != &src_object)
		this->_type = src_object._type;
	return (*this);
}

/*
 *	Methode makeSound of class Cat
 */
void	Cat::makeSound( void ) const
{
	std::cout << "Meow! Meow!" << std::endl;
	return ;
}
