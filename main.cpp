#include "Constants.h"
#include "Person.h"
#include "Enemy.h"
#include "Arrows.h"
#include "functions.h"
#include "Text.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(width, height), "Game");

    sf::View view;                                 ///Создание камеры
    view.setSize(width, height);                   ///Определение её размеров
    view.setCenter(width/2, height/2);       ///Её центрирование

    text died{"You are died\nTry again", 65,65,48};

    sf::Texture final_t;
    final_t.loadFromFile("../data/skins/final_hole.png");


    int s=1,t=2,t_a=0,number=0,timer_final=0,R=0;
    float pad=0;

    std::vector<Block*> background;                ///Создание фона
    pull_of_background(background);             ///Его заполнение

    Block brick{"../data/skins/briks.png"};                   ///Ввод в систему блока кирпичей для обработки системы

    text final{"You could not come to terms with\ndefeat and where it led you.\nBack to me.",(float)60*brick.sizeX(),80,35};
    text end{"Coming soon^-^",(m-1)*width+70,height*1.5,145};

    std::vector<Block*> floor;                     ///Создание пола
    std::vector<int> mass_hole_numbers;            ///Массив индексов пробелов в поле
    mass_hole_numbers= pull_of_floor(floor);    ///Заполнение пола и массива

    ///Создание главного персонажа
    Person main_p{"../data/skins/mainP.png", 0, height - (float)brick.sizeY()-30};

    ///Создание врагов
    std::vector<Enemy*> enemies;
    pull_enemies(enemies,height-brick.sizeY()-30);

    ///Создание препятствий
    std::vector<Block*> prt;
    pull_of_platforms(prt,brick.sizeX(),brick.sizeY());

    ///Создание стрел
    std::vector<Arrow*> arrows;

    while (window.isOpen() && R==0)
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if(main_p.getX() + 200 > (width*s-100))
        {
            view.move(width,0);
            s++;
            t=s-1;
        }
        if(main_p.getX()<width*t-50)
        {
            view.move(-(width),0);
            s--;
        }
        window.setView(view);

        window.clear();

        for(int j=0;j<m;j++)
            window.draw(*background[j]->getShape());                    ///Отрисовка фона
        for(int i=0;i<n;i++)
            window.draw(*floor[i]->getShape());                         ///Отрисовка пола

        ///Отрисовка главного героя
        window.draw(main_p.m_person);
        main_p.Action();                                                ///Удар
        if(main_p.getX()<=59*brick.sizeX()+brick.sizeX()/2)
        {
            if (!main_p.Moving(brick.sizeX(), mass_hole_numbers, prt))    ///Движение героя
                window.draw(died.getText());
        }
        for(int i=0;i<prt_n;i++)
            window.draw(*prt[i]->getShape());                           ///Отрисовка препятствий

        if(t_a%1400==0)
        {
            for(int i=0;i<n_a;i++)
                arrows.push_back(new Arrow("../data/skins/arrow.png",2600+i*50,-20,height - (float)brick.sizeY() - 30));
            t_a=1;
        }
        else if(arrows.size()!=0)
        {
            for(int i=0;i<arrows.size();i++)
            {
                if(arrows[i]->Moving()) {delete arrows[i]; arrows.erase(arrows.begin() + i); i--;}
                else
                {
                    if(main_p.getX()>=arrows[i]->getShape()->getPosition().x && main_p.getX()<=arrows[i]->getShape()->getPosition().x+arrows[i]->getSize_x() && main_p.getY()-main_p.m_person.getOrigin().y<=arrows[i]->getShape()->getPosition().y+arrows[i]->getSize_y() && main_p.getY()+main_p.m_person.getOrigin().y>=arrows[i]->getShape()->getPosition().y)
                        main_p.health_d--;
                    window.draw(*arrows[i]->getShape());
                }
            }
        }

        for(int i=0;i<enemies.size();i++)
        {
            if(enemies[i]->m_health==0)
            {
                delete enemies[i];
                enemies.erase(enemies.begin()+i);
                i--;
            }
            else
            {
                window.draw(*enemies[i]->getShape());
                enemies[i]->Moving(brick.sizeX(),mass_hole_numbers,prt);
                if(enemies[i]->m_health!=0 && (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) && main_p.getX()+main_p.m_person.getOrigin().x>=(enemies[i]->getX()-enemies[i]->getShape()->getOrigin().x) && main_p.getX()-main_p.m_person.getOrigin().x<=(enemies[i]->getX()+enemies[i]->getShape()->getOrigin().x) && number%50==0 && -main_p.m_person.getOrigin().y<=(main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y) && (main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y)<=main_p.m_person.getOrigin().y)
                    enemies[i]->m_health-=1;
                if(main_p.health_d>0 && main_p.getX()>=(enemies[i]->getX()-enemies[i]->getShape()->getOrigin().x) && main_p.getX()<=(enemies[i]->getX()+enemies[i]->getShape()->getOrigin().x) && number%50==0 && -main_p.m_person.getOrigin().y<=(main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y) && (main_p.m_person.getPosition().y-enemies[i]->getShape()->getPosition().y)<=main_p.m_person.getOrigin().y)
                    main_p.health_d-=enemies[i]->getDamage();
            }
        }
        if(main_p.getX()>=59*brick.sizeX()+brick.sizeX()/2 && timer_final<1000)
        {
            window.draw(final.getText());
            timer_final++;
            pad=main_p.getY();
        }
        else if(main_p.getX()>=59*brick.sizeX()+brick.sizeX()/2 && timer_final>=1000)
        {
            floor[60]->getShape()->setTexture(final_t);
            if(pad<=height*2-30) { main_p.m_person.setPosition(main_p.getX(), pad); view.move(0,1);}
            pad++;
            window.draw(end.getText());
            timer_final++;
            if(timer_final>=2100)
                R=1;
        }
        main_p.Health(s);
        for(int i=0;i<main_p.health_d;i++)
            window.draw(main_p.mass_health[i]);
        window.display();
        number++; t_a++;
    }
    return 0;
}