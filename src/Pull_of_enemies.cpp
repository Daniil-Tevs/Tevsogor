#include <vector>
#include "Enemy.h"

void pull_enemies(std::vector<Enemy*> &enemies,float pos)
{
    for(int i=0;i<n_e;i++)
    {
        if(i==0)
            enemies.push_back(new Enemy("../data/skins/dark_knight.png",750*(i+1),pos,pos,5,1));
        else if(i<=3)
            enemies.push_back(new Enemy("../data/skins/dark_knight.png",750*(i+1),(float)height/3,pos,7,1));
        else if(i==4)
            enemies.push_back(new Enemy("../data/skins/dark_knight.png",700*(i+1),height/3,pos,7,2));
        else if(i==5)
            enemies.push_back(new Enemy("../data/skins/big_knight.png",4500+15*i+10*i/5,(float)height/3,pos-40,20,4));
        else if(i<8)
            enemies.push_back(new Enemy("../data/skins/skeleton.png",width*4+i%5*600,(float)height/3,pos,5,1));
        else
            enemies.push_back(new Enemy("../data/skins/big_knight.png",width*7-width/2,(float)height/3,pos,20,4));

    }
}