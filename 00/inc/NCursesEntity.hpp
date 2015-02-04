/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NCursesEntity.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 16:59:43 by nsierra-          #+#    #+#             */
/*   Updated: 2015/02/04 18:09:47 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __NCURSESENTITY_HPP__
# define __NCURSESENTITY_HPP__

#include "IEntity.hpp"
#include "IDisplay.hpp"

class NCursesEntity : public IEntity
{
	public:
		NCursesEntity(
				unsigned int x = 0,
				unsigned int y = 0
		);
		~NCursesEntity();

		virtual void			draw(const IDisplay &display);

	private:
		unsigned int	_x;
		unsigned int	_y;
};

#endif
