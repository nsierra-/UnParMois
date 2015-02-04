/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IEntity.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 16:45:44 by nsierra-          #+#    #+#             */
/*   Updated: 2015/02/04 17:18:38 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IENTITY_HPP__
# define __IENTITY_HPP__

#include "IDisplay.hpp"

class IEntity {

	public:
	virtual void			draw(const IDisplay &display) = 0;
	//virtual void			update(void) = 0;
	// virtual bool			collide(const IEntity &ent) = 0;

	protected:
	IEntity();
};

#endif
