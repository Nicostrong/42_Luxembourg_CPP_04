/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ground.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 08:22:37 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/19 10:39:51 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef GROUND_HPP
# define GROUND_HPP

class	AMateria;

class	Ground
{

	private:

		static AMateria*	_ground[100];
		static int			_groundIndex;

	public:

		Ground( void );
		Ground( const Ground &src_object );
		~Ground( void );

		Ground			&operator=( const Ground &src_object );

		static void		dropMateria( AMateria *materia );
		static AMateria	*pickMateria( void );
		static void		clearGround( void );

};

#endif
