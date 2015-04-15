#include "PanelMenu.h"


BEGIN_EVENT_TABLE(PanelMenu, wxPanel)

    EVT_BUTTON(ID_CHANGEBACKG, PanelMenu::OnChangeBackGround)
    EVT_BUTTON(ID_TRACELINES, PanelMenu::OnTraceLines)
    EVT_BUTTON(ID_TRACELINESCLICKS, PanelMenu::OnTraceLinesOnClicks)
    EVT_BUTTON(ID_PENCIL, PanelMenu::OnPencil)
    EVT_BUTTON(ID_LARGURA, PanelMenu::OnLargura)
    
END_EVENT_TABLE()

PanelMenu::PanelMenu(wxWindow *pai):
    wxPanel (pai, 0, wxPoint(-1,-1), wxSize(-1,-1)) {
        
        MudaFundo = new wxButton(this, ID_CHANGEBACKG, wxT("Mudar Cor \n do Fundo"), wxPoint(0,0), wxSize(100,40));
        TracaLinhas = new wxButton(this, ID_TRACELINES, wxT("Tracar Retas"), wxPoint(0,40), wxSize(100,40));
        TracalinhaInClicks = new wxButton(this, ID_TRACELINESCLICKS, wxT("Tracar Retas \nem cliques"), wxPoint(0,80), wxSize(100,40));
        Pencil = new wxButton(this, ID_PENCIL, wxT("Pincel"), wxPoint(0,120), wxSize(100,40));
        Largura = new wxButton(this, ID_LARGURA, wxT("Largura"), wxPoint(0,160), wxSize(100,40));
}
    
void PanelMenu::OnChangeBackGround(wxCommandEvent& event) {
    Close( true );
}
void PanelMenu::OnTraceLines(wxCommandEvent& event) {
    Close (true);
}
void PanelMenu::OnTraceLinesOnClicks(wxCommandEvent& event){
}
void PanelMenu::OnPencil(wxCommandEvent& event){
}
void PanelMenu::OnLargura(wxCommandEvent& event){
}
