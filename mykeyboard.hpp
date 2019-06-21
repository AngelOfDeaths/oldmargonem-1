#ifndef MYKEYBOARD_HPP_INCLUDED
#define MYKEYBOARD_HPP_INCLUDED

#include <SFML/System/Vector2.hpp>

class MyKeyboard
{
public:
    bool up = false;
    bool left = false;
    bool down = false;
    bool right = false;

    bool anyKey() const;
    sf::Vector2i getPosChange() const;
};

#endif // MYKEYBOARD_HPP_INCLUDED
