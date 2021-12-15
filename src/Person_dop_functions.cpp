#include "Person.h"
void Person::Jump(int t)
{
    if(fl_o=='r' && fl==1 && u_x+1.3*v*m_time*cos(m_angle)<=m*width-width/2)
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
void Person::Move(int fl_block,char fl_stop)
{
    if (fl_o=='f' && sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && sf::Keyboard::isKeyPressed(sf::Keyboard::D) && fl==0 && fl_run==2)
    { fl_o='r';m_y-=10;fl=1;}
    else if (fl_o=='f' && sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && sf::Keyboard::isKeyPressed(sf::Keyboard::A) && fl==0 && fl_run==1)
    { fl_o='l';m_y-=10;fl=1;}
    else if (fl_o=='f' && sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && fl==0)
    {u_x=m_x;u_y=m_y; Person::m_person.move(0, -v);m_y=m_y-p; fl=1;}
    else if (fl_stop!='r' && fl_o=='f' && sf::Keyboard::isKeyPressed(sf::Keyboard::D) && ((fl_block==0 && m_x+v+10<=m*width-width/2)||(fl_block==1)))
    {l+=1;m_person.move(v, 0);m_x+=v;m_person.setScale(1,1);fl_run=2;}
    else if (fl_stop!='l' && fl_o=='f' && sf::Keyboard::isKeyPressed(sf::Keyboard::A)  && ((fl_block==0 && m_x-v>=0)||(fl_block==1)))
    {l+=1;m_person.move(-v, 0); m_x-=v;m_person.setScale(-1,1); fl_run=1;}
}
