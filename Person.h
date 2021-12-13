#pragma once
#include "Constants.h"
#include "Block.h"
class Person
{
private:
    sf::Texture m_texture,m_text,m_udar,m_noga,health_t,m_udar_padenie;;
    int schetchik=0,schetchik_u=0,k_0=0,l=0;
    float m_angle=2*acos(-1)-acos(-1)/6;
    float m_x,m_y,p_y,p_x;
    float v=0.9,p=140,tec_v=0;
    char fl_o='f';
    void Jump(int t);
public:
    sf::Sprite m_person,text;
    int fl=0,fl_died,s=1,fl_u=0,fl_ch=0;
    float fl_p=0;
    int m_health=10,pr,tec_x=0,u_v;
    float m_time=1;
    float os,pr2=0,u_x=0,u_y=0;
    int health_d=10,fl_run=2,fl_pr=0;
    sf::Sprite mass_health[10];
    Person(const std::string& a,float x,float y)
    {
        health_t.loadFromFile("health.png");
        m_noga.loadFromFile("mainP_noga.png");
        m_text.loadFromFile("text.png");
        m_udar.loadFromFile("mainP_udar.png");
        m_udar_padenie.loadFromFile("mainP_udar_padenie_o.png");
        text.setTexture(m_text);
        sf::Image m_image;
        os=p_y;
        m_image.loadFromFile(a);
        m_texture.loadFromFile(a);
        m_person.setTexture(m_texture);
        m_x=x;m_y=y;
        p_y=y;p_x=x;
        fl_died=1;
        m_person.setPosition(m_x,m_y);
        m_person.setOrigin(m_image.getSize().x/2,m_image.getSize().y/2);
    }
    float getX() const;
    float getY() const;
    bool Moving(int t,std::vector<int> mass,const std::vector<Block*>& prt);
    void Action();
    void Health(int s);
    ~Person(){}
};