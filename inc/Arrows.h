#pragma once
#include <SFML/Graphics.hpp>
class Arrow {
private:
    sf::Texture m_texture;
    sf::Image m_image;
    sf::Sprite *m_arrow;
    float m_x, m_y;
    float v = 1;
    float e_y;
public:
    Arrow(const std::string& a,float x,float y,float y_stop)
    {
        m_arrow = new sf::Sprite;
        m_texture.loadFromFile(a);
        m_image.loadFromFile(a);
        m_x=x;m_y=y;
        e_y=y_stop;
        m_arrow->setTexture(m_texture);
        m_arrow->setPosition(m_x,m_y);
        Moving();
    }
    bool Moving();
    unsigned int getSize_x();
    unsigned int getSize_y();
    sf::Sprite *getShape();
    ~Arrow();
};