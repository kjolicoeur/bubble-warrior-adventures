#pragma once
#include <memory>
#include "Camera.hpp"
#include "MapHandler.hpp"
#include "Player.hpp"
#include "State.hpp"

class PlayScreen final : public State {
public:
    explicit PlayScreen(sf::RenderWindow& window);
    void handleEvent(sf::Event& e) override;
    void update(float delta) override;
    void draw(sf::RenderWindow& window) override;

    void updateOverlay();
private:
    Camera _camera;
    Map _map; // Testing (should use a MapHandler)
    Player _player;
    sf::Clock _overlayUpdate;
    std::shared_ptr<MapHandler> _mapHandler;
};
