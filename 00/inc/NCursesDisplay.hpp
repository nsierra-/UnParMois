/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NCursesDisplay.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 03:31:38 by nsierra-          #+#    #+#             */
/*   Updated: 2015/02/04 05:19:46 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __NCURSESDISPLAY_HPP__
# define __NCURSESDISPLAY_HPP__

#include "IDisplay.hpp"
#include <ncurses.h>

class	NCursesDisplay : public IDisplay {
	public:
		NCursesDisplay();

		virtual void displayLife(int life);
		virtual void displayHunger(int hunger);
		virtual void displayThirst(int thirst);
		virtual void draw(void);

	protected:
		WINDOW	*_mapWindow;
		WINDOW	*_infosWindow;
		WINDOW	*_thoughtsWindow;

		virtual ~NCursesDisplay();
		void	initWindows(void);
};

#endif
