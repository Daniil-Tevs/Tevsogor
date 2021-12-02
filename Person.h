#pragma once
class Person
{
private:
    sf::Texture m_texture,m_text,m_udar,m_noga,health_t;
    int schetchik=0,k_0=0,l=0;
public:
    sf::Sprite m_person,text;
    float m_x,m_y,v=0.9,p=140,p_y,p_x;
    float t_x,u;
    int fl=0,fl_died,s=1;
    int m_health=10;
    int health_d=10,fl_run=2;
    sf::Sprite mass_health[10];
    Person(std::string a,float x,float y)
    {
        health_t.loadFromFile("health.png");
        m_noga.loadFromFile("mainP_noga.png");
        m_text.loadFromFile("text.png");
        m_udar.loadFromFile("mainP_udar.png");
        text.setTexture(m_text);
        sf::Image m_image;
        m_image.loadFromFile(a);
        m_texture.loadFromFile(a);
        m_person.setTexture(m_texture);
        m_x=x;m_y=y;
        p_y=y;p_x=x;
        fl_died=1;
        t_x=m_image.getSize().x/4;
        m_person.setPosition(m_x,m_y);
        m_person.setOrigin(m_image.getSize().x/2,m_image.getSize().y/2);
    }
    bool Moving(int t,int mass[n])
    {
        int fl_padenie=0;
        for(int i=0;i<n;i++)
        {
            if (m_x - t_x > mass[i] * t - t && m_x < mass[i] * t && m_y +30 >= p_y && fl_run==2)
                fl_padenie = 1;
            if (m_x + t_x > mass[i] * t - t && m_x < mass[i] * t && m_y+30 >= p_y && fl_run==1)
                fl_padenie = 1;
        }
        if(fl_padenie==0 && fl_died==1)
        {
            if(m_y<p_y)
                m_y+=0.5;
            if(m_y+1>=p_y)
                fl=0;
            u=m_x;

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && sf::Keyboard::isKeyPressed(sf::Keyboard::D) && fl==0 && fl_run==2)
            { Person::m_person.move(m_person.getOrigin().x+50, -v) ;m_y=m_y-p; fl=1;}
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && sf::Keyboard::isKeyPressed(sf::Keyboard::A) && fl==0 && fl_run==1)
            { Person::m_person.move(-m_person.getOrigin().x-30, -v);m_x-=m_person.getOrigin().x+30 ;m_y=m_y-p; fl=1;}
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && fl==0)
            { Person::m_person.move(0, -v);m_y=m_y-p; fl=1;}
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && m_x-v>=0) {l+=1;m_person.move(-v, 0); m_x-=v;m_person.setScale(-1,1); fl_run=1;}
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {l+=1;m_person.move(v, 0);m_x+=v;m_person.setScale(1,1);fl_run=2;}
            m_person.setPosition(m_x,m_y);
            if(l%30==0){m_person.setTexture(m_texture);}
            if(l%30==1){m_person.setTexture(m_noga);}
        }
        else
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
        std::cout<<fl_run<<std::endl;
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
    void Action()
    {

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && schetchik%50==0)
        { m_person.setTexture(m_udar);schetchik=1;}
        schetchik++;
        if(schetchik%50==0)
            m_person.setTexture(m_texture);
    }
    void Health(int s)
    {
        for(int i=0;i<health_d;i++)
            mass_health[i].setTexture(health_t);
        for(int i=0;i<m_health;i++)
            mass_health[i].setPosition(width*s-30*i-70,50);
    }
    ~Person()
    {

    }
};