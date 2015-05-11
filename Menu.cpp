#include "Menu.h"
#include "DrawPanel.h"
#include "Frame.h"

BEGIN_EVENT_TABLE(Menu, wxMenuBar)
    EVT_MENU(ID_NOVO, Menu::OnNovo)
    EVT_MENU(wxID_EXIT, Menu::OnExit)
    EVT_MENU(wxID_ABOUT, Menu::OnAbout)
END_EVENT_TABLE()
   
Menu::Menu()
        :wxMenuBar(){
                
    FileMenu = new wxMenu();
	FileMenu->Append(ID_NOVO, "&Novo", "Novo");
	FileMenu->AppendSeparator();
	FileMenu->Append(wxID_EXIT, "&Sair", "Sair");
	this->Append(FileMenu, "&File");
	
	// Menu Ferramentas // colocar na tabela de eventos e criar metodo de tratamento
    ToolsMenu = new wxMenu();
    ToolsMenu->Append(wxID_ANY, "&Portugu�s", "Traduzir para o Portug�s");
    ToolsMenu->Append(wxID_ANY, "&English", "Translate to English");
    this->Append(ToolsMenu, "Ferramentas");
	
	// Menu About
	InfoMenu = new wxMenu();
	InfoMenu->Append(wxID_ABOUT, "&About", "Exibe informa��es");
    this->Append(InfoMenu, "&About");       
        
}    
    
// nesse metodo para limpar a tela � criado um novo painel
// com dimen��es eneormes e fundo branco
// em seguida ele � destruido mas o fundo do painel anterior continua branco
void Menu::OnNovo(wxCommandEvent& event){
    wxPanel *novo = new wxPanel(this,0 , wxPoint(-1,-1),wxSize(100000,100000));
    novo->SetBackgroundColour(wxColour(255,255,255));
    delete novo;    
}
void Menu::OnExit(wxCommandEvent& event)
{
    Close( true );
}
void Menu::OnAbout(wxCommandEvent& event)
{
    wxMessageBox( "Este sotware foi desenvovido por Tarcisio Batista",
            "sobre", wxOK | wxICON_INFORMATION );
}







