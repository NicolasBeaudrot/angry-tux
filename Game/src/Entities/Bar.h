/*
    Copyright (C) 2010  Nicolas Beaudrot

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef BAR_H
#define BAR_H
#include "Entity.h"
#include <Box2D/Box2D.h>

class Bar : public Entity
{
    public:
        Bar(sf::RenderWindow* app
            ,sf::Vector2i& position
            ,std::string& path
            ,sf::Vector2i dimension
            ,float angle
            ,int type
            ,b2World* world);

        virtual ~Bar();
        void render();

    protected:
    private:
        sf::Vector2i _dimension;
        int _type;
        b2Body* _barBody;
        bool _collide;
};

#endif // BAR_H
