/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:09:36 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/21 07:37:54 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "Ground.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Constructor with all parameter
 */
Character::Character( std::string name, Ground *ground ) : _name(name), _ground(ground)
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
Character::Character( Character const &src_object ) : _ground(src_object._ground)
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
Character			&Character::operator=( Character const &src_object )
{
	std::cout << "Character assignation operator called." << std::endl;
	if (this != &src_object)
	{
		this->_name = src_object._name;
		this->_ground = src_object._ground;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = src_object._inventory[i] ? src_object._inventory[i]->clone() : NULL;
 		}
	}
	return (*this);
}

/*******************************************************************************
 *								GETTER										   *
 ******************************************************************************/

/*
 *	Getter
 */
std::string const	&Character::getName( void ) const
{
	return (this->_name);
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	Add a new Materia if space on inventary array
 */
void				Character::equip( AMateria *m )
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
	std::cout	<< this->_name
				<< "'s inventory is full. Dropping materia to ground."
				<< std::endl;
	if (_ground)
		_ground->dropMateria(m);
	else
	{
		std::cout << "No ground to drop materia." << std::endl;
		delete m;
	}
	return ;
}

/*
 *	Remove a Materia of inventary
 */
void				Character::unequip( int idx )
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
	Ground::dropMateria( _inventory[idx] );
	this->_inventory[idx] = NULL;
	return ;
}

/*
 *	Use materia of inventory
 */
void				Character::use( int idx, ICharacter &target )
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

void				Character::dropMateria( int idx )
{
    if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		std::cout	<< this->_name
					<< " dropped "
					<< _inventory[idx]->getType()
					<< " to the ground."
					<< std::endl;
        Ground::dropMateria(_inventory[idx]);
        _inventory[idx] = NULL;
    }
	return ;
}

void				Character::pickupMateria( void )
{
    AMateria* m = Ground::pickMateria();
    if (m)
	{
		std::cout	<< this->_name
					<< " picked up "
					<< m->getType()
					<< " from the ground."
					<< std::endl;
        equip(m);
	}
	return ;
}
