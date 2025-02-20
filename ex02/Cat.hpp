/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:10:55 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:25:52 by nfordoxc         ###   Luxembourg.lu     */
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

		/*	Canonical Form	*/
		Cat( void );
		Cat( std::string type );
		Cat( const Cat &src_object );
		virtual ~Cat( void );

		virtual Cat	&operator=( const Cat &src_object );

		/*	Setter	*/
		void		setIdea( const std::string idea, int index );

		/*	Getter	*/
		std::string	getIdea( int index ) const;
		
		/*	Methodes	*/
		void		makeSound( void ) const;

};

#endif