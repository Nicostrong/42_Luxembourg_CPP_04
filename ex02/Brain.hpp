/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:55:25 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:23:14 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class	Brain
{
	private:

		std::string	_ideas[100];

	public:

		/*	Canonical Form	*/
		Brain( void );
		Brain( std::string idea );
		Brain( const Brain &src_object );
		~Brain( void );

		Brain		&operator=( const Brain &src_object );

		/*	Setter	*/
		void		setIdea( const std::string idea, int index );

		/*	Getter	*/
		std::string	getIdea( int index ) const;

};

#endif
