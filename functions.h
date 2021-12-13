#pragma once
void pull_enemies(std::vector<Enemy*> &enemies,float height_brick);
void pull_of_platforms(std::vector<Block*> &prt,float width_brick,float height_brick);
std::vector<int> pull_of_floor(std::vector<Block*> &floor);
void pull_of_background(std::vector<Block*> &background);