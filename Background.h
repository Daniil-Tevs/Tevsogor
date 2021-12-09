#pragma once
class Background
{
public:
    sf::Texture b_texture,b_texture_vecher,b_texture_zamok_door,b_texture_zamok_hall;
    sf::Texture m_texture;
    sf::Image b_image;
    std::array<sf::Sprite,m> b_fon_mass;
    Background(const std::string& a)
    {
        b_texture.loadFromFile(a);
        b_texture_vecher.loadFromFile("background_vecher.png");
        b_texture_zamok_door.loadFromFile("background_zamok_door.png");
        b_texture_zamok_hall.loadFromFile("background_zamok_hall.png");
        b_image.loadFromFile(a);
        for(int i=0;i<m;i++)
        {
            if(i<4)
                b_fon_mass[i].setTexture(b_texture);
            else if(i==4)
                b_fon_mass[i].setTexture(b_texture_vecher);
            else if(i==5)
                b_fon_mass[i].setTexture(b_texture_zamok_door);
            else if(i>5)
                b_fon_mass[i].setTexture(b_texture_zamok_hall);
            b_fon_mass[i].setPosition(i*b_image.getSize().x,0);

        }

    }
    ~Background()
    {

    }
};