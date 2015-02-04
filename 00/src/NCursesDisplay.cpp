/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NCursesDisplay.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 04:10:43 by nsierra-          #+#    #+#             */
/*   Updated: 2015/02/04 17:55:38 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <iostream>
#include <fstream>
#include "NCursesDisplay.hpp"

NCursesDisplay::NCursesDisplay()
{
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	curs_set(0);
	initWindows();
}

NCursesDisplay::~NCursesDisplay()
{
	endwin();
}

void	NCursesDisplay::initWindows(void)
{
	_mapWindow = newwin(40, 170, 0, 0);
	_infosWindow = newwin(40, 30, 0, 170);
	_thoughtsWindow = newwin(10, 170, 40, 0);
}

void	NCursesDisplay::draw(void)
{
	box(_mapWindow, '|', '-');
	box(_infosWindow, '|', '-');
	box(_thoughtsWindow, '|', '-');
	wrefresh(_mapWindow);
	wrefresh(_infosWindow);
	wrefresh(_thoughtsWindow);
	refresh();
}
void NCursesDisplay::displayLife(int life)
{
	(void)life;
}

void NCursesDisplay::displayHunger(int hunger)
{
	(void)hunger;
}

void NCursesDisplay::displayThirst(int thirst)
{
	(void)thirst;
}
