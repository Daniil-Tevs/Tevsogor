#pragma once
class Enemy
{
private:
    sf::Texture m_texture;
    int m_health=10;
    sf::Sprite* m_enemy;
public:
    int health_d=5;
    float m_x,m_y,v=0.4,p=130,p_y,p_x;
    float t_x;
    int fl=0,fl_died,s=1,fl_dvig=0,fl_dvig_v=0,tec_v,tec_x,os,u_v,pr,fl_pr=0;
    Enemy(float x,float y,float y_p)
    {
        sf::Image m_image;
        m_image.loadFromFile("enemy1.png");
        m_texture.loadFromFile("enemy1.png");
        m_enemy = new sf::Sprite;
        m_enemy->setTexture(m_texture);
        m_x=x;m_y=y;
        float Moving;
        p_x=m_x;p_y=y_p;

        t_x=m_enemy->getOrigin().x;
        m_enemy->setPosition(m_x,m_y);
        m_enemy->setOrigin(m_image.getSize().x/2,m_image.getSize().y/2);
    }
    sf::Sprite *getShape()
    {
        return m_enemy;
    }
    void Moving(int t,int mass[n],const std::vector<Block*>& prt) {
        int fl_block = 0, u_fl, fl_z = 0;
        u_v = tec_v;
        for (int i = 0; i < prt_n; i++) {
            if (i != 1 && i!=10) {
                if (m_x + m_enemy->getOrigin().x / 2 >= prt[i]->m_block->getPosition().x &&
                    m_x - m_enemy->getOrigin().x / 2 <= prt[i]->m_block->getPosition().x + t &&
                    m_y < prt[i]->m_block->getPosition().y + prt[i]->m_block_i.getSize().y) {
                    fl_block = 1;
                    tec_v = prt[i]->m_block->getPosition().y;
                    tec_x = prt[i]->m_block->getPosition().x;
                    pr = prt[i]->m_block_i.getSize().y;
                    if (i > 3 && i<9 || i>11)
                        fl_z = 1;
                }
            }
        }
        if (fl_block == 0)
            tec_v = p_y;
        if (m_y <= p_y && fl_block == 0)
            m_y++;
        if (u_v != tec_v || m_y == p_y) { fl_pr = 0; }
        if (fl_block == 1 && m_y == os && m_y >= tec_v && fl_pr == 0 &&
            (m_x + m_enemy->getOrigin().x / 2 + v >= tec_x || m_x - v <= tec_x + t)) {
            m_y -= pr;
            fl_pr = 1;
        }
        else if (fl_block == 1 && m_y <= tec_v && fl_pr == 0 &&
                 (m_x + m_enemy->getOrigin().x / 2 + v >= tec_x || m_x - v <= tec_x + t)) {
            m_y += tec_v - m_y - m_enemy->getOrigin().x;
            fl_pr = 1;
        }
        os = m_y;
        for (int i = 0; i < n - 1; i++) {
            if (m_x >= mass[i] * t && m_x <= mass[i + 1] * t - t && (fl_z == 0 || fl_block == 0)) {
                if (m_x - v > mass[i] * t && fl_dvig == 0) {
                    m_enemy->move(-v, 0);
                    m_x -= v;
                } else {
                    fl_dvig = 1;
                    m_enemy->setScale(1, 1);
                }
                if (m_x + v < mass[i + 1] * t - t && fl_dvig == 1) {
                    m_enemy->move(+v, 0);
                    m_x += v;
                } else {
                    fl_dvig = 0;
                    m_enemy->setScale(-1, 1);
                }
            }
        }
        for (int i = 4; i < prt_n-1; i++)
        {
            if (fl_z == 1 && m_x>=prt[i]->m_block->getPosition().x && m_x<=prt[i+1]->m_block->getPosition().x+t && prt[i]->m_block->getPosition().x+t+10>prt[i+1]->m_block->getPosition().x) {
                if (m_x - v >=  prt[i]->m_block->getPosition().x && fl_dvig_v == 0) {
                    m_enemy->move(-v, 0);
                    m_x -= v;
                } else {
                    fl_dvig_v = 1;
                    m_enemy->setScale(1, 1);
                }
                if (m_x + v < prt[i+1]->m_block->getPosition().x+t && fl_dvig_v == 1) {
                    m_enemy->move(+v, 0);
                    m_x += v;
                } else {
                    fl_dvig_v = 0;
                    m_enemy->setScale(-1, 1);
                }
            }
        }
        m_enemy->setPosition(m_x,m_y);
    }
    ~Enemy()
    {
        delete m_enemy;
    }
};