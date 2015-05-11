#include "Frame.h"
#include "Menu.h"
#include "PanelMenu.h"
#include "PanelCores.h"
#include "DrawPanel.h"

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    
    
    // criando os paineis
    PanelMenu *Panel1 = new PanelMenu(this);
    DrawPanel *Panel2 = new DrawPanel(this);
    PanelCores *Panel3 = new PanelCores(this);
       
    // adicionando o sizer
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    
    
    hbox->Add(Panel1, 0, wxEXPAND , 0);
    hbox->Add(Panel2, 1, wxEXPAND | wxLEFT , 2);
    vbox->Add(hbox, 1, wxEXPAND | wxBOTTOM, 2);
    vbox->Add(Panel3, 0, wxEXPAND , 0);
    this->SetSizer(vbox);
    
    // menu e barra de status
    Menu *MenuBar = new Menu();
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
