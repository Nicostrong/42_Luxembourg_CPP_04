/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:10:17 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 11:23:55 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

# include <iostream>

/*	COLOR	*/
# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"


/*	BACKGROUND	*/
# define BG_BLACK	"\033[40m"
# define BG_RED		"\033[41m"
# define BG_GREEN	"\033[42m"
# define BG_YELLOW	"\033[43m"
# define BG_BLUE	"\033[44m"
# define BG_MAGENTA	"\033[45m"
# define BG_CYAN	"\033[46m"
# define BG_WHITE	"\033[47m"

/*	STYLE TEXT	*/
# define BOLD		"\033[1m"
# define ITALIC		"\033[3m"
# define UNDERLINE	"\033[4m"
# define OVERLINE	"\033[53m"
# define BLINK		"\033[5m"
# define INVERTED	"\033[7m"
# define HIDDEN		"\033[8m"
# define STRIKE		"\033[9m"

class	AAnimal
{
	protected:

		std::string	_type;

	public:

		/*	Canonical Form	*/
		AAnimal( void );
		AAnimal( std::string type );
		AAnimal( const AAnimal &src_object );
		virtual ~AAnimal( void );

		virtual AAnimal		&operator=( const AAnimal &src_object );

		/*	Getter of Class AAnimal	*/
		virtual std::string	getType( void ) const;

		/*	Method of Class AAnimal	*/
		virtual void		makeSound( void ) const = 0;
};

#endif