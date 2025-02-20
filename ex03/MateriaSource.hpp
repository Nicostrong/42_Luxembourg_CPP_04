/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:19:46 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 09:43:29 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public	IMateriaSource
{

	private:

		AMateria	*_materias[4];

	public:

		/*	Canonical Form	*/
		MateriaSource( void );
		MateriaSource( MateriaSource const &src_object );
		virtual ~MateriaSource( void );

		MateriaSource	&operator=( MateriaSource const &src_object );

		/*	Method	*/
		void		learnMateria( AMateria *materia );
		AMateria	*createMateria( std::string const &type );
	
};

#endif
