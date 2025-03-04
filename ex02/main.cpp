/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:09:58 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 11:27:21 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

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
	separator("Uncomment to prove AAnimal is abstract class");
	//AAnimal a;

	separator("Good way to initialie a Dog and a Cat with the abstract class A_Animal");
	AAnimal* dog = new Dog();
	AAnimal* cat = new Cat();

	std::cout << "Dog says: ";
	dog->makeSound();
	std::cout << "Cat says: ";
	cat->makeSound();

	delete dog;
	delete cat;
	
	return (0);
}
