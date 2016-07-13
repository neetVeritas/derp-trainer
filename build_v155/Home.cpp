#include "Home.h"

/*
	HWND WINAPI FindWindow(
		_In_opt_  LPCTSTR lpClassName,
		_In_opt_  LPCTSTR lpWindowName
	);
*/

/*
	BOOL WINAPI PostMessage(
		__in_opt  HWND hWnd,
		__in      UINT Msg,
		__in      WPARAM wParam,
		__in      LPARAM lParam
	);
*/

using namespace Derp;

#pragma region TRAINER
namespace Hacks
{
	static bool bTubi = false,
				bUA = false,
				bBreath = false;

	static void Tubi()
	{ // thread for no hiccups
		while(true)
		{
			if( bTubi )
			{
				Library::Hacks::Tubi();
				Sleep(1);
			}
			else
				Sleep(1250);
		}
	}
	static void UA()
	{ // thread for no hiccups
		while(true)
		{
			if( bUA )
			{
				Library::Hacks::UA();
				Sleep(250); // delay for 0.25 seconds before next check
			}
			else
				Sleep(1250);
		}
	}
	static void Breath()
	{ // thread for no hiccups
		while(true)
		{
			if( bBreath )
			{
				Library::Hacks::Breath();
				Sleep(250); // delay for 0.25 seconds before next check
			}
			else
				Sleep(1250);
		}
	}
}
namespace Bot
{
	namespace Tools
	{
		void SendKey(UINT key)
		{
			PostMessage(FindWindow("MapleStoryClass", 0), WM_KEYDOWN, key, (MapVirtualKey(key, 0) << 16));
			PostMessage(FindWindow("MapleStoryClass", 0), WM_KEYUP, key, (MapVirtualKey(key, 0) << 16));
		}
	}

	static bool bAttack = false,
				bLoot = false;

	static void AutoAttack()
	{ // thread for no hiccups
		while(true)
		{ // left here, fix post message
			if( bAttack )
			{
				Bot::Tools::SendKey( 0x11 ); // ctrl key
				Sleep(500); // delay for 0.5 seconds before next check
			}
			else
				Sleep(1250);
		}
	}
	static void AutoLoot()
	{ // thread for no hiccups
		while(true)
		{
			if( bLoot )
			{
				Bot::Tools::SendKey( int('Z') );
				Sleep(250); // delay for 0.25 seconds before next check
			}
			else
				Sleep(1250);
		}
	}
}
#pragma endregion

void GUIWork()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Home);
	Application::Exit();
}

void Main(void)
{
	GUIWork(); // create new instance of managed application
}

void Home::Cycle_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e)
{ // main logical check
	while(true)
	{
		if( !Library::Util::in_game() )
		{ // disable all hack and bot controls

			this->stats_hook_check->Enabled = false;

			this->hotkey_check->Enabled = false;

			this->tubi_check->Enabled = false;

			this->ua_check->Enabled = false;

			this->breath_check->Enabled = false;
		}
		else
		{ // enable all hack and bot conrols
			if( !this->stats_hook_check->Enabled )
				this->stats_hook_check->Enabled = true;

			if( !this->hotkey_check->Enabled )
				this->hotkey_check->Enabled = true;

			if( !this->tubi_check->Enabled )
				this->tubi_check->Enabled = true;

			if( !this->ua_check->Enabled )
				this->ua_check->Enabled = true;

			 if( !this->breath_check->Enabled )
				 this->breath_check->Enabled = true;
		}

		Sleep(1500); // wait 1.5 seconds before next check
	}
};

void Home::Home_Load(System::Object^  sender, System::EventArgs^  e)
{ // main form initialized
	this->tab_list->SelectedIndex = 1;
	this->bot_keys_attack->SelectedIndex = 0;
	this->bot_keys_loot->SelectedIndex = 0;

	this->Cycle->RunWorkerAsync();

	this->Hotkeys->RunWorkerAsync();

	this->Bot->RunWorkerAsync();

	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&Bot::AutoAttack, NULL, 0, NULL);
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&Bot::AutoLoot, NULL, 0, NULL);

	this->Hacks->RunWorkerAsync();

	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&Hacks::Tubi, NULL, 0, NULL);
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&Hacks::UA, NULL, 0, NULL);
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&Hacks::Breath, NULL, 0, NULL);

	this->Stats->RunWorkerAsync();
};

void Home::Home_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
{ // kill process when form closed
	ExitProcess(0);
};

void Home::Exit_Click(System::Object^  sender, System::EventArgs^  e)
{ // exit trainer + kill process
	if ( (MessageBoxA(NULL, "Would You Like To Exit Derp?", "Derp . Dialog", MB_ICONWARNING | MB_YESNO)) == IDOK || IDYES )
		ExitProcess(0);
};
void Home::Minimize_Click(System::Object^  sender, System::EventArgs^  e)
{ // minimize trainer form
	this->WindowState = FormWindowState::Minimized;
};

void Home::title_bar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{ // form dragging
	this->DRAGGING = true;
	getPos(e);
};
void Home::title_bar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{ // form dragging
	if( DRAGGING )
		DRAG(e);
};
void Home::title_bar_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{ // form dragging
	this->DRAGGING = false;
};

void Home::tab_list_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	this->notes_container->Location = System::Drawing::Point(300, 300);
	this->credits_container->Location = System::Drawing::Point(300, 300);
	this->hacks_container->Location = System::Drawing::Point(300, 300);
	this->hotkey_container->Location = System::Drawing::Point(300, 300);
	this->bot_container->Location = System::Drawing::Point(300, 300);

	switch( this->tab_list->SelectedIndex )
	{
	case 0: // notes
		this->notes_container->Location = System::Drawing::Point(72, 115);
		break;
	case 1: // credits
		this->credits_container->Location = System::Drawing::Point(72, 115);
		break;
	case 2: // hacks
		this->hacks_container->Location = System::Drawing::Point(72, 115);
		break;
	case 3: // hotkeys
		this->hotkey_container->Location = System::Drawing::Point(72, 115);
		break;
	case 4: //bot
		this->bot_container->Location = System::Drawing::Point(72, 115);
		break;
	}
};

void Home::logo_Click(System::Object^  sender, System::EventArgs^  e)
{ // link to neet
	System::Diagnostics::Process::Start("http://neetgroup.net/");
};
void Home::credits_link_veritas_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
{ // link to crediter - veritas
	System::Diagnostics::Process::Start("http://forum.neetgroup.net/members/veritas.1/");
};
void Home::credits_link_chubbz_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e)
{ // link to crediter - chubbz
	System::Diagnostics::Process::Start("http://www.gamekiller.net/members/chubbz.html");
};

void Home::Hotkeys_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e)
{ // hotkey thread
	while(true)
	{
		if( this->hotkey_check->Checked )
		{
			if( GetAsyncKeyState(VK_F1) &1 )
				this->tubi_check->Checked = !this->tubi_check->Checked;
			if( GetAsyncKeyState(VK_F2) &1 )
				this->ua_check->Checked = !this->ua_check->Checked;
			if( GetAsyncKeyState(VK_F3) &1 )
				this->breath_check->Checked = !this->breath_check->Checked;
			if( GetAsyncKeyState(VK_F4) &1 )
				this->bot_attack_check->Checked = !this->bot_attack_check->Checked;
			if( GetAsyncKeyState(VK_F5) &1 )
				this->bot_loot_check->Checked = !this->bot_loot_check->Checked;
		}
		Sleep(250);
	}
};

void Home::Bot_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e)
{ // bot thread
	while(true)
	{
		if( !Library::Util::in_game() )
		{
			if( Bot::bAttack )
				Bot::bAttack = false;
			if( Bot::bLoot )
				Bot::bLoot = false;

			Sleep(2500); // delay 2.5 seconds in between checks
		}
		else
		{
			Bot::bAttack = this->bot_attack_check->Checked;
			Bot::bLoot = this->bot_loot_check->Checked;
			Sleep(500);
		}
	}
};

void Home::Hacks_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e)
{ // hacks thread
	while(true)
	{
		if( !Library::Util::in_game() )
		{
			if( Hacks::bTubi )
				Hacks::bTubi = false;
			if( Hacks::bUA )
				Hacks::bUA = false;
			if( Hacks::bBreath )
				Hacks::bBreath = false;

			Sleep(2500); // delay 2.5 seconds in between checks
		}
		else
		{
			Hacks::bTubi = this->tubi_check->Checked;
			Hacks::bUA = this->ua_check->Checked;
			Hacks::bBreath = this->breath_check->Checked;
			Sleep(500);
		}
	}
};

void Home::Stats_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) 
{ // stats thread
	while(true)
	{
		if( this->stats_hook_check->Checked )
		{
			this->mob_count_label->Text = "Mob Count: " + Library::Util::count_mobs();
			this->people_count_label->Text = "People Count: " + Library::Util::count_people();
			Sleep(500); // 0.5 second delay before next check
		}
		else
		{
			if( this->mob_count_label->Text != "Mob Count: ..." )
				this->mob_count_label->Text = "Mob Count: ...";
			if( this->people_count_label->Text != "People Count: ..." )
				this->people_count_label->Text = "People Count: ...";
			
			Sleep(2500); // 2.5 second delay before next check
		}
	}
};