/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IDisplay.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 03:19:04 by nsierra-          #+#    #+#             */
/*   Updated: 2015/02/04 04:41:49 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IDISPLAY_HPP__
# define __IDISPLAY_HPP__

class IDisplay
{
	public:
		virtual void displayLife(int life)			= 0;
		virtual void displayHunger(int hunger)		= 0;
		virtual void displayThirst(int thirst) 		= 0;
		virtual void draw(void)						= 0;

	protected:
		IDisplay() {}
		virtual ~IDisplay() {}
};

#endif
