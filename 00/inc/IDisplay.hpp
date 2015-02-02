/*
 * ----------------------------------------------------------------------------
 *
 *       Filename:  IDisplay.hpp
 *
 *    Description:  Display interface for zero.
 *
 *        Created:  02/02/15 10:19:28
 *
 *         Author:  Noé Sierra-Velasquez (nsierra-), nsierra-@student.42.fr
 *   Organization:  Nightly Build Studios
 *
 * ----------------------------------------------------------------------------
 */

#ifndef __IDISPLAY_HPP__
# define __IDISPLAY_HPP__

class IDisplay
{
	public:
		virtual void displayMap(const IMap &map)	= 0;
		virtual void displayLife(int life)			= 0;
		virtual void displayHunger(int hunger)		= 0;
		virtual void displayThirst(int thirst) 		= 0;

	protected:

	private:
		IDisplay();
};

#endif
