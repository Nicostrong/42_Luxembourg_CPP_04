/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:10:47 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 11:51:26 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "A_Animal.hpp"
# include "Brain.hpp"

class	Dog : public A_Animal
{
	private:

		Brain		*_brain;

	public:

		Dog( void );
		Dog( std::string type );
		Dog( const Dog &src_object );
		virtual ~Dog( void );
		virtual Dog	&operator=( const Dog &src_object );

		/*	Methodes	*/
		void		makeSound( void ) const;
		void		setIdea( const std::string idea, int index );
		std::string	getIdea( int index ) const;

};

#endif