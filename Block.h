#pragma once
#include "Constants.h"
class Block
{
private:
    sf::Texture m_texture;
    sf::Image m_image;
    sf::Sprite *m_block;
public:
    Block(const std::string& a)
    {
        m_image.loadFromFile(a);
        m_texture.loadFromImage(m_image);
        m_block = new sf::Sprite;
        m_block->setTexture(m_texture);
    }
    unsigned int sizeX() const;
    unsigned int sizeY() const;
    sf::Sprite *getShape();
    ~Block();
};
