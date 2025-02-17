/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:09:36 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 17:52:18 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

/*
 *	Constructor with parameter name
 */
Character::Character( std::string name ) : _name(name)
{
	std::cout	<< "Character "
				<< name
				<< " created."
				<< std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

/*
 *	Copy constructor
 */
Character::Character( Character const &src_object )
{
	std::cout << "Character copy constructor called." << std::endl;
	this->_name = src_object._name;
	for (int i = 0; i < 4; i++)
	{
		if (src_object._inventory[i])
			this->_inventory[i] = src_object._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return ;
}

/*
 *	Destructor
 */
Character::~Character( void )
{
	std::cout	<< "Character "
				<< this->getName()
				<< " destroyed."
				<< std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	return ;
}

/*
 *	Operator affectation overide
 */
Character	&Character::operator=( Character const &src_object )
{
	std::cout << "Character assignation operator called." << std::endl;
	if (this != &src_object)
	{
		this->_name = src_object._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = src_object._inventory[i] ? src_object._inventory[i]->clone() : NULL;
 		}
	}
	return (*this);
}

/*
 *	Getter
 */
std::string const	&Character::getName( void ) const
{
	return (this->_name);
}

/*
 *	Add a new Materia if space on inventary array
 */
void	Character::equip( AMateria *m )
{
	if (!m)
	{
		std::cout << "Can't equip NULL materia." << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout	<< this->_name
						<< " equipped with "
						<< m->getType()
						<< " in slot "
						<< i
						<< "." << std::endl;
			return ;
		}
	}
	std::cout << this->_name << "'s inventory is full." << std::endl;
	return ;
}

/*
 *	Remove a Materia of inventary
 */
void	Character::unequip( int idx )
{
	if( idx < 0 || idx >= 4 || !this->_inventory[idx])
	{
		std::cout	<< "Can't to unequip materia from slot "
					<< idx
					<< "." << std::endl;
		return ;
	}
	std::cout	<< this->_name
				<< " unequipped "
				<< this->_inventory[idx]->getType()
				<< " from slot "
				<< idx
				<< "." << std::endl;
	this->_inventory[idx] = NULL;
	return ;
}

/*
 *	Use materia of inventory
 */
void	Character::use( int idx, ICharacter &target )
{
	if( idx < 0 || idx >= 4 || !this->_inventory[idx])
	{
		std::cout	<< "Can't to use materia from slot "
					<< idx
					<< "." << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
	return ;
}
