/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ground.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:09:20 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:37:24 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Ground.hpp"
#include "AMateria.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Definition of static member
 */
AMateria* Ground::_ground[100] = { NULL };
int Ground::_groundIndex = 0;

/*
 *	Default constructor
 */
Ground::Ground( void )
{
	std::cout << "Ground default constructor called." << std::endl;
	return ;
}

/*
 *	Copy constructor
 */
Ground::Ground( const Ground &src_object )
{
	*this = src_object;
	std::cout << "Ground copy constructor called." << std::endl;
	return ;
}

/*
 *	Destructor
 */
Ground::~Ground( void )
{
	std::cout << "Ground destructor called." << std::endl;
	clearGround();
	return ;
}

/*
 *	Operator affectation overload
 */
Ground		&Ground::operator=( const Ground &src_object )
{
	if (this != &src_object)
	{
		for (int i = 0; i < 100; i++)
			this->_ground[i] = src_object._ground[i];
		this->_groundIndex = src_object._groundIndex;
	}
	std::cout << "Ground assigment operator called." << std::endl;
	return (*this);
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	Add a materia in inventary of ground
 */
void		Ground::dropMateria( AMateria *materia )
{
	if (_groundIndex < 100)
		_ground[_groundIndex++] = materia;
	std::cout 	<< "Materia "
				<< materia->getType()
				<<	" Add to inventary Ground"
				<< std::endl;
	return ;
}

/*
 *	Remove materia of ground inventary
 */
AMateria	*Ground::pickMateria( void )
{
	if (_groundIndex > 0)
	{
		AMateria	*m = _ground[--_groundIndex];
		_ground[_groundIndex] = NULL;
		std::cout 	<< "Materia "
					<< m->getType()
					<<	" Remove to inventary Ground"
					<< std::endl;
		return (m);
	}
	return (NULL);
}
/*
 *	Clear ground inventary
 */
 void		Ground::clearGround( void )
{
	for (int i = 0; i < _groundIndex; ++i)
	{
		delete _ground[i];
		_ground[i] = NULL;
	}
	_groundIndex = 0;
	return ;
}
