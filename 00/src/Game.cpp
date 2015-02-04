/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 04:04:50 by nsierra-          #+#    #+#             */
/*   Updated: 2015/02/04 04:54:26 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "Game.hpp"
#include "NCursesDisplay.hpp"

Game::Game()
{
	initializeDisplay();
}

void	Game::loop(void)
{
	while (42)
	{
		_display->draw();
	}
}

void	Game::initializeDisplay(void)
{
	_display = new NCursesDisplay();
	_display->draw();
}
