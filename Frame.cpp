#include "Frame.h"

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    MenuBar = new Menu();
    Panel1 = new Panel (this);
    SetMenuBar(MenuBar);
    CreateStatusBar();
    SetStatusText( "in progress..." );
    

    // connectando eventos da frame aos "handlers" da classe panel
    /*
    Connect(ID_CHANGEBACKG, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Panel::OnChangeBackGround());
    Connect(ID_TRACELINES, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Panel::OnTraceLines());
    Connect(ID_TRACELINESCLICKS, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Panel::OnTraceLinesOnClicks);
    Connect(ID_PENCIL, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Panel::OnPencil);
    */
    
    
    // connectando eventos da frame aos "handlers" da classe menu
    Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnExit));
     
    Connect(ID_HELLO, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnHello)); 
      
    Connect(wxID_ABOUT, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnAbout));
}
