#include "Frame.h"

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    MenuBar = new Menu();
    Panel1 = new Panel (this);
    SetMenuBar(MenuBar);
    CreateStatusBar();
    SetStatusText( "in progress..." );
    
    
    // connectando eventos da frame aos "handlers" da classe menu
    Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnExit));
     
    Connect(ID_HELLO, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnHello)); 
      
    Connect(wxID_ABOUT, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnAbout));
}
