#pragma once
#include "Player.h"
#include <array>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyGame
	/// </summary>
	public ref class MyGame : public System::Windows::Forms::Form
	{

	public:

		/// <summary>
		/// Index for Player 1
		/// </summary>
		static const int player_1_index = 0;

		/// <summary>
		/// Index for Player 2
		/// </summary>
		static const int player_2_index = 1;

		/// <summary>
		/// Initiate Windows form for Game
		/// </summary>
		/// <param name="new_players">Players involved in game</param>
		MyGame(std::array<Player, 2>& new_players);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private:

		//Windows Form Variables
		System::Windows::Forms::Label^ title_label1;
		System::Windows::Forms::Label^ title_label2;
		System::Windows::Forms::Label^ title_label3;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
		System::Windows::Forms::Label^ score_label_o;
		System::Windows::Forms::Label^ score_label_x;
		System::Windows::Forms::Label^ score_value_x;
		System::Windows::Forms::Label^ score_value_o;
		System::Windows::Forms::Button^ reset_button;
		System::Windows::Forms::Button^ new_game_button;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
		System::Windows::Forms::Label^ dash_label_left;
		System::Windows::Forms::Label^ dash_label_right;
		System::Windows::Forms::Label^ player_label;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
		System::Windows::Forms::Label^ position00;
		System::Windows::Forms::Label^ position22;
		System::Windows::Forms::Label^ position21;
		System::Windows::Forms::Label^ position20;
		System::Windows::Forms::Label^ position12;
		System::Windows::Forms::Label^ position11;
		System::Windows::Forms::Label^ position10;
		System::Windows::Forms::Label^ position02;
		System::Windows::Forms::Label^ position01;
		System::Windows::Forms::Label^ header;

		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		
		/// <summary>
		///Represents blank space on game board . Should be a constant
		/// </summary>
		System::String^ blank_space = "-"; 

		/// <summary>
		/// Index of current players turn
		/// </summary>
		int current_turn = player_1_index;

		/// <summary>
		/// Whether the game is playable
		/// </summary>
		bool is_active_game;

		/// <summary>
		/// Game Players
		/// </summary>
		std::array<Player, 2>& players;

		/// <summary>
		/// Controls for Game Board Labels
		/// </summary>
		TableLayoutControlCollection^ controls;
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
#pragma endregion

	/// <summary>
	/// Updates Message Label
	/// </summary>
	/// <param name="message">Message to be displayed</param>
	void update_message(String^ message);

	/// <summary>
	/// Set the next players turn
	/// </summary>
	void set_next_turn();

	/// <summary>
	/// Check if label clicked is a valid move
	/// </summary>
	/// <param name="label_clicked">Label that has been clicked</param>
	/// <returns>Whether move is valid</returns>
	bool is_valid_move(Label^ label_clicked);

	/// <summary>
	/// Check if player wins 
	/// </summary>
	/// <param name="icon"></param>
	/// <returns></returns>
	bool check_win_condition(String^ icon);

	/// <summary>
	/// Sets the wins for player labels
	/// </summary>
	System::Void set_players_wins();

	/// <summary>
	/// When a position in game board is clicked
	/// </summary>
	/// <param name="sender">Sender</param>
	/// <param name="e">Event</param>
	System::Void position_Click(System::Object^ sender, System::EventArgs^ e);

	/// <summary>
	/// When the mouse hovers over a game button. Displays outline for button.
	/// </summary>
	/// <param name="sender">Sender</param>
	/// <param name="e">Event</param>
	System::Void button_mouse_hover(System::Object^ sender, System::EventArgs^ e);
	
	/// <summary>
	/// When mouse clicks (down) . Displays button pressed.
	/// </summary>
	/// <param name="sender">Sender</param>
	/// <param name="e">Event</param>
	System::Void button_mouse_down(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	
	/// <summary>
	/// Displays default button.
	/// </summary>
	/// <param name="sender">Sender</param>
	System::Void button_mouse_unset(System::Object^ sender);

	/// <summary>
	/// When mouse unhovers button. Gets default button
	/// </summary>
	/// <param name="sender">Sender</param>
	/// <param name="e">Event</param>
	/// <see cref= "button_mouse_unset" >Unset</see>
	System::Void button_mouse_leave(System::Object^ sender, System::EventArgs^ e);
	
	/// <summary>
	/// When mouse unclicked. Gets default button
	/// </summary>
	/// <param name="sender">Sender</param>
	/// <param name="e">Event</param>
	/// <see cref= "button_mouse_unset" >Unset</see>
	System::Void button_mouse_up(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	
	/// <summary>
	/// When New Game Button is clicked. The board will be reset.
	/// </summary>
	/// <param name="sender">Sender</param>
	/// <param name="e">Event</param>
	System::Void new_game_button_Click(System::Object^ sender, System::EventArgs^ e);
	
	/// <summary>
	/// Reset Button is clicked. The board and wins will be reset
	/// </summary>
	/// <param name="sender">Sender</param>
	/// <param name="e">Event</param>
	System::Void reset_button_Click(System::Object^ sender, System::EventArgs^ e);

	};
}
