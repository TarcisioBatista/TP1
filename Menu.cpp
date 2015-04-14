#include "Menu.h"

BEGIN_EVENT_TABLE(Menu, wxMenuBar)
    EVT_MENU(ID_HELLO, Menu::OnHello)
    EVT_MENU(wxID_EXIT, Menu::OnExit)
    EVT_MENU(wxID_ABOUT, Menu::OnAbout)
END_EVENT_TABLE()
   
Menu::Menu()
        :wxMenuBar(){
                  
    FileMenu = new wxMenu();
	FileMenu->Append(ID_HELLO, "&Hello", "Hello");
	FileMenu->AppendSeparator();
	FileMenu->Append(wxID_EXIT, "&Exit", "Sair");
	this->Append(FileMenu, "&File");
	
	// Menu Ferramentas // colocar na tabela de eventos e criar metodo de tratamento
    ToolsMenu = new wxMenu();
    ToolsMenu->Append(wxID_ANY, "&Português", "Traduzir para o Portugês");
    ToolsMenu->Append(wxID_ANY, "&English", "Translate to English");
    this->Append(ToolsMenu, "Ferramentas");
	
	// Menu About
	InfoMenu = new wxMenu();
	InfoMenu->Append(wxID_ABOUT, "&About", "Exibe informações");
    this->Append(InfoMenu, "&About");       
        
}    
    

void Menu::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
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







