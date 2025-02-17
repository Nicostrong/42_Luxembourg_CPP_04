/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:09:58 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 11:41:09 by nfordoxc         ###   Luxembourg.lu     */
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
	separator("Test creating Dog et Cat");
	Dog dog1;
	Cat cat1;

	separator("Test setIdea() et getIdea()");
	dog1.setIdea("I want to eat", 0);
	dog1.setIdea("I want to play", 1);
	std::cout << "Dog1 Idea[0]: " << dog1.getIdea(0) << std::endl;
	std::cout << "Dog1 Idea[1]: " << dog1.getIdea(1) << std::endl;

	cat1.setIdea("I want to sleep", 0);
	std::cout << "Cat1 Idea[0]: " << cat1.getIdea(0) << std::endl;

	separator("Test constructor by copy");
	Dog dog2 = dog1;
	std::cout << "Dog2 Idea[0]: " << dog2.getIdea(0) << std::endl;
	std::cout << "Dog2 Idea[1]: " << dog2.getIdea(1) << std::endl;

	separator("Test modification after copy");
	dog1.setIdea("I am original Dog", 0);
	std::cout << "Dog1 Idea[0]: " << dog1.getIdea(0) << std::endl;
	std::cout << "Dog2 Idea[0] (should still be 'I want to eat'): " << dog2.getIdea(0) << std::endl;

	separator("Test operator od assignment");
	Dog dog3;
	dog3 = dog1;
	std::cout << "Dog3 Idea[0]: " << dog3.getIdea(0) << std::endl;

	separator("Test polymorphisme");
	Animal* animals[2];
	animals[0] = new Dog();
	animals[1] = new Cat();

	std::cout << "Animal[0] makeSound(): ";
	animals[0]->makeSound();
	std::cout << "Animal[1] makeSound(): ";
	animals[1]->makeSound();

	separator("Test destructor");
	delete animals[0];
	delete animals[1];


	separator("Test main 42");
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	separator("Test Destructor main 42");
	delete dog;
	delete cat;

	separator("Test Auto destructor");
	
	return (0);
}
