#pragma once
#include "Constants.h"
#include "Block.h"
class Enemy
{
private:
    sf::Texture m_texture;
    sf::Sprite* m_enemy;
    float m_x,m_y,p_x,p_y;
    float v=0.4,p=130;
public:
    int m_health;
    int m_damage;
    int fl=0,fl_died,s=1,fl_dvig=0,fl_dvig_v=0,tec_v,tec_x,os,u_v,pr,fl_pr=0;
    Enemy(const std::string& a,float x,float y,float y_p,int health,int damage)
    {
        sf::Image m_image;
        m_image.loadFromFile(a);
        m_texture.loadFromFile(a);
        m_health=health;
        m_damage=damage;
        m_x=x;m_y=y;
        p_x=m_x;
        p_y=y_p;
        m_enemy = new sf::Sprite;
        m_enemy->setTexture(m_texture);
        m_enemy->setPosition(m_x,m_y);
        m_enemy->setOrigin(m_image.getSize().x/2,m_image.getSize().y/2);

    }
    sf::Sprite *getShape();
    float getX() const;
    float getY() const;
    int getDamage(){return m_damage;}
    void Moving(int t,std::vector<int> mass,const std::vector<Block*>& prt);
    ~Enemy()
    {
        delete m_enemy;
    }
};