#ifndef ITEM_HPP_INCLUDED
#define ITEM_HPP_INCLUDED

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>

class Item
{
    sf::Sprite item_sprite;
    sf::Vector2i item_pos;

public:
    void set_position(sf::Vector2i value);
    void set_texture(const sf::Texture& texture);

    void draw(sf::RenderWindow& window);
};

#endif // ITEM_HPP_INCLUDED
