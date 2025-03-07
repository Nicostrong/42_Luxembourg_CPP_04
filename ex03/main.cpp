/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:07:24 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/21 07:46:57 by nfordoxc         ###   Luxembourg.lu     */
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

int		main( void )
{
	Ground	ground;
	separator("TEST: Creation de MateriaSource");
	MateriaSource	src;
	
	separator("TEST: Apprentissage de Materias");
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());
	src.learnMateria(new Ice()); // Ne doit pas être appris (limite de 4)

	separator("TEST: Creation de personnages");
	Character	player("Player", &ground);
	Character	bob("Bob", &ground);

	separator("TEST: Creation et equipement de Materias");
	AMateria	*m1 = src.createMateria("ice");
	AMateria	*m2 = src.createMateria("cure");
	AMateria	*m3 = src.createMateria("ice");
	AMateria	*m4 = src.createMateria("cure");
	AMateria	*m5 = src.createMateria("fire"); // Ne doit pas exister

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

	separator("TEST: Deposition de Materia au sol");
	player.dropMateria(1); // Cure au sol
	player.dropMateria(2); // Ice au sol

	separator("TEST: Bob recupere les Materia du sol");
	bob.pickupMateria(); // Bob récupère Cure
	bob.pickupMateria(); // Bob récupère Ice

	separator("TEST: Verification de l'utilisation apres recuperation");
	bob.use(0, player); // Cure
	bob.use(1, player); // Ice

	separator("TEST: Verification du clonage (copie)");
	Character	playerCopy = player; // Copie de Player
	playerCopy.use(0, bob); // Ice doit fonctionner
	playerCopy.use(1, bob); // Ne doit pas fonctionner (déséquipé avant la copie)

	separator("TEST: Verification de l'assignation (operator=)");
	Character	newPlayer("NewPlayer", &ground);
	newPlayer = player; // Assignation
	newPlayer.use(0, bob); // Ice doit fonctionner

	separator("TEST: Nettoyage du sol");
	Ground::clearGround(); // Supprime les Materia au sol

	separator("TEST: Destruction des objets");

	return (0);
}