#pragma once
class First_Level
{
public:
    int s=0;
    int mass[n];
    sf::Texture brik,pol_brik;
    sf::Image briks;
    std::array<sf::Sprite,n> mas;
    First_Level()
    {
        brik.loadFromFile("briks.png");
        pol_brik.loadFromFile("briks-pol.png");
        briks.loadFromFile("briks.png");
        for(int i=0;i<n;i++)
        {
            if(i!=3 && i!=5 && i!=7 && i!=10 && i!=13 && i!=15 && i!=27 && i!=23 && i!=19)
                mas[i].setTexture(brik);
            else
            {
                mas[i].setTexture(pol_brik);
                mass[s]=i;
                s++;
            }
            mas[i].setPosition(i*briks.getSize().x,height);
            mas[i].setOrigin(briks.getSize().x,briks.getSize().y);
        }

    }
};