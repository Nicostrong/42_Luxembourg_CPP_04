/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:16 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 11:26:58 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

/*
 *	Default Constructor of class Cat
 */
Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Default constructor Cat called" << std::endl;
	_brain = new Brain();
	return ;
}

/*
 *	Constructor of class Cat with type parameter
 */
Cat::Cat( const std::string type ) : Animal(type)
{
	std::cout << "Constructor Cat called with parameter type" << std::endl;
	_brain = new Brain();
	return ;
}

/*
 *	Copy constructor of class Cat, copy the value of src to the current object
 */
Cat::Cat( const Cat &src_object ) : Animal(src_object)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	_brain = new Brain(*src_object._brain);
	return ;
}

/*
 *	Destructor of class Cat
 */
Cat::~Cat( void )
{
	std::cout << "Destructor of class Cat called" << std::endl;
	delete _brain;
	return ;
}

/*
 *	Assignation operator overload
 */
Cat	&Cat::operator=( const Cat &src_object )
{
	std::cout << "Assignation operator overload Cat called" << std::endl;
	if (this != &src_object)
	{
		Animal::operator=(src_object);
		delete _brain;
		_brain = new Brain(*src_object._brain);
	}
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

/*
 *	Methode setIdea
 */
void	Cat::setIdea( std::string idea, int index )
{
	_brain->setIdea(idea, index);
	return ;
}

/*
 *	Methode getIdea
 */
std::string	Cat::getIdea( int index ) const
{
	return (_brain->getIdea(index));
}
