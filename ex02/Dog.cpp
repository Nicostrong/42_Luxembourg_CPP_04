/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:11:10 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 11:54:57 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

/*
 *	Default Constructor of class Dog
 */
Dog::Dog( void ) : A_Animal("Dog")
{
	std::cout << "Default constructor Dog called" << std::endl;
	_brain = new Brain();
	return ;
}

/*
 *	Constructor of class Dog with type parameter
 */
Dog::Dog( const std::string type ) : A_Animal(type)
{
	std::cout << "Constructor Dog called with parameter type" << std::endl;
	_brain = new Brain();
	return ;
}

/*
 *	Copy constructor of class Dog, copy the value of src to the current object
 */
Dog::Dog( const Dog &src_object ) : A_Animal(src_object)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	_brain = new Brain(*src_object._brain);
	return ;
}

/*
 *	Destructor of class Dog
 */
Dog::~Dog( void )
{
	std::cout << "Destructor of class Dog called" << std::endl;
	delete _brain;
	return ;
}

/*
 *	Assignation operator overload
 */
Dog	&Dog::operator=( const Dog &src_object )
{
	std::cout << "Assignation operator overload Dog called" << std::endl;
	if (this != &src_object)
	{
		A_Animal::operator=(src_object);
		delete _brain;
		_brain = new Brain(*src_object._brain);
	}
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

/*
 *	Methode setIdea
 */
void	Dog::setIdea( std::string idea, int index )
{
	_brain->setIdea(idea, index);
	return ;
}

/*
 *	Methode getIdea
 */
std::string	Dog::getIdea( int index ) const
{
	return (_brain->getIdea(index));
}

