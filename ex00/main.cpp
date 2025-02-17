/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:09:58 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 10:42:48 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WongCat.hpp"

void	separator( std::string title )
{
	std::cout	<< std::endl
				<< "===== "
				<< title
				<< " ====="
				<< std::endl;
	return ;
}

int	main( void )
{
	separator("Test std constructors");
	
	std::cout << std::endl << "[1] Defaul constructor of class Dog" << std::endl;
	Dog			dog1;
	std::cout << std::endl << "[2] Defaul constructor of class Cat" << std::endl;
	Cat			cat1;
	std::cout << std::endl << "[3] Defaul constructor of class WongAnimal" << std::endl;
	WongAnimal	wongAnimal1;
	std::cout << std::endl << "[4] Defaul constructor of class WongCat" << std::endl;
	WongCat		wongCat1;

	separator("Test cconstructors with type parameter");

	std::cout << std::endl << "[5] Constructor of class Dog with type parameter" << std::endl;
	Dog			dog2("Dog2");
	std::cout << std::endl << "[6] Constructor of class Cat with type parameter" << std::endl;
	Cat			cat2("Cat2");
	std::cout << std::endl << "[7] Constructor of class WongAnimal with type parameter" << std::endl;
	WongAnimal	wongAnimal2("WongAnimal2");
	std::cout << std::endl << "[8] Constructor of class WongCat with type parameter" << std::endl;
	WongCat		wongCat2("WongCat2");

	separator("Test copy constructors");

	std::cout << std::endl << "[9] Copy constructor of class Dog" << std::endl;
	Dog			dog3(dog1);
	std::cout << std::endl << "[10] Copy constructor of class Cat" << std::endl;
	Cat			cat3(cat1);
	std::cout << std::endl << "[11] Copy constructor of class WongAnimal" << std::endl;
	WongAnimal	wongAnimal3(wongAnimal1);
	std::cout << std::endl << "[12] Copy constructor of class WongCat" << std::endl;
	WongCat		wongCat3(wongCat1);

	separator("Test assignation operator overloads");

	std::cout << std::endl << "[13] Assignation operator overload Dog" << std::endl;
	dog3 = dog2;
	std::cout << std::endl << "[14] Assignation operator overload Cat" << std::endl;
	cat3 = cat2;
	std::cout << std::endl << "[15] Assignation operator overload WongAnimal" << std::endl;
	wongAnimal3 = wongAnimal2;
	std::cout << std::endl << "[16] Assignation operator overload WongCat" << std::endl;
	wongCat3 = wongCat2;

	separator("Test polymorphism");

	std::cout << std::endl << "[17] Array of Animals" << std::endl;
	Animal* animals[4];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new WongAnimal();
	animals[3] = new WongCat();

	std::cout << std::endl << "[18] call at make Sound for this array" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout	<< "Animal ["
					<< i
					<< "] "
					<< animals[i]->getType()
					<< " says ==> ";
		animals[i]->makeSound();
	}

	separator("Test destructors");

	std::cout << std::endl << "[19] Destructor of array Animals" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];
	
	std::cout << std::endl << "[20] end of program automatique desctructor called" << std::endl;
	
	return (0);
}