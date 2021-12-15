#include "Enemy.h"

float Enemy::getX() const
{return m_x;}
float Enemy::getY() const
{return m_y;}
sf::Sprite *Enemy::getShape()
{return m_enemy;}

void Enemy::Moving(int t,std::vector<int> mass,const std::vector<Block*>& prt)
{
    int fl_block = 0, u_fl, fl_z = 0;
    u_v = tec_v;
    for (int i = 0; i < prt_n; i++) {
        if (i != 1 && i!=10) {
            if (m_x + m_enemy->getOrigin().x / 2 >= prt[i]->getShape()->getPosition().x &&
                m_x - m_enemy->getOrigin().x / 2 <= prt[i]->getShape()->getPosition().x + t &&
                m_y < prt[i]->getShape()->getPosition().y + prt[i]->sizeY()) {
                fl_block = 1;
                tec_v = prt[i]->getShape()->getPosition().y;
                tec_x = prt[i]->getShape()->getPosition().x;
                pr = prt[i]->sizeY();
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
    for (int i = 0; i < mass.size() - 1; i++) {
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
        if (fl_z == 1 && m_x>=prt[i]->getShape()->getPosition().x && m_x<=prt[i+1]->getShape()->getPosition().x+t && prt[i]->getShape()->getPosition().x+t+10>prt[i+1]->getShape()->getPosition().x) {
            if (m_x - v >=  prt[i]->getShape()->getPosition().x && fl_dvig_v == 0) {
                m_enemy->move(-v, 0);
                m_x -= v;
            } else
            {
                fl_dvig_v = 1;
                m_enemy->setScale(1, 1);
            }
            if (m_x + v < prt[i+1]->getShape()->getPosition().x+t && fl_dvig_v == 1) {
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