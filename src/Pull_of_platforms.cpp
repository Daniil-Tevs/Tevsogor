#include <vector>
#include "Block.h"

void pull_of_platforms(std::vector<Block*> &prt,float width_brick,float height_brick)
{
    for(int i=0;i<prt_n;i++)
    {

        if(i<2)
        {
            prt.push_back(new Block("../data/skins/briks-pol4.png"));
            prt[i]->getShape()->setPosition(width_brick * (11+i),
                                         height - height_brick - 30);
        }
        else if(i==2)
        {
            prt.push_back(new Block("../data/skins/briks-pol.png"));
            prt[i]->getShape()->setPosition(width_brick * 12,
                                         height - height_brick - 30 -
                                         prt[i]->sizeY());
        }
        else if(i<=5)
        {
            prt.push_back(new Block("../data/skins/briks-pol4.png"));
            prt[i]->getShape()->setPosition(width_brick * (11 + i),
                                         height - 2 * height_brick - 30 +
                                         prt[i]->sizeY());
        }
        else if(i<9)
        {
            prt.push_back(new Block("../data/skins/briks-pol4.png"));
            prt[i]->getShape()->setPosition(width_brick * (13 + i),
                                         height - 2 * height_brick - 30 +
                                         prt[i]->sizeY());
        }
        else if(i<11)
        {
            prt.push_back(new Block("../data/skins/briks-pol4.png"));
            prt[i]->getShape()->setPosition(width_brick * (15 + i),
                                         height - height_brick - 30);
        }
        else if(i==11)
        {
            prt.push_back(new Block("../data/skins/briks-pol.png"));
            prt[i]->getShape()->setPosition(width_brick * (14 + i),
                                         height - height_brick - 30-prt[i]->sizeY()/2-prt[i-1]->sizeY());
        }
        else if(i==12)
        {
            prt.push_back(new Block("../data/skins/briks-pol4.png"));
            prt[i]->getShape()->setPosition(width_brick * (15 + i),
                                         height - 2*height_brick - 30-prt[i]->sizeY()/2);
        }
        else if(i==13)
        {
            prt.push_back(new Block("../data/skins/cloud.png"));
            prt[i]->getShape()->setPosition(width_brick * (16 + i),
                                         height - 4*height_brick - 30-prt[i]->sizeY()/2);
        }
        else if(i==14)
        {
            prt.push_back(new Block("../data/skins/cloud.png"));
            prt[i]->getShape()->setPosition(width_brick * (11 + i),
                                         height - 3*height_brick - 30-prt[i]->sizeY()/2);
        }
        else if(i==15)
        {
            prt.push_back(new Block("../data/skins/cloud.png"));
            prt[i]->getShape()->setPosition(width_brick * (12 + i),
                                         height - 4*height_brick - 30-prt[i]->sizeY()/2);
        }
        else if(i<=18)
        {
            prt.push_back(new Block("../data/skins/briks-pol4_dif.png"));
            prt[i]->getShape()->setPosition(width_brick * (50 + i%15),
                                            height - 1.5*height_brick - 30);
        }
        else
        {
            prt.push_back(new Block("../data/skins/briks-pol4_dif.png"));
            prt[i]->getShape()->setPosition(width_brick * (48 + i%18),
                                            height - 2.5*height_brick - 30);
        }
    }
}