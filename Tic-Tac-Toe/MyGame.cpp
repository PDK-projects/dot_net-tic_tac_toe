#include "MyGame.h"
#include <string>

using namespace TicTacToe;

MyGame::MyGame(std::array<Player, 2>& new_players) :players(new_players)   {
	InitializeComponent();

    this->controls = this->tableLayoutPanel1->Controls;

    this->is_active_game = false;

}

void MyGame::InitializeComponent(void)
{
    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyGame::typeid));
    this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
    this->position22 = (gcnew System::Windows::Forms::Label());
    this->position21 = (gcnew System::Windows::Forms::Label());
    this->position20 = (gcnew System::Windows::Forms::Label());
    this->position10 = (gcnew System::Windows::Forms::Label());
    this->position02 = (gcnew System::Windows::Forms::Label());
    this->position01 = (gcnew System::Windows::Forms::Label());
    this->position00 = (gcnew System::Windows::Forms::Label());
    this->position11 = (gcnew System::Windows::Forms::Label());
    this->position12 = (gcnew System::Windows::Forms::Label());
    this->header = (gcnew System::Windows::Forms::Label());
    this->title_label1 = (gcnew System::Windows::Forms::Label());
    this->title_label2 = (gcnew System::Windows::Forms::Label());
    this->title_label3 = (gcnew System::Windows::Forms::Label());
    this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
    this->score_value_o = (gcnew System::Windows::Forms::Label());
    this->score_value_x = (gcnew System::Windows::Forms::Label());
    this->score_label_o = (gcnew System::Windows::Forms::Label());
    this->score_label_x = (gcnew System::Windows::Forms::Label());
    this->reset_button = (gcnew System::Windows::Forms::Button());
    this->new_game_button = (gcnew System::Windows::Forms::Button());
    this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
    this->dash_label_right = (gcnew System::Windows::Forms::Label());
    this->player_label = (gcnew System::Windows::Forms::Label());
    this->dash_label_left = (gcnew System::Windows::Forms::Label());
    this->tableLayoutPanel1->SuspendLayout();
    this->tableLayoutPanel2->SuspendLayout();
    this->tableLayoutPanel3->SuspendLayout();
    this->SuspendLayout();
    // 
    // tableLayoutPanel1
    // 
    this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
    this->tableLayoutPanel1->ColumnCount = 3;
    this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        33.33333F)));
    this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        33.33334F)));
    this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        33.33334F)));
    this->tableLayoutPanel1->Controls->Add(this->position22, 2, 2);
    this->tableLayoutPanel1->Controls->Add(this->position21, 1, 2);
    this->tableLayoutPanel1->Controls->Add(this->position20, 0, 2);
    this->tableLayoutPanel1->Controls->Add(this->position10, 0, 1);
    this->tableLayoutPanel1->Controls->Add(this->position02, 2, 0);
    this->tableLayoutPanel1->Controls->Add(this->position01, 1, 0);
    this->tableLayoutPanel1->Controls->Add(this->position00, 0, 0);
    this->tableLayoutPanel1->Controls->Add(this->position11, 1, 1);
    this->tableLayoutPanel1->Controls->Add(this->position12, 2, 1);
    this->tableLayoutPanel1->Location = System::Drawing::Point(32, 98);
    this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
    this->tableLayoutPanel1->RowCount = 3;
    this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
    this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
    this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
    this->tableLayoutPanel1->Size = System::Drawing::Size(492, 429);
    this->tableLayoutPanel1->TabIndex = 0;
    // 
    // position22
    // 
    this->position22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->position22->AutoSize = true;
    this->position22->Font = (gcnew System::Drawing::Font(L"Ink Free", 48.18461F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->position22->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->position22->Location = System::Drawing::Point(330, 286);
    this->position22->Name = L"position22";
    this->position22->Size = System::Drawing::Size(159, 143);
    this->position22->TabIndex = 8;
    this->position22->Text = L"-";
    this->position22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    this->position22->Click += gcnew System::EventHandler(this, &MyGame::position_Click);
    // 
    // position21
    // 
    this->position21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->position21->AutoSize = true;
    this->position21->Font = (gcnew System::Drawing::Font(L"Ink Free", 48.18461F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->position21->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->position21->Location = System::Drawing::Point(166, 286);
    this->position21->Name = L"position21";
    this->position21->Size = System::Drawing::Size(158, 143);
    this->position21->TabIndex = 7;
    this->position21->Text = L"-";
    this->position21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    this->position21->Click += gcnew System::EventHandler(this, &MyGame::position_Click);
    // 
    // position20
    // 
    this->position20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->position20->AutoSize = true;
    this->position20->Font = (gcnew System::Drawing::Font(L"Ink Free", 48.18461F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->position20->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->position20->Location = System::Drawing::Point(3, 286);
    this->position20->Name = L"position20";
    this->position20->Size = System::Drawing::Size(157, 143);
    this->position20->TabIndex = 6;
    this->position20->Text = L"-";
    this->position20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    this->position20->Click += gcnew System::EventHandler(this, &MyGame::position_Click);
    // 
    // position10
    // 
    this->position10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->position10->AutoSize = true;
    this->position10->Font = (gcnew System::Drawing::Font(L"Ink Free", 48.18461F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->position10->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->position10->Location = System::Drawing::Point(3, 143);
    this->position10->Name = L"position10";
    this->position10->Size = System::Drawing::Size(157, 143);
    this->position10->TabIndex = 3;
    this->position10->Text = L"-";
    this->position10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    this->position10->Click += gcnew System::EventHandler(this, &MyGame::position_Click);
    // 
    // position02
    // 
    this->position02->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->position02->AutoSize = true;
    this->position02->Font = (gcnew System::Drawing::Font(L"Ink Free", 48.18461F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->position02->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->position02->Location = System::Drawing::Point(330, 0);
    this->position02->Name = L"position02";
    this->position02->Size = System::Drawing::Size(159, 143);
    this->position02->TabIndex = 2;
    this->position02->Text = L"-";
    this->position02->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    this->position02->Click += gcnew System::EventHandler(this, &MyGame::position_Click);
    // 
    // position01
    // 
    this->position01->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->position01->AutoSize = true;
    this->position01->Font = (gcnew System::Drawing::Font(L"Ink Free", 48.18461F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->position01->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->position01->Location = System::Drawing::Point(166, 0);
    this->position01->Name = L"position01";
    this->position01->Size = System::Drawing::Size(158, 143);
    this->position01->TabIndex = 1;
    this->position01->Text = L"-";
    this->position01->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    this->position01->Click += gcnew System::EventHandler(this, &MyGame::position_Click);
    // 
    // position00
    // 
    this->position00->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->position00->AutoSize = true;
    this->position00->Font = (gcnew System::Drawing::Font(L"Ink Free", 48.18461F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->position00->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->position00->Location = System::Drawing::Point(3, 0);
    this->position00->Name = L"position00";
    this->position00->Size = System::Drawing::Size(157, 143);
    this->position00->TabIndex = 0;
    this->position00->Text = L"-";
    this->position00->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    this->position00->Click += gcnew System::EventHandler(this, &MyGame::position_Click);
    // 
    // position11
    // 
    this->position11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->position11->AutoSize = true;
    this->position11->Font = (gcnew System::Drawing::Font(L"Ink Free", 48.18461F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->position11->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->position11->Location = System::Drawing::Point(166, 143);
    this->position11->Name = L"position11";
    this->position11->Size = System::Drawing::Size(158, 143);
    this->position11->TabIndex = 4;
    this->position11->Text = L"-";
    this->position11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    this->position11->Click += gcnew System::EventHandler(this, &MyGame::position_Click);
    // 
    // position12
    // 
    this->position12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->position12->AutoSize = true;
    this->position12->Font = (gcnew System::Drawing::Font(L"Ink Free", 48.18461F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->position12->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->position12->Location = System::Drawing::Point(330, 143);
    this->position12->Name = L"position12";
    this->position12->Size = System::Drawing::Size(159, 143);
    this->position12->TabIndex = 5;
    this->position12->Text = L"-";
    this->position12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    this->position12->Click += gcnew System::EventHandler(this, &MyGame::position_Click);
    // 
    // header
    // 
    this->header->AutoSize = true;
    this->header->BackColor = System::Drawing::Color::Transparent;
    this->header->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->header->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->header->Location = System::Drawing::Point(592, 68);
    this->header->Name = L"header";
    this->header->Size = System::Drawing::Size(136, 16);
    this->header->TabIndex = 1;
    this->header->Text = L"Welcome to Game!";
    // 
    // title_label1
    // 
    this->title_label1->AutoSize = true;
    this->title_label1->BackColor = System::Drawing::Color::Transparent;
    this->title_label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->title_label1->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->title_label1->ImageKey = L"(none)";
    this->title_label1->Location = System::Drawing::Point(40, 9);
    this->title_label1->Name = L"title_label1";
    this->title_label1->Size = System::Drawing::Size(139, 75);
    this->title_label1->TabIndex = 2;
    this->title_label1->Text = L"Tic";
    // 
    // title_label2
    // 
    this->title_label2->AutoSize = true;
    this->title_label2->BackColor = System::Drawing::Color::Transparent;
    this->title_label2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->title_label2->ForeColor = System::Drawing::Color::Tomato;
    this->title_label2->ImageKey = L"(none)";
    this->title_label2->Location = System::Drawing::Point(198, 9);
    this->title_label2->Name = L"title_label2";
    this->title_label2->Size = System::Drawing::Size(154, 75);
    this->title_label2->TabIndex = 3;
    this->title_label2->Text = L"Tac";
    // 
    // title_label3
    // 
    this->title_label3->AutoSize = true;
    this->title_label3->BackColor = System::Drawing::Color::Transparent;
    this->title_label3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->title_label3->ForeColor = System::Drawing::Color::LightSeaGreen;
    this->title_label3->ImageKey = L"(none)";
    this->title_label3->Location = System::Drawing::Point(358, 9);
    this->title_label3->Name = L"title_label3";
    this->title_label3->Size = System::Drawing::Size(179, 75);
    this->title_label3->TabIndex = 4;
    this->title_label3->Text = L"Toe!";
    // 
    // tableLayoutPanel2
    // 
    this->tableLayoutPanel2->BackColor = System::Drawing::Color::Transparent;
    this->tableLayoutPanel2->ColumnCount = 2;
    this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        50)));
    this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        50)));
    this->tableLayoutPanel2->Controls->Add(this->score_value_o, 1, 1);
    this->tableLayoutPanel2->Controls->Add(this->score_value_x, 0, 1);
    this->tableLayoutPanel2->Controls->Add(this->score_label_o, 1, 0);
    this->tableLayoutPanel2->Controls->Add(this->score_label_x, 0, 0);
    this->tableLayoutPanel2->Location = System::Drawing::Point(549, 173);
    this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
    this->tableLayoutPanel2->RowCount = 2;
    this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 70)));
    this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 30)));
    this->tableLayoutPanel2->Size = System::Drawing::Size(200, 100);
    this->tableLayoutPanel2->TabIndex = 5;
    // 
    // score_value_o
    // 
    this->score_value_o->AutoSize = true;
    this->score_value_o->Dock = System::Windows::Forms::DockStyle::Fill;
    this->score_value_o->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.969231F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->score_value_o->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->score_value_o->Location = System::Drawing::Point(103, 70);
    this->score_value_o->Name = L"score_value_o";
    this->score_value_o->Size = System::Drawing::Size(94, 30);
    this->score_value_o->TabIndex = 3;
    this->score_value_o->Text = L"0";
    this->score_value_o->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // score_value_x
    // 
    this->score_value_x->AutoSize = true;
    this->score_value_x->Dock = System::Windows::Forms::DockStyle::Fill;
    this->score_value_x->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.969231F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->score_value_x->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->score_value_x->Location = System::Drawing::Point(3, 70);
    this->score_value_x->Name = L"score_value_x";
    this->score_value_x->Size = System::Drawing::Size(94, 30);
    this->score_value_x->TabIndex = 2;
    this->score_value_x->Text = L"0";
    this->score_value_x->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // score_label_o
    // 
    this->score_label_o->AutoSize = true;
    this->score_label_o->Dock = System::Windows::Forms::DockStyle::Fill;
    this->score_label_o->Font = (gcnew System::Drawing::Font(L"Ink Free", 19.93846F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->score_label_o->ForeColor = System::Drawing::Color::LightSeaGreen;
    this->score_label_o->Location = System::Drawing::Point(103, 0);
    this->score_label_o->Name = L"score_label_o";
    this->score_label_o->Size = System::Drawing::Size(94, 70);
    this->score_label_o->TabIndex = 1;
    this->score_label_o->Text = L"o";
    this->score_label_o->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // score_label_x
    // 
    this->score_label_x->AutoSize = true;
    this->score_label_x->Dock = System::Windows::Forms::DockStyle::Fill;
    this->score_label_x->Font = (gcnew System::Drawing::Font(L"Ink Free", 19.93846F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->score_label_x->ForeColor = System::Drawing::Color::Tomato;
    this->score_label_x->Location = System::Drawing::Point(3, 0);
    this->score_label_x->Name = L"score_label_x";
    this->score_label_x->Size = System::Drawing::Size(94, 70);
    this->score_label_x->TabIndex = 0;
    this->score_label_x->Text = L"x";
    this->score_label_x->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // reset_button
    // 
    this->reset_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->reset_button->BackColor = System::Drawing::Color::Transparent;
    this->reset_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->reset_button->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
    this->reset_button->FlatAppearance->BorderSize = 0;
    this->reset_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
    this->reset_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
    this->reset_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->reset_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reset_button.Image")));
    this->reset_button->Location = System::Drawing::Point(560, 448);
    this->reset_button->Margin = System::Windows::Forms::Padding(0);
    this->reset_button->Name = L"reset_button";
    this->reset_button->Size = System::Drawing::Size(55, 55);
    this->reset_button->TabIndex = 6;
    this->reset_button->UseVisualStyleBackColor = false;
    this->reset_button->Click += gcnew System::EventHandler(this, &MyGame::reset_button_Click);
    this->reset_button->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyGame::button_mouse_down);
    this->reset_button->MouseLeave += gcnew System::EventHandler(this, &MyGame::button_mouse_leave);
    this->reset_button->MouseHover += gcnew System::EventHandler(this, &MyGame::button_mouse_hover);
    this->reset_button->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyGame::button_mouse_up);
    // 
    // new_game_button
    // 
    this->new_game_button->BackColor = System::Drawing::Color::Transparent;
    this->new_game_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
    this->new_game_button->FlatAppearance->BorderSize = 0;
    this->new_game_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
    this->new_game_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
    this->new_game_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->new_game_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"new_game_button.Image")));
    this->new_game_button->Location = System::Drawing::Point(674, 448);
    this->new_game_button->MaximumSize = System::Drawing::Size(55, 55);
    this->new_game_button->Name = L"new_game_button";
    this->new_game_button->Size = System::Drawing::Size(55, 55);
    this->new_game_button->TabIndex = 7;
    this->new_game_button->UseVisualStyleBackColor = false;
    this->new_game_button->Click += gcnew System::EventHandler(this, &MyGame::new_game_button_Click);
    this->new_game_button->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyGame::button_mouse_down);
    this->new_game_button->MouseLeave += gcnew System::EventHandler(this, &MyGame::button_mouse_leave);
    this->new_game_button->MouseHover += gcnew System::EventHandler(this, &MyGame::button_mouse_hover);
    this->new_game_button->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyGame::button_mouse_up);
    // 
    // tableLayoutPanel3
    // 
    this->tableLayoutPanel3->BackColor = System::Drawing::Color::Transparent;
    this->tableLayoutPanel3->ColumnCount = 3;
    this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
        40)));
    this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
        100)));
    this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
        40)));
    this->tableLayoutPanel3->Controls->Add(this->dash_label_right, 2, 0);
    this->tableLayoutPanel3->Controls->Add(this->player_label, 1, 0);
    this->tableLayoutPanel3->Controls->Add(this->dash_label_left, 0, 0);
    this->tableLayoutPanel3->Location = System::Drawing::Point(549, 345);
    this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
    this->tableLayoutPanel3->RowCount = 1;
    this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
    this->tableLayoutPanel3->Size = System::Drawing::Size(199, 38);
    this->tableLayoutPanel3->TabIndex = 8;
    // 
    // dash_label_right
    // 
    this->dash_label_right->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->dash_label_right->AutoSize = true;
    this->dash_label_right->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->dash_label_right->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->dash_label_right->Location = System::Drawing::Point(162, 0);
    this->dash_label_right->Name = L"dash_label_right";
    this->dash_label_right->Size = System::Drawing::Size(34, 38);
    this->dash_label_right->TabIndex = 2;
    this->dash_label_right->Text = L"--";
    this->dash_label_right->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // player_label
    // 
    this->player_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->player_label->AutoSize = true;
    this->player_label->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->player_label->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->player_label->Location = System::Drawing::Point(43, 0);
    this->player_label->Name = L"player_label";
    this->player_label->Size = System::Drawing::Size(113, 38);
    this->player_label->TabIndex = 1;
    this->player_label->Text = L"-------";
    this->player_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // dash_label_left
    // 
    this->dash_label_left->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->dash_label_left->AutoSize = true;
    this->dash_label_left->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->dash_label_left->ForeColor = System::Drawing::Color::WhiteSmoke;
    this->dash_label_left->Location = System::Drawing::Point(3, 0);
    this->dash_label_left->Name = L"dash_label_left";
    this->dash_label_left->Size = System::Drawing::Size(34, 38);
    this->dash_label_left->TabIndex = 0;
    this->dash_label_left->Text = L"--";
    this->dash_label_left->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // MyGame
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
    this->ClientSize = System::Drawing::Size(782, 551);
    this->Controls->Add(this->tableLayoutPanel3);
    this->Controls->Add(this->new_game_button);
    this->Controls->Add(this->reset_button);
    this->Controls->Add(this->tableLayoutPanel2);
    this->Controls->Add(this->title_label3);
    this->Controls->Add(this->title_label2);
    this->Controls->Add(this->title_label1);
    this->Controls->Add(this->header);
    this->Controls->Add(this->tableLayoutPanel1);
    this->Name = L"MyGame";
    this->Text = L"MyGame";
    this->tableLayoutPanel1->ResumeLayout(false);
    this->tableLayoutPanel1->PerformLayout();
    this->tableLayoutPanel2->ResumeLayout(false);
    this->tableLayoutPanel2->PerformLayout();
    this->tableLayoutPanel3->ResumeLayout(false);
    this->tableLayoutPanel3->PerformLayout();
    this->ResumeLayout(false);
    this->PerformLayout();

}

void MyGame::update_message(String^ message) {

    this->header->Text = message;
}

void MyGame::set_next_turn() {

    current_turn = (current_turn == player_1_index) ? player_2_index : player_1_index;

    this->player_label->Text = players[current_turn].get_turn_name();
}

bool MyGame::is_valid_move(Label^ label_clicked) {
        
    System::String^ label_value = label_clicked->Text;

    bool return_value = (label_value == blank_space) ? true : false;

    return return_value;
}

bool MyGame::check_win_condition(String^ icon) {
    String^ position00 = this->position00->Text;
    String^ position01 = this->position01->Text;
    String^ position02 = this->position02->Text;
    String^ position10 = this->position10->Text;
    String^ position11 = this->position11->Text;
    String^ position12 = this->position12->Text;
    String^ position20 = this->position20->Text;
    String^ position21 = this->position21->Text;
    String^ position22 = this->position22->Text;

   array <array<String^>^>^  lines = {
        {position00, position01, position02},
        {position10, position11, position12},
        {position20, position21, position22},
        {position00, position01, position02},
        {position00, position10, position20},
        {position01, position11, position21},
        {position02, position12, position22},
        {position00, position11, position22},
        {position02, position11, position20}
    } ;

   
    for (int i = 0; i < 9; i++) {
        
        bool is_win = (lines[i][0] == icon && lines[i][1] == icon && lines[i][2] == icon) ? true : false;

        if (is_win == true) {
            return true;
        }
    }

    return false;
}

void MyGame::set_players_wins() {
    this->score_value_x->Text = (players[MyGame::player_1_index].get_wins()).ToString();
    this->score_value_o->Text = (players[MyGame::player_2_index].get_wins()).ToString();
}

void MyGame::position_Click(System::Object^ sender, System::EventArgs^ e) {

    Player& current_player = players[current_turn];

    if (is_active_game == true) {

        Label^ label_clicked = safe_cast<Label^> (sender);

        String^ icon = current_player.get_icon();

        bool is_valid_move = is_valid_move(label_clicked);

        if (is_valid_move == true) {
            label_clicked->Text = icon;
            label_clicked->ForeColor = current_player.get_colour();

            if (check_win_condition(icon) == true) {
                update_message("Winner");

                current_player.update_wins();
                
                this->set_players_wins();

             
                is_active_game = false;

            }
            else {

                set_next_turn();
            }

        }
        else {
            update_message("Invalid Move");

        }

    }
}

void MyGame::button_mouse_hover(System::Object^ sender, System::EventArgs^ e) {
    ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyGame::typeid));
    Button^ button_clicked = safe_cast<Button^> (sender);
    button_clicked->BackgroundImage = gcnew Bitmap("./images/button_hovered.png");
}

void MyGame::button_mouse_down(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyGame::typeid));
    Button^ button_clicked = safe_cast<Button^> (sender);
    button_clicked->BackgroundImage = gcnew Bitmap("./images/button_clicked.png");
}

void MyGame::button_mouse_unset(System::Object^ sender) {
    Button^ button = safe_cast<Button^> (sender);
    button->BackgroundImage = nullptr;
}

void MyGame::button_mouse_leave(System::Object^ sender, System::EventArgs^ e) {
    button_mouse_unset(sender);
}

void MyGame::button_mouse_up(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    button_mouse_unset(sender);
}

void MyGame::new_game_button_Click(System::Object^ sender, System::EventArgs^ e) {

    for (int i = 0; i < (this->controls->Count); i++) {
        this->controls[i]->Text = this->blank_space;
        this->controls[i]->ForeColor = Color::WhiteSmoke;
    }

    this->current_turn = MyGame::player_1_index;
    this->is_active_game = true;
    this->player_label->Text = players[current_turn].get_turn_name();

}

void MyGame::reset_button_Click(System::Object^ sender, System::EventArgs^ e) {

    for (int i = 0; i < players.size(); i++) {
        players[i].reset_wins();
    }

    this->set_players_wins();
}

