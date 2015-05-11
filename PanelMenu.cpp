#include "PanelMenu.h"
#include "Frame.h"

PanelMenu::PanelMenu(wxWindow *pai):
    wxPanel (pai, 0, wxPoint(-1,-1), wxSize(40,600)) {
        
        
        //carregando as imagens 
        line.LoadFile("../../line.bmp", wxBITMAP_TYPE_BMP); 
        lineclick.LoadFile("../../lineclick.bmp", wxBITMAP_TYPE_BMP);
        pen.LoadFile("../../pencil.bmp", wxBITMAP_TYPE_BMP);
        paintbucket.LoadFile("../../bucket.bmp", wxBITMAP_TYPE_BMP);
        circle.LoadFile("../../circle.bmp", wxBITMAP_TYPE_BMP);
        square.LoadFile("../../square.bmp", wxBITMAP_TYPE_BMP);
        
                
        //criando botoes 
        MudaFundo = new wxBitmapButton(this, ID_CHANGEBACKG, paintbucket, wxPoint(0,0), wxSize(40,40));
        TracaLinhas = new wxBitmapButton(this, ID_TRACELINES, line, wxPoint(0,40), wxSize(40,40));
        TracalinhaInClicks = new wxBitmapButton(this, ID_TRACELINESCLICKS, lineclick, wxPoint(0,80), wxSize(40,40));
        Circulo = new wxBitmapButton(this, ID_CIRCULO, circle, wxPoint(0,120), wxSize(40,40));
        Quadrado = new wxBitmapButton(this, ID_QUADRADO, square, wxPoint(0,160), wxSize(40,40));
        Pencil = new wxBitmapButton(this, ID_PENCIL, pen, wxPoint(0,200), wxSize(40,40));
        Largura = new wxButton(this, ID_LARGURA, wxT("Largura"),wxPoint(0,240), wxSize(40,40));
        
        //conectando os boteos a seus tratadores..
        Connect(ID_CHANGEBACKG, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelMenu::OnChangeBackGround));
        Connect(ID_TRACELINES, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelMenu::OnTraceLines));
        Connect(ID_TRACELINESCLICKS, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelMenu::OnTraceLinesOnClicks));
        Connect(ID_CIRCULO, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelMenu::OnCircle));
        Connect(ID_QUADRADO, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelMenu::OnSquare));
        Connect(ID_PENCIL, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelMenu::OnPencil));
        Connect(ID_LARGURA, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PanelMenu::OnLargura));
}
    
void PanelMenu::OnChangeBackGround(wxCommandEvent& event) {
        MyFrame *Parent = (MyFrame *)this->GetParent();
        Parent->ferramenta = ID_CHANGEBACKG;
}
void PanelMenu::OnTraceLines(wxCommandEvent& event) {
        MyFrame *Parent = (MyFrame *)this->GetParent();
        Parent->clicado = 0;
        Parent->ferramenta = ID_TRACELINES;
}
void PanelMenu::OnTraceLinesOnClicks(wxCommandEvent& event){
        MyFrame *Parent = (MyFrame *)this->GetParent();
        Parent->aux = 0;
        Parent->clicado = 0;
        Parent->ptAux = wxPoint(0, 0);
        Parent->ferramenta = ID_TRACELINESCLICKS;
}
void PanelMenu::OnCircle(wxCommandEvent& event){
        MyFrame *Parent = (MyFrame *)this->GetParent();
        Parent->clicado = 0;
        Parent->ferramenta = ID_CIRCULO;
}
void PanelMenu::OnSquare(wxCommandEvent& event){
        MyFrame *Parent = (MyFrame *)this->GetParent();
        Parent->clicado = 0;
        Parent->ferramenta = ID_QUADRADO;
}
void PanelMenu::OnPencil(wxCommandEvent& event){
        MyFrame *Parent = (MyFrame *)this->GetParent();
        Parent->clicado = 0;
        Parent->ferramenta = ID_PENCIL;
}
void PanelMenu::OnLargura(wxCommandEvent& event){
        MyFrame *Parent = (MyFrame *)this->GetParent();
        Parent->clicado = 0;
        if(Parent->largura < 5 ){
            Parent->largura++;
        }
        else Parent->largura = 1;
}
