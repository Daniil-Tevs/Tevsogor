#include "Block.h"

unsigned int Block::sizeX() const
{return m_image.getSize().x;}

unsigned int Block::sizeY() const
{return Block::m_image.getSize().y;}

sf::Sprite *Block::getShape()
{
    return m_block;
}

Block::~Block()
{
    delete m_block;
}
