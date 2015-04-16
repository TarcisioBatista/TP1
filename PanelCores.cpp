#include "PanelCores.h"


BEGIN_EVENT_TABLE(PanelCores, wxPanel)

END_EVENT_TABLE()


PanelCores::PanelCores(wxWindow *pai):
    wxPanel (pai, 0, wxPoint(-1,-1), wxSize(-1,50), wxSUNKEN_BORDER) {
        
        branco = new wxButton(this, ID_Branco, wxT("branco"), wxPoint(0,0), wxSize(10,6));
        preto  = new wxButton(this, ID_Preto, wxT("branco"), wxPoint(0,7), wxSize(10,6));
        //branco = new wxButton(this, ID_Cor, wxColor(255,255,255), wxPoint(0,0), wxSize(10,6));
        //branco = new wxButton(this, ID_Cor, wxColor(255,255,255), wxPoint(0,0), wxSize(10,6));
        //branco = new wxButton(this, ID_Cor, wxColor(255,255,255), wxPoint(0,0), wxSize(10,6));
        
        Connect(ID_Branco, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelCores::SetCor));
        Connect(ID_Preto, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelCores::SetCor));
        
}

void PanelCores::SetCor(wxCommandEvent& event){
   /* switch(Cor){
        case 255: 
            COR = wxColor(255,255,255);
        default:
            COR = wxColor(0,0,0);
    }*/
};
