#include "Constants.h"
#include "Person.h"
#include "Enemy.h"
#include "Arrows.h"
#include "functions.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(width, height), "Game");

    sf::View view;
    view.setSize(width, height);
    view.setCenter(width/2, height/2);

    int fl=0,s=1,t=2,t_a=0,number=0;

    std::vector<Block*> background;
    pull_of_background(background);

    Block brick{"briks.png"}; //Или "data/skins/briks.png"?

    std::vector<Block*> floor;
    std::vector<int> mass_hole_numbers;
    mass_hole_numbers= pull_of_floor(floor);

    Person main_p{"mainP.png", 0, height - (float)brick.sizeY()-30};

    std::vector<Enemy*> enemies;
    pull_enemies(enemies,height-brick.sizeY()-30);

    std::vector<Block*> prt;
    pull_of_platforms(prt,brick.sizeX(),brick.sizeY());

    std::vector<Arrow*> arrows;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if(main_p.getX() + 200 > (width*s-100))
        {
            view.move(width,0);
            fl=1;
            s++;
            t=s-1;
        }
        if(main_p.getX()<width*t-50)
        {
            view.move(-(width),0);
            fl=0;
            s--;
        }
        window.setView(view);
        window.clear();
        for(int j=0;j<m;j++)
            window.draw(*background[j]->getShape());
        for(int i=0;i<n;i++)
            window.draw(*floor[i]->getShape());
        if(main_p.Moving(brick.sizeX(),mass_hole_numbers,prt))
        {
        }
        else
        {
            window.draw(main_p.text);
        }
        window.draw(main_p.m_person);

        if(t_a%1400==0)
        {
            for(int i=0;i<n_a;i++)
                arrows.push_back(new Arrow("arrow.png",2600+i*50,-20,height - (float)brick.sizeY() - 30));
            t_a=1;
        }
        else if(arrows.size()!=0)
        {
            for(int i=0;i<arrows.size();i++)
            {
                if(arrows[i]->Moving()) {delete arrows[i]; arrows.erase(arrows.begin() + i); i--;}
                else
                {
                    if(main_p.getX()>=arrows[i]->getShape()->getPosition().x && main_p.getX()<=arrows[i]->getShape()->getPosition().x+arrows[i]->getSize_x() && main_p.getY()-main_p.m_person.getOrigin().y<=arrows[i]->getShape()->getPosition().y+arrows[i]->getSize_y() && main_p.getY()+main_p.m_person.getOrigin().y>=arrows[i]->getShape()->getPosition().y)
                        main_p.health_d--;
                    window.draw(*arrows[i]->getShape());
                }
            }
        }
        t_a++;
        for(int i=0;i<prt_n;i++)
            window.draw(*prt[i]->getShape());
        for(int i=0;i<enemies.size();i++)
        {
            if(enemies[i]->m_health==0)
            {
                delete enemies[i];
                enemies.erase(enemies.begin()+i);
                i--;
            }
            else
            {
                window.draw(*enemies[i]->getShape());
                enemies[i]->Moving(brick.sizeX(),mass_hole_numbers,prt);
                if(enemies[i]->m_health!=0 && (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) && main_p.getX()+main_p.m_person.getOrigin().x>=(enemies[i]->getX()-enemies[i]->getShape()->getOrigin().x) && main_p.getX()-main_p.m_person.getOrigin().x<=(enemies[i]->getX()+enemies[i]->getShape()->getOrigin().x) && number%50==0 && -main_p.m_person.getOrigin().y<=(main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y) && (main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y)<=main_p.m_person.getOrigin().y)
                    enemies[i]->m_health-=1;
                if(main_p.health_d!=0 && !(sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) && main_p.getX()>=(enemies[i]->getX()-enemies[i]->getShape()->getOrigin().x) && main_p.getX()<=(enemies[i]->getX()+enemies[i]->getShape()->getOrigin().x) && number%50==0 && -main_p.m_person.getOrigin().y<=(main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y) && (main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y)<=main_p.m_person.getOrigin().y)
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