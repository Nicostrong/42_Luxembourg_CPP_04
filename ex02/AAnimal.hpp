/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:10:17 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/19 08:03:14 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

# include <iostream>

class	AAnimal
{
	protected:

		std::string	_type;

	public:

		AAnimal( void );
		AAnimal( std::string type );
		AAnimal( const AAnimal &src_object );
		virtual ~AAnimal( void );

		virtual AAnimal		&operator=( const AAnimal &src_object );

		/*	Getter	*/
		virtual std::string	getType( void ) const;

		/*	Methodes	*/
		virtual void		makeSound( void ) const = 0;
};

#endif