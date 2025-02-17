/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:07:24 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 17:52:40 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	separator( std::string title )
{
	std::cout	<< std::endl
				<< "===== "
				<< title
				<< " ====="
				<< std::endl;
	return ;
}

int main( void )
{
	separator("TEST: Creation de MateriaSource");
	MateriaSource src;
	
	separator("TEST: Apprentissage de Materias");
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());
	src.learnMateria(new Ice()); // Ne doit pas être appris (limite de 4)

	separator("TEST: Creation de personnages");
	Character player("Player");
	Character bob("Bob");

	separator("TEST: Creation et equipement de Materias");
	AMateria *m1 = src.createMateria("ice");
	AMateria *m2 = src.createMateria("cure");
	AMateria *m3 = src.createMateria("ice");
	AMateria *m4 = src.createMateria("cure");
	AMateria *m5 = src.createMateria("fire"); // Ne doit pas exister

	player.equip(m1);
	player.equip(m2);
	player.equip(m3);
	player.equip(m4);
	player.equip(m5);
	player.equip(new Ice()); // Ne doit pas être ajouté (inventaire plein)

	separator("TEST: Utilisation des Materias");
	player.use(0, bob); // Ice
	player.use(1, bob); // Cure
	player.use(2, bob); // Ice
	player.use(3, bob); // Cure
	player.use(4, bob); // Ne doit pas fonctionner

	separator("TEST: Déséquipement de Materias");
	player.unequip(1);  // Déséquipe Cure
	player.use(1, bob); // Ne doit pas fonctionner après déséquipement

	separator("TEST: Verification du clonage (copie)");
	Character playerCopy = player; // Copie de Player
	playerCopy.use(0, bob); // Ice doit fonctionner
	playerCopy.use(1, bob); // Ne doit pas fonctionner (déséquipé avant la copie)

	separator("TEST: Verification de l'assignation (operator=)");
	Character newPlayer("NewPlayer");
	newPlayer = player; // Assignation
	newPlayer.use(0, bob); // Ice doit fonctionner

	separator("TEST: Destruction des objets");
	
	return (0);
}