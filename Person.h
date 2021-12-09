#pragma once
class Person
{
private:
    sf::Texture m_texture,m_text,m_udar,m_noga,health_t,m_udar_padenie;;
    int schetchik=0,schetchik_u=0,k_0=0,l=0,time=0;
public:
    sf::Sprite m_person,text;
    float m_x,m_y,v=0.9,p=140,p_y,p_x,tec_v=0;
    float t_x,u,i_tec;
    int fl=0,fl_died,s=1,fl_u=0,fl_ch=0;
    int m_health=10,pr,tec_x=0,u_v;
    float os,pr2=0;
    int health_d=10,fl_run=2,fl_pr=0;
    sf::Sprite mass_health[10];
    Person(std::string a,float x,float y)
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
        t_x=m_image.getSize().x/4;
        m_person.setPosition(m_x,m_y);
        m_person.setOrigin(m_image.getSize().x/2,m_image.getSize().y/2);
    }
    bool Moving(int t,int mass[n],const std::vector<Block*>& prt)
    {
        int fl_padenie=0,fl_block=0,fl_z=0,fl_b=1;
        u_v=tec_v;
        for(int i=0;i<prt_n;i++)
        {
            if(i!=1) {
                if (m_x + m_person.getOrigin().x / 2>= prt[i]->m_block->getPosition().x &&
                    m_x - m_person.getOrigin().x / 2<= prt[i]->m_block->getPosition().x + t &&
                    m_y<= prt[i]->m_block->getPosition().y + prt[i]->m_block_i.getSize().y)
                {
                    fl_block = 1;
                    if(i==0)
                        i_tec=2;
                    else if(i<prt_n-1)
                        i_tec=i;
                    tec_v = prt[i]->m_block->getPosition().y;
                    tec_x = prt[i]->m_block->getPosition().x;
                    pr=prt[i]->m_block_i.getSize().y;
                }
                if(((tec_x+t<=m_x-m_person.getOrigin().x || tec_x>=m_x+m_person.getOrigin().x) && (m_y>=tec_v || fl==0)) )
                { fl_block=0;}

            }

        }

        if((u_v!=tec_v || m_y==p_y)) { fl_pr=0;}
        if(fl_block==0) {
            for (int i = 0; i < n; i++) {
                if (m_x - t_x > mass[i] * t - t && m_x < mass[i] * t && m_y + 30 >= p_y && fl_run == 2)
                    fl_padenie = 1;
                if (m_x + t_x > mass[i] * t - t && m_x < mass[i] * t && m_y + 30 >= p_y && fl_run == 1)
                    fl_padenie = 1;
            }
            os=p_y;
        }
        if(fl_padenie==0 && fl_died==1)
        {
            if(m_y<p_y && fl_block==0)
                m_y+=0.5;
            if(m_y+1>=p_y && fl_block==0)
                fl=0;
            if(m_y>height/2 && fl_block==1 && m_y==os && fl_pr==0 && (m_x+v>= tec_x || m_x-v<= tec_x+t))
            { m_y -=pr ;fl_pr=1;}
            os=m_y;
            if(fl_block==1 && m_y<tec_v-30)
                m_y+=0.5;
            if(fl_block==1 && m_y+1>=tec_v-30)
                fl=0;

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && sf::Keyboard::isKeyPressed(sf::Keyboard::D) && fl==0 && fl_run==2)
            { Person::m_person.move(m_person.getOrigin().x+50, -v) ;m_x+=m_person.getOrigin().x ;m_y=m_y-p; fl=1;}
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && sf::Keyboard::isKeyPressed(sf::Keyboard::A) && fl==0 && fl_run==1)
            { Person::m_person.move(-m_person.getOrigin().x-30, -v);m_x-=m_person.getOrigin().x+30 ;m_y=m_y-p; fl=1;}
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && fl==0)
            { Person::m_person.move(0, -v);m_y=m_y-p; fl=1;}
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && ((fl_block==0 && m_x+v+10<=t*n)||(fl_block==1)))
            {l+=1;m_person.move(v, 0);m_x+=v;m_person.setScale(1,1);fl_run=2;}
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)  && ((fl_block==0 && m_x-v>=0)||(fl_block==1)))
            {l+=1;m_person.move(-v, 0); m_x-=v;m_person.setScale(-1,1); fl_run=1;}
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
    void Action()
    {

//        while (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
//        { m_person.setTexture(m_udar);schetchik=1;fl_ch=1}
//        if(fl_ch==1)
//            schetchik++;
//        if(schetchik%50==0)
//            m_person.setTexture(m_texture);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && fl_u==0)
        { m_person.setTexture(m_udar);schetchik_u=1;fl_u=1;}
        if(fl_u==1)
            schetchik_u++;
        if(schetchik_u%40==0)
            m_person.setTexture(m_udar_padenie);
        if(schetchik_u%80==0) { m_person.setTexture(m_texture); fl_u=0;schetchik_u=1;}
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