#include <vector>
#include "Enemy.h"

void pull_enemies(std::vector<Enemy*> &enemies,float pos)
{
    for(int i=0;i<n_e;i++)
    {
        if(i==0)
            enemies.push_back(new Enemy("enemy1.png",750*(i+1),pos,pos));
        else if(i<=3)
            enemies.push_back(new Enemy("enemy1.png",750*(i+1),(float)height/3,pos));
        else if(i==4)
            enemies.push_back(new Enemy("enemy1.png",700*(i+1),height/3,pos));
        else if(i<=8)
            enemies.push_back(new Enemy("enemy1.png",4500+15*i+10*i/5,(float)height/3,pos));
        else
            enemies.push_back(new Enemy("skeleton.png",width*4+i%9*600,(float)height/3,pos));
    }
}