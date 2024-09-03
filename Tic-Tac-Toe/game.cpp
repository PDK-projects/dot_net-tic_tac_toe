#include "MyGame.h"
#include <iostream>
#include "Player.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int  main(array<String^>^ args) {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    std::array<Player, 2> players = { Player("x", System::Drawing::Color::Tomato), Player("o", System::Drawing::Color::LightSeaGreen)};

    TicTacToe::MyGame game(players);
    Application::Run(% game);

    return true;
}

