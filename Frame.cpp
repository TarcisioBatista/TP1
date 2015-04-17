#include "Frame.h"

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    
    // criando os paineis
    //wxPanel *Parent = new wxPanel(this, wxID_ANY);
    Panel1 = new PanelMenu(this);
    Panel3 = new PanelCores(this);
    Panel2 = new DrawPanel(this);
    
    // adicionando o sizer
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    hbox->Add(Panel1, 0, wxEXPAND | wxRIGHT , 5);
    hbox->Add(Panel2, 1, wxEXPAND | wxRIGHT , 5);
    vbox->Add(hbox, 1, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 5);
    vbox->Add(Panel3, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 5);
    this->SetSizer(vbox);
    
    // menu e barra de status
    MenuBar = new Menu();
    SetMenuBar(MenuBar);
    CreateStatusBar();
    Centre();
    SetStatusText( "in progress..." );
    
    
    
    // connectando eventos de menu da frame aos "handlers" da classe menu
    Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnExit));
     
    Connect(ID_NOVO, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnNovo)); 
      
    Connect(wxID_ABOUT, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(Menu::OnAbout));
}
