#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vcclr.h>

/// <summary>
/// Represents a player of the game
/// </summary>
class Player {

public:

    /// <summary>
    /// Creates an instance of the games player
    /// </summary>
    /// <param name="set_icon">To be set as associated icon ('x' or 'o')</param>
    /// <param name="set_colour">To be set as the associated colour</param>
    Player(std::string set_icon, System::Drawing::Color set_colour);
   
    /// <summary>
    /// Retrieves the associated colour for the player
    /// </summary>
    /// <returns>players colour</returns>
    System::Drawing::Color get_colour();

    /// <summary>
    /// Retrieves players accociated icon
    /// </summary>
    /// <returns>players icon</returns>
    System::String^ get_icon();

    /// <summary>
    ///  Uses 'Player' and the players icon to create a name
    /// </summary>
    /// <returns>The players associated name to be displayed</returns>
    System::String^ get_turn_name();

    /// <summary>
    /// Retrieve the number of wins the player has achieved
    /// </summary>
    /// <returns>wins</returns>
    int get_wins();

    /// <summary>
   /// Reset number of wins to zero
   /// </summary>
    void reset_wins();

    /// <summary>
    /// Updates wins by an increment of 1
    /// </summary>
    void update_wins();

private:

    /// <summary>
    /// Players Icon (x or o)
    /// </summary>
    std::string icon;

    /// <summary>
    /// Number of Wins Player has achieved
    /// </summary>
    int wins = 0;

    /// <summary>
    /// Colour associated with player
    /// </summary>
    gcroot<System::Drawing::Color> colour;
};

#endif