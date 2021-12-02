#include <SFML/Graphics.hpp>
#include <iostream>
#include <array>
#define width 1200
#define height 800
#define n 50
#define m 10
#include "Background.h"
#include "First_Level.h"
#include "Person.h"

class Enemy
{
private:
    sf::Texture m_texture;
public:
    sf::Sprite m_enemy;
    float m_x,m_y,v=0.4,p=130,p_y,p_x;
    float t_x;
    int fl=0,fl_died,s=1,fl_dvig=0;
    Enemy(float x,float y)
    {
        sf::Image m_image;
        m_image.loadFromFile("enemy1.png");
        m_texture.loadFromFile("enemy1.png");
        m_enemy.setTexture(m_texture);
        m_x=x;m_y=y;
        float Moving;
        t_x=m_enemy.getOrigin().x;
        m_enemy.setPosition(m_x,m_y);
        m_enemy.setOrigin(m_image.getSize().x/2,m_image.getSize().y/2);
    }
    void Moving(int t,int mass[n])
    {
        for(int i=0;i<n-1;i++)
        {
            if(m_x>=mass[i]*t && m_x<=mass[i+1]*t-t)
            {

                if (m_x - v> mass[i] * t && fl_dvig == 0) {
                    m_enemy.move(-v, 0);
                    m_x -= v;
                }
                else {
                    fl_dvig = 1;
                    m_enemy.setScale(1, 1);
                }
                if (m_x + v<mass[i+1] * t - t && fl_dvig == 1) {
                    m_enemy.move(+v, 0);
                    m_x += v;
                } else {
                    fl_dvig = 0;
                    m_enemy.setScale(-1, 1);
                }
            }
        }
    }
    ~Enemy()
    {

    }
};
int main()
{
    sf::RenderWindow window(sf::VideoMode(width, height), "Game");
    sf::View view;
    int flk=0;
    view.setSize(width, height);
    view.setCenter(width/2, height/2);
    Background fon{"background.png"};
    First_Level pol;
    int fl=0,s=1,t=2;
    int number=0;
    Person main_p{"mainP.png", 0, height - static_cast<float>(pol.briks.getSize().y)-30};
    Enemy enemy1{800, height - static_cast<float>(pol.briks.getSize().y)-30};
    Enemy enemy2{3000, height - static_cast<float>(pol.briks.getSize().y)-30};
    Enemy enemy3{1800, height - static_cast<float>(pol.briks.getSize().y)-30};
    Enemy enemy4{2400, height - static_cast<float>(pol.briks.getSize().y)-30};
    Enemy enemy5{3800, height - static_cast<float>(pol.briks.getSize().y)-30};
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
        if(main_p.m_x<width*t-200)
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
        if(main_p.Moving(pol.briks.getSize().x,pol.mass))
        {}
        else
        {
            window.draw(main_p.text);
        }
        window.draw(main_p.m_person);
        window.draw(enemy1.m_enemy);
        enemy1.Moving(pol.briks.getSize().x,pol.mass);
        window.draw(enemy2.m_enemy);
        enemy2.Moving(pol.briks.getSize().x,pol.mass);
        window.draw(enemy3.m_enemy);
        enemy3.Moving(pol.briks.getSize().x,pol.mass);
        window.draw(enemy4.m_enemy);
        enemy4.Moving(pol.briks.getSize().x,pol.mass);
        window.draw(enemy5.m_enemy);
        enemy5.Moving(pol.briks.getSize().x,pol.mass);
        main_p.Action();
        main_p.Health(s);
        number++;
        if(main_p.health_d!=0 && !(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) && main_p.m_x>=(enemy1.m_x-enemy1.m_enemy.getOrigin().x) && main_p.m_x<=(enemy1.m_x+enemy1.m_enemy.getOrigin().x) && number%50==0)
            main_p.health_d-=1;
        if(main_p.health_d!=0 && !(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) && main_p.m_x>=(enemy2.m_x-enemy2.m_enemy.getOrigin().x) && main_p.m_x<=(enemy2.m_x+enemy2.m_enemy.getOrigin().x) && number%50==0)
            main_p.health_d-=1;
        if(main_p.health_d!=0 && !(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) && main_p.m_x>=(enemy3.m_x-enemy3.m_enemy.getOrigin().x) && main_p.m_x<=(enemy3.m_x+enemy3.m_enemy.getOrigin().x) && number%50==0)
            main_p.health_d-=1;
        if(main_p.health_d!=0 && !(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) && main_p.m_x>=(enemy4.m_x-enemy4.m_enemy.getOrigin().x) && main_p.m_x<=(enemy4.m_x+enemy4.m_enemy.getOrigin().x) && number%50==0)
            main_p.health_d-=1;
        if(main_p.health_d!=0 && !(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) && main_p.m_x>=(enemy5.m_x-enemy5.m_enemy.getOrigin().x) && main_p.m_x<=(enemy5.m_x+enemy5.m_enemy.getOrigin().x) && number%50==0)
            main_p.health_d-=1;
        for(int i=0;i<main_p.health_d;i++)
            window.draw(main_p.mass_health[i]);
        window.display();

    }
    return 0;
}