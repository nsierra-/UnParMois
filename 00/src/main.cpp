/*
 * ----------------------------------------------------------------------------
 *
 *     Filename:  main.cpp
 *
 *  Description:  Entry point for Zero.
 *
 *      Created:  02/02/15 10:15:10
 *
 *       Author:  Noé Sierra-Velasquez (nsierra-), nsierra-@student.42.fr
 * Organization:  Nightly Build Studios
 *
 * ----------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>

int		main(void)
{
	float	inc = 0.0f;

	for (int i = 0; i < 20; i++)
	{
		inc += 0.00001f;
		std::cout << inc << std::endl;
	}
	return (0);
}
