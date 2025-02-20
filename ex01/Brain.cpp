/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:55:17 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:10:52 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default Constructor of class Brain
 */
Brain::Brain( void )
{
	std::cout << "Default constructor Brain called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "No idea";
	return ;
}

/*
 *	Constructor of class Brain with idea parameter
 */
Brain::Brain( std::string idea )
{
	std::cout << "Constructor Brain with parameter idea called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
	return ;
}

/*
 *	Copy constructor of class Brain
 */
Brain::Brain( const Brain &src_object )
{
	std::cout << "Copy constructor Brain called." << std::endl;
	*this = src_object;
	return ;
}

/*
 *	Destructor of class Brain
 */
Brain::~Brain( void )
{
	std::cout << "Destructor of class Brain called." << std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
Brain		&Brain::operator=( const Brain &src_object )
{
	std::cout << "Assignation operator overload Brain called." << std::endl;
	if (this != &src_object)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src_object._ideas[i];
	}
	return (*this);
}

/*******************************************************************************
 *								SETTER										   *
 ******************************************************************************/

/*
 *	Set the idea at the index parameter
 */
void		Brain::setIdea( const std::string idea, int index )
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
	else
	{
		std::cout	<< "Index out of range : "
					<< index
					<< std::endl;
	}
	return ;

}

/*******************************************************************************
 *								GETTER										   *
 ******************************************************************************/

/*
 *	Get the idea at the index parameter
 */
std::string	Brain::getIdea( int index ) const
{
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	else
	{
		std::cout	<< "Index out of range : "
					<< index
					<< std::endl;
		return ("");
	}
}