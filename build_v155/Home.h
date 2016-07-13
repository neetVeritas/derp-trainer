#pragma once
#include "inc.h"
#include "Library.cpp"

namespace Derp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  title_bar;
	protected: 
	private: System::Windows::Forms::Label^  title;
	private: System::Windows::Forms::Panel^  Minimize;
	private: System::Windows::Forms::Panel^  Exit;
	private: System::Windows::Forms::Panel^  statistics_tab;
	private: System::Windows::Forms::Label^  statistics_tab_label;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  statistics_container;

	private: System::Windows::Forms::CheckBox^  stats_hook_check;
	private: System::Windows::Forms::Label^  people_count_label;
	private: System::Windows::Forms::Label^  mob_count_label;
	private: System::Windows::Forms::PictureBox^  logo;

	private: System::Windows::Forms::ListBox^  tab_list;
	private: System::Windows::Forms::Panel^  notes_container;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::RichTextBox^  notes_container_content;

	private: System::Windows::Forms::Panel^  credits_container;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::LinkLabel^  credits_link_chubbz;
	private: System::Windows::Forms::LinkLabel^  credits_link_veritas;
	private: System::Windows::Forms::Panel^  hacks_container;
	private: System::Windows::Forms::CheckBox^  breath_check;

	private: System::Windows::Forms::CheckBox^  ua_check;
	private: System::Windows::Forms::CheckBox^  tubi_check;
	private: System::Windows::Forms::Panel^  hotkey_container;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::CheckBox^  hotkey_check;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  bot_container;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  bot_keys_loot;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  bot_keys_attack;
	private: System::Windows::Forms::CheckBox^  bot_loot_check;
	private: System::Windows::Forms::CheckBox^  bot_attack_check;

	private: System::ComponentModel::BackgroundWorker^  Hotkeys;
	private: System::ComponentModel::BackgroundWorker^  Cycle;
	private: System::ComponentModel::BackgroundWorker^  Hacks;
	private: System::ComponentModel::BackgroundWorker^  Stats;
	private: System::ComponentModel::BackgroundWorker^  Bot;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->title_bar = (gcnew System::Windows::Forms::Panel());
			this->title = (gcnew System::Windows::Forms::Label());
			this->Minimize = (gcnew System::Windows::Forms::Panel());
			this->Exit = (gcnew System::Windows::Forms::Panel());
			this->statistics_tab = (gcnew System::Windows::Forms::Panel());
			this->statistics_tab_label = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->statistics_container = (gcnew System::Windows::Forms::Panel());
			this->stats_hook_check = (gcnew System::Windows::Forms::CheckBox());
			this->people_count_label = (gcnew System::Windows::Forms::Label());
			this->mob_count_label = (gcnew System::Windows::Forms::Label());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->tab_list = (gcnew System::Windows::Forms::ListBox());
			this->notes_container = (gcnew System::Windows::Forms::Panel());
			this->notes_container_content = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->credits_container = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->credits_link_chubbz = (gcnew System::Windows::Forms::LinkLabel());
			this->credits_link_veritas = (gcnew System::Windows::Forms::LinkLabel());
			this->hacks_container = (gcnew System::Windows::Forms::Panel());
			this->breath_check = (gcnew System::Windows::Forms::CheckBox());
			this->ua_check = (gcnew System::Windows::Forms::CheckBox());
			this->tubi_check = (gcnew System::Windows::Forms::CheckBox());
			this->hotkey_container = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->hotkey_check = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bot_container = (gcnew System::Windows::Forms::Panel());
			this->bot_loot_check = (gcnew System::Windows::Forms::CheckBox());
			this->bot_attack_check = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->bot_keys_loot = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->bot_keys_attack = (gcnew System::Windows::Forms::ComboBox());
			this->Hotkeys = (gcnew System::ComponentModel::BackgroundWorker());
			this->Cycle = (gcnew System::ComponentModel::BackgroundWorker());
			this->Hacks = (gcnew System::ComponentModel::BackgroundWorker());
			this->Stats = (gcnew System::ComponentModel::BackgroundWorker());
			this->Bot = (gcnew System::ComponentModel::BackgroundWorker());
			this->title_bar->SuspendLayout();
			this->statistics_tab->SuspendLayout();
			this->statistics_container->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->logo))->BeginInit();
			this->notes_container->SuspendLayout();
			this->credits_container->SuspendLayout();
			this->hacks_container->SuspendLayout();
			this->hotkey_container->SuspendLayout();
			this->bot_container->SuspendLayout();
			this->SuspendLayout();
			// 
			// title_bar
			// 
			this->title_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->title_bar->Controls->Add(this->title);
			this->title_bar->ForeColor = System::Drawing::Color::GhostWhite;
			this->title_bar->Location = System::Drawing::Point(0, 0);
			this->title_bar->Name = L"title_bar";
			this->title_bar->Size = System::Drawing::Size(300, 18);
			this->title_bar->TabIndex = 0;
			this->title_bar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::title_bar_MouseDown);
			this->title_bar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::title_bar_MouseMove);
			this->title_bar->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::title_bar_MouseUp);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(11, 2);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(114, 13);
			this->title->TabIndex = 10;
			this->title->Text = L"Derp Trainer Home";
			this->title->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::title_bar_MouseDown);
			this->title->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::title_bar_MouseMove);
			this->title->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::title_bar_MouseUp);
			// 
			// Minimize
			// 
			this->Minimize->BackColor = System::Drawing::Color::SlateGray;
			this->Minimize->Location = System::Drawing::Point(229, -6);
			this->Minimize->Name = L"Minimize";
			this->Minimize->Size = System::Drawing::Size(29, 17);
			this->Minimize->TabIndex = 9;
			this->Minimize->Click += gcnew System::EventHandler(this, &Home::Minimize_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Brown;
			this->Exit->Location = System::Drawing::Point(266, -6);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(29, 17);
			this->Exit->TabIndex = 8;
			this->Exit->Click += gcnew System::EventHandler(this, &Home::Exit_Click);
			// 
			// statistics_tab
			// 
			this->statistics_tab->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->statistics_tab->Controls->Add(this->statistics_tab_label);
			this->statistics_tab->Cursor = System::Windows::Forms::Cursors::Hand;
			this->statistics_tab->Location = System::Drawing::Point(223, 57);
			this->statistics_tab->Name = L"statistics_tab";
			this->statistics_tab->Size = System::Drawing::Size(66, 23);
			this->statistics_tab->TabIndex = 10;
			// 
			// statistics_tab_label
			// 
			this->statistics_tab_label->AutoSize = true;
			this->statistics_tab_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->statistics_tab_label->Location = System::Drawing::Point(4, 5);
			this->statistics_tab_label->Name = L"statistics_tab_label";
			this->statistics_tab_label->Size = System::Drawing::Size(59, 13);
			this->statistics_tab_label->TabIndex = 0;
			this->statistics_tab_label->Text = L"Statistics";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel3->ForeColor = System::Drawing::Color::GhostWhite;
			this->panel3->Location = System::Drawing::Point(0, 79);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(300, 1);
			this->panel3->TabIndex = 11;
			// 
			// statistics_container
			// 
			this->statistics_container->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->statistics_container->Controls->Add(this->stats_hook_check);
			this->statistics_container->Controls->Add(this->people_count_label);
			this->statistics_container->Controls->Add(this->mob_count_label);
			this->statistics_container->Location = System::Drawing::Point(0, 81);
			this->statistics_container->Name = L"statistics_container";
			this->statistics_container->Size = System::Drawing::Size(300, 26);
			this->statistics_container->TabIndex = 12;
			// 
			// stats_hook_check
			// 
			this->stats_hook_check->AutoSize = true;
			this->stats_hook_check->Enabled = false;
			this->stats_hook_check->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stats_hook_check->Location = System::Drawing::Point(239, 4);
			this->stats_hook_check->Name = L"stats_hook_check";
			this->stats_hook_check->Size = System::Drawing::Size(49, 17);
			this->stats_hook_check->TabIndex = 2;
			this->stats_hook_check->Text = L"Hook";
			this->stats_hook_check->UseVisualStyleBackColor = true;
			// 
			// people_count_label
			// 
			this->people_count_label->AutoSize = true;
			this->people_count_label->Location = System::Drawing::Point(95, 6);
			this->people_count_label->Name = L"people_count_label";
			this->people_count_label->Size = System::Drawing::Size(86, 13);
			this->people_count_label->TabIndex = 1;
			this->people_count_label->Text = L"People Count: ...";
			// 
			// mob_count_label
			// 
			this->mob_count_label->AutoSize = true;
			this->mob_count_label->Location = System::Drawing::Point(7, 6);
			this->mob_count_label->Name = L"mob_count_label";
			this->mob_count_label->Size = System::Drawing::Size(74, 13);
			this->mob_count_label->TabIndex = 0;
			this->mob_count_label->Text = L"Mob Count: ...";
			// 
			// logo
			// 
			this->logo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"logo.Image")));
			this->logo->Location = System::Drawing::Point(12, 27);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(205, 44);
			this->logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->logo->TabIndex = 13;
			this->logo->TabStop = false;
			this->logo->Click += gcnew System::EventHandler(this, &Home::logo_Click);
			// 
			// tab_list
			// 
			this->tab_list->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->tab_list->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tab_list->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tab_list->ForeColor = System::Drawing::Color::GhostWhite;
			this->tab_list->FormattingEnabled = true;
			this->tab_list->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Notes", L"Credits", L"Hacks", L"Hotkeys", L"Bot"});
			this->tab_list->Location = System::Drawing::Point(2, 125);
			this->tab_list->Name = L"tab_list";
			this->tab_list->Size = System::Drawing::Size(77, 65);
			this->tab_list->TabIndex = 14;
			this->tab_list->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::tab_list_SelectedIndexChanged);
			// 
			// notes_container
			// 
			this->notes_container->BackColor = System::Drawing::SystemColors::Control;
			this->notes_container->Controls->Add(this->notes_container_content);
			this->notes_container->Location = System::Drawing::Point(300, 300);
			this->notes_container->Name = L"notes_container";
			this->notes_container->Size = System::Drawing::Size(225, 108);
			this->notes_container->TabIndex = 15;
			// 
			// notes_container_content
			// 
			this->notes_container_content->BackColor = System::Drawing::SystemColors::Control;
			this->notes_container_content->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->notes_container_content->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->notes_container_content->Location = System::Drawing::Point(0, 0);
			this->notes_container_content->Name = L"notes_container_content";
			this->notes_container_content->ReadOnly = true;
			this->notes_container_content->Size = System::Drawing::Size(225, 108);
			this->notes_container_content->TabIndex = 0;
			this->notes_container_content->Text = resources->GetString(L"notes_container_content.Text");
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel1->Location = System::Drawing::Point(0, 125);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(2, 65);
			this->panel1->TabIndex = 16;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel2->ForeColor = System::Drawing::Color::GhostWhite;
			this->panel2->Location = System::Drawing::Point(0, 232);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(300, 3);
			this->panel2->TabIndex = 17;
			// 
			// credits_container
			// 
			this->credits_container->BackColor = System::Drawing::SystemColors::Control;
			this->credits_container->Controls->Add(this->label2);
			this->credits_container->Controls->Add(this->label1);
			this->credits_container->Controls->Add(this->credits_link_chubbz);
			this->credits_container->Controls->Add(this->credits_link_veritas);
			this->credits_container->Location = System::Drawing::Point(300, 300);
			this->credits_container->Name = L"credits_container";
			this->credits_container->Size = System::Drawing::Size(225, 108);
			this->credits_container->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(83, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"# pointers and scripts";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(83, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"# trainer, design, content";
			// 
			// credits_link_chubbz
			// 
			this->credits_link_chubbz->AutoSize = true;
			this->credits_link_chubbz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->credits_link_chubbz->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->credits_link_chubbz->LinkColor = System::Drawing::SystemColors::MenuHighlight;
			this->credits_link_chubbz->Location = System::Drawing::Point(25, 59);
			this->credits_link_chubbz->Name = L"credits_link_chubbz";
			this->credits_link_chubbz->Size = System::Drawing::Size(55, 15);
			this->credits_link_chubbz->TabIndex = 1;
			this->credits_link_chubbz->TabStop = true;
			this->credits_link_chubbz->Text = L"Chubbz";
			this->credits_link_chubbz->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Home::credits_link_chubbz_LinkClicked);
			// 
			// credits_link_veritas
			// 
			this->credits_link_veritas->AutoSize = true;
			this->credits_link_veritas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->credits_link_veritas->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->credits_link_veritas->LinkColor = System::Drawing::SystemColors::MenuHighlight;
			this->credits_link_veritas->Location = System::Drawing::Point(25, 37);
			this->credits_link_veritas->Name = L"credits_link_veritas";
			this->credits_link_veritas->Size = System::Drawing::Size(51, 15);
			this->credits_link_veritas->TabIndex = 0;
			this->credits_link_veritas->TabStop = true;
			this->credits_link_veritas->Text = L"Veritas";
			this->credits_link_veritas->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Home::credits_link_veritas_LinkClicked);
			// 
			// hacks_container
			// 
			this->hacks_container->BackColor = System::Drawing::SystemColors::Control;
			this->hacks_container->Controls->Add(this->breath_check);
			this->hacks_container->Controls->Add(this->ua_check);
			this->hacks_container->Controls->Add(this->tubi_check);
			this->hacks_container->Location = System::Drawing::Point(300, 300);
			this->hacks_container->Name = L"hacks_container";
			this->hacks_container->Size = System::Drawing::Size(225, 108);
			this->hacks_container->TabIndex = 19;
			// 
			// breath_check
			// 
			this->breath_check->AutoSize = true;
			this->breath_check->Enabled = false;
			this->breath_check->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->breath_check->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->breath_check->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->breath_check->Location = System::Drawing::Point(21, 68);
			this->breath_check->Name = L"breath_check";
			this->breath_check->Size = System::Drawing::Size(80, 17);
			this->breath_check->TabIndex = 2;
			this->breath_check->Text = L"No Breath";
			this->breath_check->UseVisualStyleBackColor = true;
			// 
			// ua_check
			// 
			this->ua_check->AutoSize = true;
			this->ua_check->Enabled = false;
			this->ua_check->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ua_check->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ua_check->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ua_check->Location = System::Drawing::Point(21, 45);
			this->ua_check->Name = L"ua_check";
			this->ua_check->Size = System::Drawing::Size(116, 17);
			this->ua_check->TabIndex = 1;
			this->ua_check->Text = L"Unlimited Attack";
			this->ua_check->UseVisualStyleBackColor = true;
			// 
			// tubi_check
			// 
			this->tubi_check->AutoSize = true;
			this->tubi_check->Enabled = false;
			this->tubi_check->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tubi_check->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tubi_check->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->tubi_check->Location = System::Drawing::Point(21, 22);
			this->tubi_check->Name = L"tubi_check";
			this->tubi_check->Size = System::Drawing::Size(85, 17);
			this->tubi_check->TabIndex = 0;
			this->tubi_check->Text = L"Super Tubi";
			this->tubi_check->UseVisualStyleBackColor = true;
			// 
			// hotkey_container
			// 
			this->hotkey_container->BackColor = System::Drawing::SystemColors::Control;
			this->hotkey_container->Controls->Add(this->label7);
			this->hotkey_container->Controls->Add(this->hotkey_check);
			this->hotkey_container->Controls->Add(this->label6);
			this->hotkey_container->Controls->Add(this->label5);
			this->hotkey_container->Controls->Add(this->label4);
			this->hotkey_container->Controls->Add(this->label3);
			this->hotkey_container->Location = System::Drawing::Point(300, 300);
			this->hotkey_container->Name = L"hotkey_container";
			this->hotkey_container->Size = System::Drawing::Size(225, 108);
			this->hotkey_container->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(71)), 
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->label7->Location = System::Drawing::Point(129, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"F5: Auto Loot";
			// 
			// hotkey_check
			// 
			this->hotkey_check->AutoSize = true;
			this->hotkey_check->Enabled = false;
			this->hotkey_check->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hotkey_check->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->hotkey_check->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->hotkey_check->Location = System::Drawing::Point(143, 82);
			this->hotkey_check->Name = L"hotkey_check";
			this->hotkey_check->Size = System::Drawing::Size(62, 17);
			this->hotkey_check->TabIndex = 7;
			this->hotkey_check->Text = L"Enable";
			this->hotkey_check->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(71)), 
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->label6->Location = System::Drawing::Point(17, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"F4: Auto Attack";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label5->Location = System::Drawing::Point(17, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"F3: No Breath";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label4->Location = System::Drawing::Point(17, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"F2: Unlimited Attack";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label3->Location = System::Drawing::Point(17, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"F1: Super Tubi";
			// 
			// bot_container
			// 
			this->bot_container->BackColor = System::Drawing::SystemColors::Control;
			this->bot_container->Controls->Add(this->bot_loot_check);
			this->bot_container->Controls->Add(this->bot_attack_check);
			this->bot_container->Controls->Add(this->label9);
			this->bot_container->Controls->Add(this->bot_keys_loot);
			this->bot_container->Controls->Add(this->label8);
			this->bot_container->Controls->Add(this->bot_keys_attack);
			this->bot_container->Location = System::Drawing::Point(72, 115);
			this->bot_container->Name = L"bot_container";
			this->bot_container->Size = System::Drawing::Size(225, 108);
			this->bot_container->TabIndex = 21;
			// 
			// bot_loot_check
			// 
			this->bot_loot_check->AutoSize = true;
			this->bot_loot_check->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bot_loot_check->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bot_loot_check->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->bot_loot_check->Location = System::Drawing::Point(134, 79);
			this->bot_loot_check->Name = L"bot_loot_check";
			this->bot_loot_check->Size = System::Drawing::Size(12, 11);
			this->bot_loot_check->TabIndex = 5;
			this->bot_loot_check->UseVisualStyleBackColor = true;
			// 
			// bot_attack_check
			// 
			this->bot_attack_check->AutoSize = true;
			this->bot_attack_check->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bot_attack_check->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bot_attack_check->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->bot_attack_check->Location = System::Drawing::Point(134, 28);
			this->bot_attack_check->Name = L"bot_attack_check";
			this->bot_attack_check->Size = System::Drawing::Size(12, 11);
			this->bot_attack_check->TabIndex = 4;
			this->bot_attack_check->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label9->Location = System::Drawing::Point(27, 59);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Auto Loot";
			// 
			// bot_keys_loot
			// 
			this->bot_keys_loot->BackColor = System::Drawing::Color::White;
			this->bot_keys_loot->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->bot_keys_loot->FormattingEnabled = true;
			this->bot_keys_loot->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Z"});
			this->bot_keys_loot->Location = System::Drawing::Point(21, 75);
			this->bot_keys_loot->Name = L"bot_keys_loot";
			this->bot_keys_loot->Size = System::Drawing::Size(107, 21);
			this->bot_keys_loot->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label8->Location = System::Drawing::Point(27, 8);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Auto Attack";
			// 
			// bot_keys_attack
			// 
			this->bot_keys_attack->BackColor = System::Drawing::Color::White;
			this->bot_keys_attack->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->bot_keys_attack->FormattingEnabled = true;
			this->bot_keys_attack->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"CTRL"});
			this->bot_keys_attack->Location = System::Drawing::Point(21, 24);
			this->bot_keys_attack->Name = L"bot_keys_attack";
			this->bot_keys_attack->Size = System::Drawing::Size(107, 21);
			this->bot_keys_attack->TabIndex = 0;
			// 
			// Hotkeys
			// 
			this->Hotkeys->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Home::Hotkeys_DoWork);
			// 
			// Cycle
			// 
			this->Cycle->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Home::Cycle_DoWork);
			// 
			// Hacks
			// 
			this->Hacks->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Home::Hacks_DoWork);
			// 
			// Stats
			// 
			this->Stats->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Home::Stats_DoWork);
			// 
			// Bot
			// 
			this->Bot->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Home::Bot_DoWork);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)), 
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->ClientSize = System::Drawing::Size(300, 235);
			this->Controls->Add(this->bot_container);
			this->Controls->Add(this->hotkey_container);
			this->Controls->Add(this->hacks_container);
			this->Controls->Add(this->credits_container);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->notes_container);
			this->Controls->Add(this->tab_list);
			this->Controls->Add(this->logo);
			this->Controls->Add(this->statistics_container);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->statistics_tab);
			this->Controls->Add(this->Minimize);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->title_bar);
			this->ForeColor = System::Drawing::Color::GhostWhite;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Derp . Home";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Home::Home_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->title_bar->ResumeLayout(false);
			this->title_bar->PerformLayout();
			this->statistics_tab->ResumeLayout(false);
			this->statistics_tab->PerformLayout();
			this->statistics_container->ResumeLayout(false);
			this->statistics_container->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->logo))->EndInit();
			this->notes_container->ResumeLayout(false);
			this->credits_container->ResumeLayout(false);
			this->credits_container->PerformLayout();
			this->hacks_container->ResumeLayout(false);
			this->hacks_container->PerformLayout();
			this->hotkey_container->ResumeLayout(false);
			this->hotkey_container->PerformLayout();
			this->bot_container->ResumeLayout(false);
			this->bot_container->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^  sender, System::EventArgs^  e);

	private: System::Void Home_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e);

	private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Minimize_Click(System::Object^  sender, System::EventArgs^  e);
	
	private: bool DRAGGING;
	private: Point pOFF;
	private: void getPos(System::Windows::Forms::MouseEventArgs^  e)
			 {
				 this->pOFF = Point(e->X, e->Y);
			 }
	private: void DRAG(System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 if( DRAGGING )
				 {
					 Point currentScreenPos = PointToScreen(e->Location);
					 Location = Point(currentScreenPos.X - this->pOFF.X, currentScreenPos.Y - this->pOFF.Y);
				 }
			 }
	private: System::Void title_bar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void title_bar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void title_bar_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);

	private: System::Void tab_list_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);

	private: System::Void logo_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void credits_link_veritas_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e);
	private: System::Void credits_link_chubbz_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e);

	private: System::Void Cycle_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);

	private: System::Void Hacks_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);

	private: System::Void Hotkeys_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);

	private: System::Void Bot_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);

	private: System::Void Stats_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);
};
}
