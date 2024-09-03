#include "Player.h"
#include <string>


Player::Player(std::string set_icon, System::Drawing::Color set_colour) {

    this->icon = set_icon;

    this->colour = set_colour;
}

 System::Drawing::Color Player::get_colour(){
    return colour;
}

System::String^ Player::get_icon() {
    return gcnew System::String(this->icon.c_str());
}

System::String^ Player::get_turn_name() {
    System::String^ player_icon = this->get_icon();
    System::String^ name = "Player " + player_icon + "'s turn!";
    return name;
}

int Player::get_wins() {
    return this->wins;
}

void Player::reset_wins() {
    this->wins = 0;
}

void Player::update_wins() {
    this->wins += 1;
}


