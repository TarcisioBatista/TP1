#include "PanelCores.h"
#include "Frame.h"

BEGIN_EVENT_TABLE(PanelCores, wxPanel)
    EVT_PAINT(PanelCores::OnPaint)
    EVT_LEFT_DOWN(PanelCores::OnClick)
END_EVENT_TABLE()


PanelCores::PanelCores(wxWindow *pai):
    wxPanel (pai, 0, wxPoint(-1,600), wxSize(1100,50)) {
        
//        colocando 30 cores no vetor de cores, sempre no final do vetor
        this->cores.push_back(wxColour(0, 0, 0)); 
        this->cores.push_back(wxColour(255, 255, 255));
        this->cores.push_back(wxColour(193, 205, 205));
        this->cores.push_back(wxColour(105, 105, 105));
        this->cores.push_back(wxColour(139, 69, 1)); 
        this->cores.push_back(wxColour(255, 0, 0));
        this->cores.push_back(wxColour(255, 48, 48));
        this->cores.push_back(wxColour(255, 69, 0));
        this->cores.push_back(wxColour(255, 99, 71));
        this->cores.push_back(wxColour(255, 165, 0));
        this->cores.push_back(wxColour(255, 193, 37));
        this->cores.push_back(wxColour(255, 255, 0));
        this->cores.push_back(wxColour(173, 255, 47));
        this->cores.push_back(wxColour(0, 250, 154));
        this->cores.push_back(wxColour(60, 179, 113));
        this->cores.push_back(wxColour(0, 255, 0));
        this->cores.push_back(wxColour(127, 255, 0));
        this->cores.push_back(wxColour(0, 100, 0));
        this->cores.push_back(wxColour(0, 0, 139));
        this->cores.push_back(wxColour(0, 0, 255));
        this->cores.push_back(wxColour(65, 105, 225));
        this->cores.push_back(wxColour(100, 149, 237));
        this->cores.push_back(wxColour(0, 255, 255));
        this->cores.push_back(wxColour(191, 62, 255));
        this->cores.push_back(wxColour(139, 0, 139));
        this->cores.push_back(wxColour(104, 34, 139));
        this->cores.push_back(wxColour(255, 62, 150));
        this->cores.push_back(wxColour(255, 20, 147));
        this->cores.push_back(wxColour(205, 96, 144));
        this->cores.push_back(wxColour(255, 181, 197));
        
}

void PanelCores::OnPaint(wxPaintEvent& event) {
    wxClientDC dc(this);
    
    //coloca o pincel na cor preta - padrao
    dc.SetBrush(wxBrush(wxColour(0, 0, 0), wxSOLID));
    dc.DrawRectangle(wxPoint(2, 2) , wxSize(48, 48));
        
    
    // cria quadrados da primeira fileira de forma eficiente
    for (int i = 0; i < cores.size()/2; i++) {
        dc.SetBrush(wxBrush(cores[i], wxSOLID));
        dc.DrawRectangle(wxPoint(52 + 25*i, 2) , wxSize(23, 23));
    } 
//    cria quadrados na segunda fileira  
    int j = cores.size()/2;
    for (int i = cores.size()/2; i < cores.size(); i++) {
        dc.SetBrush(wxBrush(cores[i], wxSOLID));
        dc.DrawRectangle(wxPoint(52 + 25*(i-j), 27) , wxSize(23, 23));
    }  
}

void PanelCores::OnClick(wxMouseEvent& event){
    
    //clicando no painel em qualquer posição a cor do pixel clicado é colocada 
//    na cor que sera utilizada em todos os metodos de desenho
    wxClientDC dc(this);
    MyFrame *Parent = (MyFrame *)this->GetParent();
    Parent->ptAux = event.GetPosition();
    dc.GetPixel(Parent->ptAux.x, Parent->ptAux.y,  &Parent->Cor);
    dc.SetBrush(wxBrush(Parent->Cor, wxSOLID));
    dc.DrawRectangle(wxPoint(2, 2) , wxSize(48, 48));
}
