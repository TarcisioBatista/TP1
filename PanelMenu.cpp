#include "PanelMenu.h"

PanelMenu::PanelMenu(wxWindow *pai):
    wxPanel (pai, 0, wxPoint(-1,-1), wxSize(100,300)) {
        
        MudaFundo = new wxButton(this, ID_CHANGEBACKG, wxT("Mudar Cor \n do Fundo"), wxPoint(0,0), wxSize(100,40));
        TracaLinhas = new wxButton(this, ID_TRACELINES, wxT("Tracar Retas"), wxPoint(0,40), wxSize(100,40));
        TracalinhaInClicks = new wxButton(this, ID_TRACELINESCLICKS, wxT("Tracar Retas \nem cliques"), wxPoint(0,80), wxSize(100,40));
        Pencil = new wxButton(this, ID_PENCIL, wxT("Pincel"), wxPoint(0,120), wxSize(100,40));
        Largura = new wxButton(this, ID_LARGURA, wxT("Largura"), wxPoint(0,160), wxSize(100,40));
        
        //conectando os boteos a seus tratadores..
        Connect(ID_CHANGEBACKG, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelMenu::OnChangeBackGround));
        Connect(ID_TRACELINES, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelMenu::OnTraceLines));
        Connect(ID_TRACELINESCLICKS, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelMenu::OnTraceLinesOnClicks));
        Connect(ID_PENCIL, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelMenu::OnPencil));
}
    
void PanelMenu::OnChangeBackGround(wxCommandEvent& event) {
    //ferramenta = ID_CHANGEBACKG;
}
void PanelMenu::OnTraceLines(wxCommandEvent& event) {
    //ferramenta = ID_TRACELINES;
}
void PanelMenu::OnTraceLinesOnClicks(wxCommandEvent& event){
    //ferramenta = ID_TRACELINESCLICKS;
}
void PanelMenu::OnPencil(wxCommandEvent& event){
    //ferramenta = ID_PENCIL;
}
void PanelMenu::OnLargura(wxCommandEvent& event){

}
