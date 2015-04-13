#include "Menu.h"
    
Menu::Menu()
        :wxMenuBar(){
                  
    FileMenu = new wxMenu();
	//FileMenu->Append(ID_HELLO, "&Hello", "Hello");
	FileMenu->Append(wxID_ANY,"&Novo","Criar novo desenho");// colocar na tabela de eventos e criar metodo de tratamento
	FileMenu->AppendSeparator();
	FileMenu->Append(wxID_EXIT, "&Sair", "Sair");
	this->Append(FileMenu, "&Arquivo");
	
	// Menu Ferramentas // colocar na tabela de eventos e criar metodo de tratamento
    ToolsMenu = new wxMenu();
    ToolsMenu->Append(wxID_ANY, "&Português", "Traduzir para o Portugês");
    ToolsMenu->Append(wxID_ANY, "&English", "Translate to English");
    this->Append(ToolsMenu, "Ferramentas"); 
	
	// Menu About
	InfoMenu = new wxMenu();
	InfoMenu->Append(wxID_ABOUT, "&About", "Exibe informações");
    this->Append(InfoMenu, "About");      
        
}    
    

void Menu::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}
void Menu::OnExit(wxCommandEvent& event)
{
    Close(true);
}
void Menu::OnAbout(wxCommandEvent& event)
{
    wxMessageBox( "This is a wxWidgets' Hello world sample",
            "About Hello World", wxOK | wxICON_INFORMATION );
}
