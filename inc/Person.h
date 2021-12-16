#pragma once
#include "Constants.h"
#include "Block.h"
class Person
{
private:
    sf::Texture health_t,m_texture[n_main_p];
    sf::Image m_image;
    int timer_kick=0, fl_kick=0,schetchik=0,k_0=0,l=0;
    float m_angle=2*acos(-1)-acos(-1)/6;
    float m_x,m_y,p_y,p_x;
    float v=0.9,p=140,tec_v=0,fl_nev=0;
    char fl_o='f';
    int fl=0,fl_died=1,s=1,fl_ch=0;
    float fl_p=0,tr=0;
    int m_health=10,pr,tec_x=0,u_v,us;
    float m_time=1;
    float os,pr2=0,u_x=0,u_y=0;
    void Jump(int t);
    void Move(int fl_block,char fl_stop);
    void pull_main_p_t(sf::Texture texture[n_main_p]);
    int fl_run=2,fl_pr=0;
    sf::Sprite m_person;
    sf::Sprite mass_health[10];
public:
    int health_d=10;
    Person(const std::string& a,float x,float y)
    {
        pull_main_p_t(m_texture);
        health_t.loadFromFile("data/skins/health.png");
        os=p_y;
        m_image.loadFromFile(a);
        m_person.setTexture(m_texture[0]);
        m_x=x;m_y=y;
        p_y=y;p_x=x;
        m_person.setPosition(m_x,m_y);
        m_person.setOrigin(m_image.getSize().x/2,m_image.getSize().y/2);
    }
    float getX() const;
    float getY() const;
    sf::Sprite getShape();
    sf::Sprite* getHealth();
    bool Moving(int t,std::vector<int> mass,const std::vector<Block*>& prt);
    void Action();
    void Health(int s);
    ~Person(){}
};