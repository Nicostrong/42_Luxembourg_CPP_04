/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:10:55 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/19 08:05:14 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public virtual AAnimal
{
	private:

		Brain		*_brain;

	public:

		Cat( void );
		Cat( std::string type );
		Cat( const Cat &src_object );
		virtual ~Cat( void );
		virtual Cat	&operator=( const Cat &src_object );

		/*	Methodes	*/
		void		makeSound( void ) const;
		void		setIdea( const std::string idea, int index );
		std::string	getIdea( int index ) const;

};

#endif