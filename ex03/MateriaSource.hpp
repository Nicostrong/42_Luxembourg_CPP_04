/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:19:46 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/17 16:04:20 by nfordoxc         ###   Luxembourg.lu     */
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

		MateriaSource( void );
		MateriaSource( MateriaSource const &src_object );
		virtual ~MateriaSource( void );

		MateriaSource	&operator=( MateriaSource const &src_object );

		void		learnMateria( AMateria *materia );
		AMateria	*createMateria( std::string const &type );
	
};

#endif
