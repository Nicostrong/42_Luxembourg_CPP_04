/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:55:17 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 11:11:10 by nfordoxc         ###   Luxembourg.lu     */
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
	std::cout	<< YELLOW
				<< "Default constructor Brain called."
				<< RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "No idea";
	return ;
}

/*
 *	Constructor of class Brain with idea parameter
 */
Brain::Brain( std::string idea )
{
	std::cout	<< YELLOW
				<< "Constructor Brain with parameter idea called."
				<< RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
	return ;
}

/*
 *	Copy constructor of class Brain
 */
Brain::Brain( const Brain &src_object )
{
	std::cout	<< YELLOW
				<< "Copy constructor Brain called."
				<< RESET << std::endl;
	*this = src_object;
	return ;
}

/*
 *	Destructor of class Brain
 */
Brain::~Brain( void )
{
	std::cout	<< YELLOW
				<< "Destructor of class Brain called."
				<< RESET << std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
Brain		&Brain::operator=( const Brain &src_object )
{
	std::cout	<< YELLOW
				<< "Assignation operator overload Brain called."
				<< RESET << std::endl;
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
		std::cout	<< YELLOW
					<< "Index out of range : " << index
					<< RESET << std::endl;
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
		std::cout	<< YELLOW
					<< "Index out of range : " << index
					<< RESET << std::endl;
		return ("");
	}
}