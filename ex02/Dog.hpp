/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:10:47 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:28:15 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog : public AAnimal
{
	private:

		Brain		*_brain;

	public:

		/*	Canonical Form	*/
		Dog( void );
		Dog( std::string type );
		Dog( const Dog &src_object );
		virtual ~Dog( void );

		virtual Dog	&operator=( const Dog &src_object );

		/*	Setter	*/
		void		setIdea( const std::string idea, int index );

		/*	Getter	*/
		std::string	getIdea( int index ) const;
		
		/*	Methodes	*/
		void		makeSound( void ) const;

};

#endif