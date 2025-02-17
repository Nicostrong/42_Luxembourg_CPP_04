/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:19:54 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 17:08:40 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
 *	Default constructor
 */
MateriaSource::MateriaSource( void )
{
	std::cout << "Default constructor MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	return ;
}

/*
 *	Constructor by copy
 */
MateriaSource::MateriaSource( MateriaSource const &src_object )
{
	std::cout << "Copy constructor MateriaSource called" << std::endl;
	*this = src_object;
	return ;
}

/*
 *	Destructor
 */
MateriaSource::~MateriaSource( void )
{
	std::cout << "Destructor of class MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_materias[i])
			delete this->_materias[i];
	return ;
}

/*
 *	Assigment operator
 */
MateriaSource	&MateriaSource::operator=( MateriaSource const &src_object )
{
	std::cout << "Assignation operator overload MateriaSource called" << std::endl;
	if (this != &src_object)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materias[i])
				delete this->_materias[i];
			this->_materias[i] = src_object._materias[i] ? src_object._materias[i]->clone() : NULL;
		}
	}
	return (*this);
}

/*
 *	Methode learnMateria 
 */
void	MateriaSource::learnMateria( AMateria *materia )
{
	if (!materia)
	{
		std::cout << "Can't learn a NULL materia !" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = materia;
			std::cout	<< "Materia "
						<< materia->getType()
						<< " learned at slot "
						<< i
						<< std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource is full ! Can't learn more Materia." << std::endl;
	delete materia;
	return ;
}

/*
 *	Create a new Materia from stored one
 */
AMateria	*MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
		{
			std::cout	<< "Materia "
						<< type
						<< " created !"
						<< std::endl;
			return (this->_materias[i]->clone());
		}
	}
	std::cout << "Materia " << type << " not found !" << std::endl;
	return (NULL);
}