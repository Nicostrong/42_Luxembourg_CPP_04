/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:10 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:13:10 by nfordoxc         ###   Luxembourg.lu     */
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
	std::cout << "Default constructor Dog called." << std::endl;
	_brain = new Brain();
	return ;
}

/*
 *	Constructor of class Dog with type parameter
 */
Dog::Dog( const std::string type ) : Animal(type)
{
	std::cout << "Constructor Dog with parameter type called." << std::endl;
	_brain = new Brain();
	return ;
}

/*
 *	Copy constructor of class Dog
 */
Dog::Dog( const Dog &src_object ) : Animal(src_object)
{
	std::cout << "Copy constructor Dog called." << std::endl;
	_brain = new Brain(*src_object._brain);
	return ;
}

/*
 *	Destructor of class Dog
 */
Dog::~Dog( void )
{
	std::cout << "Destructor of class Dog called." << std::endl;
	delete _brain;
	return ;
}

/*
 *	Assignation operator overload
 */
Dog			&Dog::operator=( const Dog &src_object )
{
	std::cout << "Assignation operator overload Dog called." << std::endl;
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
 *	Methode setIdea
 */
void		Dog::setIdea( std::string idea, int index )
{
	_brain->setIdea(idea, index);
	return ;
}

/*******************************************************************************
 *								GETTER										   *
 ******************************************************************************/

/*
 *	Methode getIdea
 */
std::string	Dog::getIdea( int index ) const
{
	return (_brain->getIdea(index));
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	Methode makeSound of class Dog
 */
void		Dog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
	return ;
}

