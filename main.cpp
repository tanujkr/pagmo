/*****************************************************************************
 *   Copyright (C) 2004-2013 The PaGMO development team,                     *
 *   Advanced Concepts Team (ACT), European Space Agency (ESA)               *
 *   http://apps.sourceforge.net/mediawiki/pagmo                             *
 *   http://apps.sourceforge.net/mediawiki/pagmo/index.php?title=Developers  *
 *   http://apps.sourceforge.net/mediawiki/pagmo/index.php?title=Credits     *
 *   act@esa.int                                                             *
 *                                                                           *
 *   This program is free software; you can redistribute it and/or modify    *
 *   it under the terms of the GNU General Public License as published by    *
 *   the Free Software Foundation; either version 2 of the License, or       *
 *   (at your option) any later version.                                     *
 *                                                                           *
 *   This program is distributed in the hope that it will be useful,         *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *   GNU General Public License for more details.                            *
 *                                                                           *
 *   You should have received a copy of the GNU General Public License       *
 *   along with this program; if not, write to the                           *
 *   Free Software Foundation, Inc.,                                         *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.               *
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include "src/pagmo.h"

using namespace pagmo;

// Example in C++ of the use of PaGMO 1.1.5
int main()
{
	//We instantiate the problem Schwefel with dimension 50
	pagmo::problem::tsp_ads prob;
	//We instantiate the algorithm differential evolution with 500 generations
    std::cout << prob << std::endl;

    pagmo::population pop(prob,20);
    std::vector<double> x(3);
    x = {0,1,2};
    pop.push_back(x);
    x = {0,2,1};
    pop.push_back(x);
    x = {1,0,2};
    pop.push_back(x);
    x = {1,2,0};
    pop.push_back(x);
    x = {2,1,0};
    pop.push_back(x);
    x = {2,0,1};
    pop.push_back(x);
    std::cout << pop << std::endl;

	
	return 0;
}
