#include <vector>
#include "Block.h"
std::vector<int> pull_of_floor(std::vector<Block*> &floor)
{
    std::vector<int> mass_hole_number;
    for(int i=0;i<n;i++)
    {
        if(i>50 && i<56)
        {
            floor.push_back(new Block("data/skins/lava.png"));
            mass_hole_number.push_back(i);
        }
        else if(i!=3 && i!=7 && i!=10 && (i<14 || i>23) &&i!=27 && i!=28 && i!=32 && i!=37 && i!=43 )
            floor.push_back(new Block("data/skins/briks.png"));
        else
        {
            floor.push_back(new Block("data/skins/briks-pol_with_ships.png"));
            mass_hole_number.push_back(i);
        }
        floor[i]->getShape()->setOrigin(floor[i]->sizeX()/2,floor[i]->sizeY()/2);
        floor[i]->getShape()->setPosition(i*floor[i]->sizeX()-floor[i]->sizeX()/2,height-floor[i]->sizeY()/2);
    }
    return mass_hole_number;
}
