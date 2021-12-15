#include "Person.h"
float Person::getX() const
{return m_x;}
float Person::getY() const
{return m_y;}
void Person::Action()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && fl_kick==0)
    { m_person.setTexture(m_texture[2]); fl_kick=1; timer_kick=1;}
    if(fl_kick==1)
        timer_kick++;
    if(timer_kick%40==0)
        m_person.setTexture(m_texture[3]);
    if(timer_kick%80==0) { m_person.setTexture(m_texture[0]); fl_kick=0; timer_kick=1;}
}

void Person::Health(int place)
{
    for(int i=0;i<health_d;i++)
        mass_health[i].setTexture(health_t);
    for(int i=0;i<m_health;i++)
        mass_health[i].setPosition(width*place-30*i-70,50);
}

void Person::pull_main_p_t(sf::Texture texture[n_main_p])
{
    texture[0].loadFromFile("../data/skins/mainP.png");
    texture[1].loadFromFile("../data/skins/mainP_noga.png");
    texture[2].loadFromFile("../data/skins/mainP_udar.png");
    texture[3].loadFromFile("../data/skins/mainP_udar_padenie_o.png");
}

bool Person::Moving(int t,std::vector<int> mass,const std::vector<Block*>& prt)
{
    int fl_padenie=0,fl_block=0,fl_b=1,t_pr=0;
    u_v=tec_v;
    char fl_stop='f';
    tec_x=prt[0]->getShape()->getPosition().x;
    for(int i=0;i<prt_n;i++)
    {
        if(i!=1) {
            if (m_x + m_person.getOrigin().x / 2>= prt[i]->getShape()->getPosition().x &&
                m_x - m_person.getOrigin().x / 2<= prt[i]->getShape()->getPosition().x + t &&
                m_y<= prt[i]->getShape()->getPosition().y + prt[i]->sizeY())
            {
                fl_block = 1;
                tec_v = prt[i]->getShape()->getPosition().y;
                tec_x = prt[i]->getShape()->getPosition().x;
                pr=prt[i]->sizeY();
            }
        }
        if(i<13 && (fl_nev==1 || fl==1 || fl_o!='f') && m_x-prt[i]->getShape()->getPosition().x-t<=m_person.getOrigin().x-20 && m_y+m_person.getOrigin().y>=prt[i]->getShape()->getPosition().y && m_y-m_person.getOrigin().y>=prt[i]->getShape()->getPosition().y)
        { fl_stop = 'l';}
    }
    if((u_v!=tec_v && os-tr<=m_y+5) || m_y+5>=p_y ) { fl_pr=0;}
    if(fl_block==0)
    {
        for (int i = 0; i < mass.size(); i++)
        {
            if (m_x - m_person.getOrigin().x/2 > mass[i] * t - t && m_x < mass[i] * t && m_y + 30 >= p_y && fl_run == 2)
                fl_padenie = 1;
            if (m_x + m_person.getOrigin().x/2 > mass[i] * t - t && m_x < mass[i] * t && m_y + 30 >= p_y && fl_run == 1)
                fl_padenie = 1;
        }
    }
    if(fl_padenie==0 && fl_died==1)
    {
        if(fl_o=='f')
        {
            u_x = m_x;
            u_y = m_y;
        }
        if(m_y<p_y && fl_block==0 && fl_o=='f') { m_y += 0.5; fl_nev=1;}
        if(m_y+1>=p_y && fl_block==0) {fl = 0;fl_nev=0;}

        if(fl_stop=='f' && fl_nev==0 && ((tec_v-m_y<=pr || m_y+5>=p_y) && fl_block==1) && fl_pr==0 && ((m_x+v>= tec_x && tec_x-m_x<=10) || (m_x-v<= tec_x+t && tec_x+t-m_x<=10)))
        { us=tec_x;tr=pr;os=m_y;m_y -=pr ;fl_pr=1;}

        if(fl_block==1 && m_y<tec_v-40) { m_y += 0.5; }
        if(fl_block==1 && m_y+1>=tec_v-40) { fl = 0; }
        Move(fl_block,fl_stop);
        if(fl_o!='f')
            Jump(t);
        if(l%15==0)
            m_person.setTexture(m_texture[0]);
        if(l%15==1)
            m_person.setTexture(m_texture[1]);
        m_person.setPosition(m_x,m_y);
    }
    else if(fl_block==0)
    {
        if(m_y<=height-140)
        {
            m_y+=0.5;
            m_person.move(0, +v);
        }
        else
        {m_person.setPosition(p_x,p_y);m_x=p_x,m_y=p_y; fl_padenie=0; fl_died=0;}
    }

    if((fl_died==0 || health_d<=0) && s%500!=0 )
    {
        m_x=p_x,m_y=p_y;
        m_person.setPosition(p_x,p_y);
        health_d=10;
        s++;
        return false;
    }
    else if(s%50==0)
    {fl_died=1;s=1;}
    return true;
}