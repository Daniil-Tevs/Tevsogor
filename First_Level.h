#pragma once
class First_Level
{
public:
    int s=0;
    int mass[n];
    sf::Texture brik,pol_brik;
    sf::Image briks;
    std::array<sf::Sprite,n> mas;
    First_Level()
    {
        brik.loadFromFile("briks.png");
        pol_brik.loadFromFile("briks-pol_with_ships.png");
        briks.loadFromFile("briks.png");
        for(int i=0;i<n;i++)
        {
            if(i!=3 && i!=7 && i!=10 && (i<14 || i>23) && i!=28 &&i!=27 && i!=28 && i!=32)
                mas[i].setTexture(brik);
            else
            {
                mas[i].setTexture(pol_brik);
                mass[s]=i;
                s++;
            }
            mas[i].setPosition(i*briks.getSize().x,height);
            mas[i].setOrigin(briks.getSize().x,briks.getSize().y);
        }

    }
};
class Block
{
public:
    sf::Texture m_block_t;
    sf::Image m_block_i;
    sf::Sprite *m_block;
    float m_x,m_y;
    Block(const std::string& a)
    {
        m_block_i.loadFromFile(a);
        m_block_t.loadFromImage(m_block_i);
        m_block = new sf::Sprite;
        m_block->setTexture(m_block_t);
    }
    ~Block()
    {
        delete m_block;
    }
};
