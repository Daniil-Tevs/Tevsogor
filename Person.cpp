#include "Person.h"

float Person::getX() const
{return m_x;}
float Person::getY() const
{return m_y;}
void Person::Action()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && fl_u==0)
    { m_person.setTexture(m_udar);schetchik_u=1;fl_u=1;}
    if(fl_u==1)
        schetchik_u++;
    if(schetchik_u%40==0)
        m_person.setTexture(m_udar_padenie);
    if(schetchik_u%80==0) { m_person.setTexture(m_texture); fl_u=0;schetchik_u=1;}
}

void Person::Health(int place)
{
    for(int i=0;i<health_d;i++)
        mass_health[i].setTexture(health_t);
    for(int i=0;i<m_health;i++)
        mass_health[i].setPosition(width*place-30*i-70,50);
}

bool Person::Moving(int t,std::vector<int> mass,const std::vector<Block*>& prt)
{
    int fl_padenie=0,fl_block=0,fl_z=0,fl_b=1,t_pr=0;
    u_v=tec_v;
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
            if(((tec_x+t<=m_x-m_person.getOrigin().x || tec_x>=m_x+m_person.getOrigin().x) && (m_y>=tec_v || fl==0)) )
            { fl_block=0;}
        }
    }
    if((u_v!=tec_v || m_y==p_y)) { fl_pr=0;}
    if(fl_block==0) {
        for (int i = 0; i < mass.size(); i++) {
            if (m_x - m_person.getOrigin().x/2 > mass[i] * t - t && m_x < mass[i] * t && m_y + 30 >= p_y && fl_run == 2)
                fl_padenie = 1;
            if (m_x + m_person.getOrigin().x/2 > mass[i] * t - t && m_x < mass[i] * t && m_y + 30 >= p_y && fl_run == 1)
                fl_padenie = 1;
        }
        os=p_y;
    }
    if(fl_padenie==0 && fl_died==1)
    {
        if(fl_o=='f') {
            u_x = m_x ;
            u_y = m_y;
        }
        if(m_y<p_y && fl_block==0 && fl_o=='f')
            m_y+=0.5;
        if(m_y+1>=p_y && fl_block==0) {fl = 0;}
        if(m_y>height/2 && fl_block==1 && m_y==os && fl_pr==0 && (m_x+v>= tec_x || m_x-v<= tec_x+t))
        { m_y -=pr ;fl_pr=1;}
        os=m_y;
        if(fl_block==1 && m_y<tec_v-30)
            m_y+=0.5;
        if(fl_block==1 && m_y+1>=tec_v-30)
            fl=0;
        if (fl_o=='f' && sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && sf::Keyboard::isKeyPressed(sf::Keyboard::D) && fl==0 && fl_run==2)
        { fl_o='r';m_y-=10;fl=1;}
        else if (fl_o=='f' && sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && sf::Keyboard::isKeyPressed(sf::Keyboard::A) && fl==0 && fl_run==1)
        { fl_o='l';m_y-=10;fl=1;}
        else if (fl_o=='f' && sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && fl==0)
        {u_x=m_x;u_y=m_y; Person::m_person.move(0, -v);m_y=m_y-p; fl=1;}
        else if (fl_o=='f' && sf::Keyboard::isKeyPressed(sf::Keyboard::D) && ((fl_block==0 && m_x+v+10<=m*width-width/2)||(fl_block==1)))
        {l+=1;m_person.move(v, 0);m_x+=v;m_person.setScale(1,1);fl_run=2;}
        else if (fl_o=='f' && sf::Keyboard::isKeyPressed(sf::Keyboard::A)  && ((fl_block==0 && m_x-v>=0)||(fl_block==1)))
        {l+=1;m_person.move(-v, 0); m_x-=v;m_person.setScale(-1,1); fl_run=1;}
        if(fl_o!='f')
            Jump(t);
        m_person.setPosition(m_x,m_y);
        if(l%15==0){m_person.setTexture(m_texture);}
        if(l%15==1){m_person.setTexture(m_noga);}
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
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::O) && fl_died==1)
    {m_person.setPosition(p_x,p_y); m_x=p_x,m_y=p_y; fl_padenie=0; fl_died=1; health_d=10;}
    if((fl_died==0 || health_d==0) && s%500!=0 )
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
void Person::Jump(int t)
{
    if(fl_o=='r' && fl==1 )
    {
        if(u_x+1.3*v*m_time*cos(m_angle)<n*t-t)
            m_x=u_x+1.3*v*m_time*cos(m_angle);
        else
        {
            m_x=1;
            fl_o='f';
        }
        m_y=u_y+3*v*m_time*sin(m_angle)+(m_time*m_time)*0.5/100;
        m_time+=1.5;
    }
    else if(fl_o=='l' && fl==1 && u_x>=10 && u_x  - 1.3 * v * (m_time+1.5) * cos(m_angle)>10)
    {
        m_x = u_x - 1.3 * v * m_time * cos(m_angle);
        m_y = u_y + 3 * v * m_time * sin(m_angle) + (m_time * m_time) * 0.5 / 100;
        m_time += 1.5;
    }
    else
    {
        m_time=1;
        fl_o='f';
    }
}