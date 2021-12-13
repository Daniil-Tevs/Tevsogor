#include "Arrows.h"
bool Arrow::Moving()
{
    if(m_y+v<=e_y)
    {
        m_y += v;
        m_arrow->setPosition(m_x,m_y);
        return false;
    }
    else
        return true;
}
unsigned int Arrow::getSize_x()
{
    return m_image.getSize().x;
}
unsigned int Arrow::getSize_y()
{
    return m_image.getSize().y;
}
sf::Sprite *Arrow::getShape()
{
    return m_arrow;
}
Arrow::~Arrow()
{
    delete m_arrow;
}

