/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:09:58 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 10:10:43 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	separator( std::string title )
{
	std::cout	<< RESET << std::endl
				<< INVERTED << YELLOW
				<< "===== "
				<< title
				<< " ====="
				<< RESET
				<< std::endl;
	return ;
}

int	main( void )
{
	separator("Test std constructors");

	std::cout << std::endl << "[0] Defaul constructor of class Animal" << std::endl;
	Animal		animal1;
	std::cout << std::endl << "[1] Defaul constructor of class Dog" << std::endl;
	Dog			dog1;
	std::cout << std::endl << "[2] Defaul constructor of class Cat" << std::endl;
	Cat			cat1;
	std::cout << std::endl << "[3] Defaul constructor of class WrongAnimal" << std::endl;
	WrongAnimal	wrongAnimal1;
	std::cout << std::endl << "[4] Defaul constructor of class WrongCat" << std::endl;
	WrongCat	wrongCat1;

	separator("Test cconstructors with type parameter");

	std::cout << std::endl << "[5] Constructor of class Dog with type parameter" << std::endl;
	Dog			dog2("Dog2");
	std::cout << std::endl << "[6] Constructor of class Cat with type parameter" << std::endl;
	Cat			cat2("Cat2");
	std::cout << std::endl << "[7] Constructor of class WrongAnimal with type parameter" << std::endl;
	WrongAnimal	wrongAnimal2("WrongAnimal2");
	std::cout << std::endl << "[8] Constructor of class WrongCat with type parameter" << std::endl;
	WrongCat	wrongCat2("WrongCat2");

	separator("Test copy constructors");

	std::cout << std::endl << "[9] Copy constructor of class Dog" << std::endl;
	Dog			dog3(dog1);
	std::cout << std::endl << "[10] Copy constructor of class Cat" << std::endl;
	Cat			cat3(cat1);
	std::cout << std::endl << "[11] Copy constructor of class WrongAnimal" << std::endl;
	WrongAnimal	wrongAnimal3(wrongAnimal1);
	std::cout << std::endl << "[12] Copy constructor of class WrongCat" << std::endl;
	WrongCat	wrongCat3(wrongCat1);

	separator("Test assignation operator overloads");

	std::cout << std::endl << "[13] Assignation operator overload Dog" << std::endl;
	dog3 = dog2;
	std::cout << std::endl << "[14] Assignation operator overload Cat" << std::endl;
	cat3 = cat2;
	std::cout << std::endl << "[15] Assignation operator overload WrongAnimal" << std::endl;
	wrongAnimal3 = wrongAnimal2;
	std::cout << std::endl << "[16] Assignation operator overload WrongCat" << std::endl;
	wrongCat3 = wrongCat2;

	separator("Test polymorphism");

	std::cout << std::endl << "[17] Array of Animals" << std::endl;
	Animal* animals[2];
	animals[0] = new Dog();
	animals[1] = new Cat();

	std::cout << std::endl << "[18] call at make Sound for this array" << std::endl;
	for (int i = 0; i < 2; i++)
	{
		std::cout	<< "Animal ["
					<< i
					<< "] "
					<< animals[i]->getType()
					<< " says ==> ";
		animals[i]->makeSound();
	}

	std::cout << std::endl << "[19] Array of WrongAnimals" << std::endl;
	WrongAnimal* wanimals[2];
	wanimals[0] = new WrongAnimal();
	wanimals[1] = new WrongCat();

	std::cout << std::endl << "[20] call at make Sound for this array" << std::endl;
	std::cout << BLINK << RED << "The WrongCat must say the sound of the WrongAnimal !!!!" << RESET << std::endl;
	for (int i = 0; i < 2; i++)
	{
		std::cout	<< "Animal ["
					<< i
					<< "] "
					<< wanimals[i]->getType()
					<< " says ==> ";
		wanimals[i]->makeSound();
	}

	separator("Test destructors");

	std::cout << std::endl << "[21] Destructor of array Animals" << std::endl;
	for (int i = 0; i < 2; i++)
		delete animals[i];
	
	std::cout << std::endl << "[21] Destructor of array WongAnimals" << std::endl;
	for (int i = 0; i < 2; i++)
		delete wanimals[i];
	
	std::cout << std::endl << "[22] end of program automatique desctructor called" << std::endl;
	
	return (0);
}