#include "Frame.h"

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    
    // resolvendo os paineis
    wxPanel *Parent = new wxPanel(this, wxID_ANY);
    Panel1 = new PanelMenu(Parent);
    Panel3 = new PanelCores(Parent);
    wxPanel *Panel2 = new wxPanel(Parent, 0, wxPoint(100,-1), wxSize(300,-1));
    Panel2->SetBackgroundColour(wxColour(255,255,255));
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    hbox->Add(Panel1, 0, wxEXPAND | wxALL, 5);
    hbox->Add(Panel2, 1, wxEXPAND | wxALL, 5);
    vbox->Add(hbox, 1, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 5);
    vbox->Add(Panel3, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 5);
    Parent->SetSizer(vbox);
    
    // menu e barra de status
    MenuBar = new Menu();
    SetMenuBar(MenuBar);
    CreateStatusBar();
    SetStatusText( "in progress..." );
    
    
    
    // connectando eventos de menu da frame aos "handlers" da classe menu
    Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnExit));
     
    Connect(ID_HELLO, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnHello)); 
      
    Connect(wxID_ABOUT, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnAbout));
}
