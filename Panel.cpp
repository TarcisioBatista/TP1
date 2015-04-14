#include "Panel.h"


BEGIN_EVENT_TABLE(Panel, wxPanel)

    EVT_BUTTON(ID_CHANGEBACKG, Panel::OnChangeBackGround)
    EVT_BUTTON(ID_TRACELINES, Panel::OnTraceLines)
    EVT_BUTTON(ID_TRACELINESCLICKS, Panel::OnTraceLinesOnClicks)
    EVT_BUTTON(ID_PENCIL, Panel::OnPencil)
    
END_EVENT_TABLE()

Panel::Panel(wxWindow *pai):
    wxPanel (pai, 0, wxPoint(-1,-1), wxSize(80,160)) {
        
        
        MudaFundo = new wxButton(this, ID_CHANGEBACKG, wxT("mudar o fundo"), wxPoint(0,0), wxSize(80,40));
        TracaLinhas = new wxButton(this, ID_TRACELINES, wxT("mudar o fundo"), wxPoint(0,40), wxSize(80,40));
        TracalinhaInClicks = new wxButton(this, ID_TRACELINESCLICKS, wxT("mudar o fundo"), wxPoint(0,80), wxSize(80,40));
        Pencil = new wxButton(this, ID_PENCIL, wxT("mudar o fundo"), wxPoint(0,120), wxSize(80,40));
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
