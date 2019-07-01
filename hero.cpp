#include "hero.hpp"
#include <SFML/Graphics/Texture.hpp>

void Hero::set_screen_size(sf::Vector2u value)
{
    screen_center = value/2u;
}

void Hero::set_dir(const std::string& value)
{
    sprite_rect.top = std::stoul(value) * p_per_tile.y;
    hero_sprite.setTextureRect(sprite_rect);
}

void Hero::set_texture(const sf::Texture& texture)
{
    hero_sprite.setTexture(texture);
    sf::Vector2u texture_size = texture.getSize();
    sprite_rect.width = texture_size.x/4;
    sprite_rect.height = texture_size.y/4;
    p_per_tile = sf::Vector2f(texture_size)/4.f;

    sf::Vector2f sprite_pos(screen_center);
    sprite_pos -= p_per_tile/2.f;
    hero_sprite.setPosition(sprite_pos);
}

void Hero::set_pos(sf::Vector2i value)
{
    hero_pos = value;
}

void Hero::move(sf::Vector2i value)
{
    hero_pos += value;
}

sf::Vector2i Hero::getPosition() const
{
    return hero_pos;
}

void Hero::draw(sf::RenderWindow& window)
{
    window.draw(hero_sprite);
}
