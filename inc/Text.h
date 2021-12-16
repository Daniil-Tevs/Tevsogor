#pragma once
class text
{
private:
    sf::Text m_text;
    sf::Font m_font;
public:
    text(const std::string& a,float x,float y,int f)
    {
        m_font.loadFromFile("data/fonts/arial.ttf");
        m_text.setFont(m_font);
        m_text.setFillColor(sf::Color::Red);
        m_text.setCharacterSize(f);
        m_text.setString(a);
        m_text.setPosition(x,y);
    }
    ~text(){}
    sf::Text getText()
    {
        return m_text;
    }
};