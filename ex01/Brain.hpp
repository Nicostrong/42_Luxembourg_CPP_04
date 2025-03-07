/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:55:25 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/03/04 11:10:58 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

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
