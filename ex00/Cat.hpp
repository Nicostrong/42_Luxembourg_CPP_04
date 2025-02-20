/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:10:55 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:04:02 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public virtual Animal
{
	public:

		/*	Canonical Form	*/
		Cat( void );
		Cat( std::string type );
		Cat( const Cat &src_object );
		virtual ~Cat( void );
		
		virtual Cat	&operator=( const Cat &src_object );

		/*	Method	*/
		void		makeSound( void ) const;

};

#endif