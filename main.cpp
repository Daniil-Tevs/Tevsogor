#include <SFML/Graphics.hpp>
#include <iostream>
#include <array>
#define width 1200
#define height 800
#define n 70
#define n_e 9
#define prt_n 16
#define m 10
#include "Background.h"
#include "First_Level.h"
#include "Person.h"
#include "Enemy.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(width, height), "Game");
    sf::View view;
    view.setSize(width, height);
    view.setCenter(width/2, height/2);
    Background fon{"background.png"};
    First_Level pol;
    int fl=0,s=1,t=2;
    int number=0,prt_number[prt_n];
    Person main_p{"mainP.png", 0, height - static_cast<float>(pol.briks.getSize().y)-30};
    std::vector<Enemy*> enemies;
    for(int i=0;i<n_e;i++)
    {
        if(i==0)
            enemies.push_back(new Enemy(750*(i+1),height - static_cast<float>(pol.briks.getSize().y)-30,height - static_cast<float>(pol.briks.getSize().y)-30));
        else if(i<=3)
            enemies.push_back(new Enemy(750*(i+1),height/3,height - static_cast<float>(pol.briks.getSize().y)-30));
        else if(i==4)
            enemies.push_back(new Enemy(700*(i+1),height/3,height - static_cast<float>(pol.briks.getSize().y)-30));
        else
            enemies.push_back(new Enemy(4500+15*i+10*i/5,height/3,height - static_cast<float>(pol.briks.getSize().y)-30));
    }
    std::vector<Block*> prt;
    for(int i=0;i<prt_n;i++)
    {
        if(i<2)
        {
            prt.push_back(new Block("briks-pol4.png"));
            prt[i]->m_block->setPosition(pol.briks.getSize().x * (11+i),
                                         height - static_cast<float>(pol.briks.getSize().y) - 30);
        }
        else if(i==2)
        {
            prt.push_back(new Block("briks-pol.png"));
            prt[i]->m_block->setPosition(pol.briks.getSize().x * 12,
                                         height - static_cast<float>(pol.briks.getSize().y) - 30 -
                                         prt[i]->m_block_i.getSize().y);
        }
        else if(i<=5)
        {
            prt.push_back(new Block("briks-pol4.png"));
            prt[i]->m_block->setPosition(pol.briks.getSize().x * (11 + i),
                                         height - 2 * static_cast<float>(pol.briks.getSize().y) - 30 +
                                         prt[i]->m_block_i.getSize().y);
        }
        else if(i<9)
        {
            prt.push_back(new Block("briks-pol4.png"));
            prt[i]->m_block->setPosition(pol.briks.getSize().x * (13 + i),
                                         height - 2 * static_cast<float>(pol.briks.getSize().y) - 30 +
                                         prt[i]->m_block_i.getSize().y);
        }
        else if(i<11)
        {
            prt.push_back(new Block("briks-pol4.png"));
            prt[i]->m_block->setPosition(pol.briks.getSize().x * (15 + i),
                                         height - static_cast<float>(pol.briks.getSize().y) - 30);
        }
        else if(i==11)
        {
            prt.push_back(new Block("briks-pol.png"));
            prt[i]->m_block->setPosition(pol.briks.getSize().x * (14 + i),
                                         height - static_cast<float>(pol.briks.getSize().y) - 30-prt[i]->m_block_i.getSize().y/2-prt[i-1]->m_block_i.getSize().y);
        }
        else if(i==12)
        {
            prt.push_back(new Block("briks-pol4.png"));
            prt[i]->m_block->setPosition(pol.briks.getSize().x * (15 + i),
                                         height - 2*static_cast<float>(pol.briks.getSize().y) - 30-prt[i]->m_block_i.getSize().y/2);
        }
        else if(i==13)
        {
            prt.push_back(new Block("briks-pol4.png"));
            prt[i]->m_block->setPosition(pol.briks.getSize().x * (16 + i),
                                         height - 4*static_cast<float>(pol.briks.getSize().y) - 30-prt[i]->m_block_i.getSize().y/2);
        }
        else if(i==14)
        {
            prt.push_back(new Block("briks-pol.png"));
            prt[i]->m_block->setPosition(pol.briks.getSize().x * (11 + i),
                                         height - 3*static_cast<float>(pol.briks.getSize().y) - 30-prt[i]->m_block_i.getSize().y/2);
        }
        else if(i==15)
        {
            prt.push_back(new Block("briks-pol4.png"));
            prt[i]->m_block->setPosition(pol.briks.getSize().x * (12 + i),
                                         height - 4*static_cast<float>(pol.briks.getSize().y) - 30-prt[i]->m_block_i.getSize().y/2);
        }
    }
    for(int i=0;i<prt_n;i++)
        prt_number[i]=prt[i]->m_block->getPosition().x;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if(main_p.m_x + 200 > (width*s-100))
        {
            view.move(width,0);
            fl=1;
            s++;
            t=s-1;
        }
        if(main_p.m_x<width*t-50)
        {
            view.move(-(width),0);
            fl=0;
            s--;
        }
        window.setView(view);
        window.clear();
        for(int j=0;j<m;j++)
            window.draw(fon.b_fon_mass[j]);
        for(int i=0;i<n;i++)
            window.draw(pol.mas[i]);
        if(main_p.Moving(pol.briks.getSize().x,pol.mass,prt))
        {
        }
        else
        {
            window.draw(main_p.text);
        }
        window.draw(main_p.m_person);
        for(int i=0;i<prt_n;i++)
            window.draw(*prt[i]->m_block);
        for(int i=0;i<enemies.size();i++)
        {
            if(enemies[i]->health_d==0)
            {
                delete enemies[i];
                enemies.erase(enemies.begin()+i);
                i--;
            }
            else
            {
                window.draw(*enemies[i]->getShape());
                enemies[i]->Moving(pol.briks.getSize().x,pol.mass,prt);
                if(enemies[i]->health_d!=0 && (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) && main_p.m_x+main_p.m_person.getOrigin().x>=(enemies[i]->m_x-enemies[i]->getShape()->getOrigin().x) && main_p.m_x-main_p.m_person.getOrigin().x<=(enemies[i]->m_x+enemies[i]->getShape()->getOrigin().x) && number%50==0 && -main_p.m_person.getOrigin().y<=(main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y) && (main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y)<=main_p.m_person.getOrigin().y)
                    enemies[i]->health_d-=1;
                if(main_p.health_d!=0 && !(sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) && main_p.m_x>=(enemies[i]->m_x-enemies[i]->getShape()->getOrigin().x) && main_p.m_x<=(enemies[i]->m_x+enemies[i]->getShape()->getOrigin().x) && number%50==0 && -main_p.m_person.getOrigin().y<=(main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y) && (main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y)<=main_p.m_person.getOrigin().y)
                    main_p.health_d-=1;
            }
        }
        main_p.Action();
        main_p.Health(s);
        number++;
        for(int i=0;i<main_p.health_d;i++)
            window.draw(main_p.mass_health[i]);
        window.display();
    }
    return 0;
}