#include <vector>
#include "Block.h"
void pull_of_background(std::vector<Block*> &background)
{
    for(int i=0;i<m;i++)
    {
        if(i<4)
            background.push_back(new Block("background_day.png"));
        else if(i==4)
            background.push_back(new Block("background_evening.png"));
        else if(i==5)
            background.push_back(new Block("background_castle_door.png"));
        else if(i<8)
            background.push_back(new Block("background_castle_hall.png"));
        else
            background.push_back(new Block("background_castle_tron.png"));
        background[i]->getShape()->setPosition((float)i*width,0);
    }
}

