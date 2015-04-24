#include "PanelCores.h"
//#include "Frame.h"


PanelCores::PanelCores(wxWindow *pai):
    wxPanel (pai, 0, wxPoint(-1,-1), wxSize(-1,50), wxSUNKEN_BORDER) {
        
//        MyFrame *Parent = this->GetParent();
//        Parent->ferramenta = 1;
        
        //criando butoes manualmente mudar isso aqui
        branco = new wxButton(this, ID_Branco, wxT(""), wxPoint(0,0), wxSize(40,20));
        branco->SetBackgroundColour(wxColour(255,255,255));
        preto  = new wxButton(this, ID_Preto, wxT(""), wxPoint(0,25), wxSize(40,20));
        preto->SetBackgroundColour(wxColour(0,0,0));
        vermelho = new wxButton(this, ID_Vermelho, wxT(""), wxPoint(45,0), wxSize(40,20));
        vermelho->SetBackgroundColour(wxColour(255,0,0));
        azul = new wxButton(this, ID_Azul, wxT(""), wxPoint(45,25), wxSize(40,20));
        azul->SetBackgroundColour(wxColour(0,0,255));
        
        
        //conectando os butoes aos handlers
        Connect(ID_Branco, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelCores::SetBranco));
        Connect(ID_Preto, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelCores::SetPreto));
        Connect(ID_Vermelho, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelCores::SetVermelho));
        Connect(ID_Azul, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelCores::SetAzul));
}

void PanelCores::SetBranco(wxCommandEvent& event){
    //Parent->Cor = wxColor(255,255,255);
};
void PanelCores::SetPreto(wxCommandEvent& event){
    //Parent->COR = wxColor(0,0,0);
};
void PanelCores::SetAzul(wxCommandEvent& event){
    //Parent->COR = wxColor(0,0,255);
};
void PanelCores::SetVermelho(wxCommandEvent& event){
    //Parent->COR = wxColor(255,0,0);
};
