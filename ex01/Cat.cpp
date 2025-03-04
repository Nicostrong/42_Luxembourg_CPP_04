/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:16 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 11:16:59 by nfordoxc         ###   Luxembourg.lu     */
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
	_brain = new Brain();
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
	_brain = new Brain();
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
	_brain = new Brain(*src_object._brain);
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
	delete _brain;
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
	{
		Animal::operator=(src_object);
		delete _brain;
		_brain = new Brain(*src_object._brain);
	}
	return (*this);
}

/*******************************************************************************
 *								SETTER										   *
 ******************************************************************************/

/*
 *	Method setIdea of class Cat
 */
void		Cat::setIdea( std::string idea, int index )
{
	_brain->setIdea(idea, index);
	return ;
}

/*******************************************************************************
 *								GETTER										   *
 ******************************************************************************/

/*
 *	Method getIdea of class Cat
 */
std::string	Cat::getIdea( int index ) const
{
	return (_brain->getIdea(index));
}

/*******************************************************************************
 *								METHOD 										   *
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
