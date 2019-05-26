#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED

#include <SFML/Network/Http.hpp>
#include <SFML/System/Clock.hpp>

class Engine
{
    sf::Http http;
    sf::Http::Request request;
    sf::Http::Response response;
    std::string cookie;
    std::string pid;
    std::string ev;
    std::string lastch;
    std::string lastcch;
    std::string bseq;
    std::string pdir;
    sf::Clock clock;
    sf::Time last_clock;

    void send_command(const std::string& command);
    void process_response(const std::string& body);
    void process_line(const std::string& line);

public:
    Engine();
    sf::Time clock_restart();

    void login(const std::string& login, const std::string& password);
    void logout();

    void load_game();
};

#endif // ENGINE_HPP_INCLUDED
