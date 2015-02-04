/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 04:02:23 by nsierra-          #+#    #+#             */
/*   Updated: 2015/02/04 04:40:34 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GAME_HPP__
# define __GAME_HPP__

#include "IDisplay.hpp"

class	Game {
	public:
		Game();

		void	loop(void);

	private:
		IDisplay	*_display;

		void	initializeDisplay(void);
};

#endif
