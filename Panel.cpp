#include "Panel.h"


BEGIN_EVENT_TABLE(Panel, wxPanel)

    EVT_BUTTON(ID_CHANGEBACKG, Panel::OnChangeBackGround)
    EVT_BUTTON(ID_TRACELINES, Panel::OnTraceLines)
    EVT_BUTTON(ID_TRACELINESCLICKS, Panel::OnTraceLinesOnClicks)
    EVT_BUTTON(ID_PENCIL, Panel::OnPencil)
    
END_EVENT_TABLE()

Panel::Panel(wxWindow *pai):
    wxPanel (pai, 0, wxPoint(-1,-1), wxSize(-1,-1)) {
        
        MudaFundo = new wxButton(this, ID_CHANGEBACKG, wxT("Mudar Cor \n do Fundo"), wxPoint(0,0), wxSize(100,40));
        TracaLinhas = new wxButton(this, ID_TRACELINES, wxT("Tracar Retas"), wxPoint(0,40), wxSize(100,40));
        TracalinhaInClicks = new wxButton(this, ID_TRACELINESCLICKS, wxT("Tracar Retas \nem cliques"), wxPoint(0,80), wxSize(100,40));
        Pencil = new wxButton(this, ID_PENCIL, wxT("Pincel"), wxPoint(0,120), wxSize(100,40));
}
    
void Panel::OnChangeBackGround(wxCommandEvent& event) {
    Close( true );
}
void Panel::OnTraceLines(wxCommandEvent& event) {
    Close (true);
}
void Panel::OnTraceLinesOnClicks(wxCommandEvent& event){
}
void Panel::OnPencil(wxCommandEvent& event){
}
