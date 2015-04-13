#include "Frame.h"

BEGIN_EVENT_TABLE(Menu, wxMenuBar)
    EVT_MENU(ID_HELLO, Menu::OnHello)
    EVT_MENU(wxID_EXIT, Menu::OnExit)
    EVT_MENU(wxID_ABOUT, Menu::OnAbout)
END_EVENT_TABLE()

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    MenuBar = new Menu();
    SetMenuBar(MenuBar);
    CreateStatusBar();
    SetStatusText( "uhul" );
    
    Connect(wxID_EXIT, wxCommandEvent,
      wxCommandEventHandler(Menu::OnExit));
    
}
