#include "DrawPanel.h"
#include "Frame.h"

//tabela de eventos
BEGIN_EVENT_TABLE(DrawPanel, wxPanel)
    EVT_LEFT_DOWN(DrawPanel::OnLeftDown)
	EVT_LEFT_UP(DrawPanel::OnLeftUp)
	EVT_MOTION(DrawPanel::OnMouseMoved)
END_EVENT_TABLE()

DrawPanel::DrawPanel(wxWindow *pai):
       wxPanel(pai, 0, wxPoint(42,-1), wxSize(-1,-1), wxFIXED_MINSIZE){
        
//      inicializando variaveis  
            
        SetBackgroundColour(wxColour(255,255,255));
        MyFrame *Parent = (MyFrame *)this->GetParent();
        Parent->aux = 0;
        Parent->clicado = 0;
        Parent->pt1 = wxPoint(0, 0);
        Parent->pt2 = wxPoint(0, 0);
        Parent->ptAux = wxPoint(0,0);
        Parent->ferramenta = PENCIL;
               
}

void DrawPanel::OnLeftDown(wxMouseEvent& event){
       
    wxClientDC dc(this);
    MyFrame *Parent = (MyFrame *)this->GetParent();
    dc.SetPen(wxPen(Parent->Cor, Parent->largura, wxSOLID)); 
    if(!Parent->clicado){
        switch(Parent->ferramenta){
            case CHANGEBACKG:    
                    Parent->pt1 = event.GetPosition();
                    dc.GetPixel(Parent->pt1.x, Parent->pt1.y, &col);

                    // Define a cor a ser usada no preenchimento.
                    dc.SetBrush(wxBrush(Parent->Cor, wxBRUSHSTYLE_SOLID));
                    // Esta função preenche uma área da cor `col` com a cor do pincel.
                    dc.FloodFill(Parent->pt1, col, wxFLOOD_SURFACE);  
                     
                break;
                
            case (TRACELINES):
                //pega os dois pontos iniciais para inicialização simples de variavel
                Parent->pt1 = Parent->pt2 = event.GetPosition();
                Parent->clicado = 1;
                dc.DrawLine(Parent->pt1,Parent->pt2);
                break;
                
            case (TRACELINESCLICKS):
                //pega os dois pontos iniciais para inicialização simples de variavel
                if(!Parent->aux){
                    Parent->pt1 = Parent->pt2 = event.GetPosition();
                    Parent->clicado = 1;
                }
                else 
                    Parent->clicado = 1;
                break;
                
            case (PENCIL):
                //pega os dois pontos iniciais para inicialização simples de variavel
                Parent->pt1 = Parent->pt2 = event.GetPosition();
                dc.DrawLine(Parent->pt1,Parent->pt2);
                Parent->clicado = 1;
                break;
            case (CIRCULO)
                Parent->pt1 = event.GetPosition();               
                Parent->clicado = 1;
                break;
            case (QUADRADO):
                Parent->pt1 = event.GetPosition();               
                Parent->clicado = 1;
                break;
        }    
    }
            
}

void DrawPanel::OnMouseMoved(wxMouseEvent& event){
    
    MyFrame *Parent = (MyFrame *)this->GetParent();
    if(Parent->clicado){
        wxClientDC dc(this);
        dc.SetPen(wxPen(Parent->Cor, Parent->largura, wxSOLID));
        
            if (Parent->ferramenta == TRACELINES){
                // Apaga linha antiga
                dc.SetLogicalFunction(wxINVERT);
                dc.DrawLine(Parent->pt1, Parent->pt2);
                // Desenha nova linha
                Parent->pt2 = event.GetPosition();              
                dc.DrawLine(Parent->pt1, Parent->pt2);
            }
            else if ((Parent->ferramenta == TRACELINESCLICKS) && !Parent->aux){                
                // Apaga linha antiga
                dc.SetLogicalFunction(wxINVERT);
                dc.DrawLine(Parent->pt1,Parent->pt2);
                // Desenha nova linha
                Parent->pt1 = event.GetPosition();              
                dc.DrawLine(Parent->pt1,Parent->pt2);
            }
            
            else if (Parent->ferramenta == TRACELINESCLICKS && Parent->aux){                
                // Apaga linha antiga
                dc.SetLogicalFunction(wxINVERT);
                dc.DrawLine(Parent->ptAux,Parent->pt1);
                // Desenha nova linha
                Parent->pt1 = event.GetPosition();              
                dc.DrawLine(Parent->ptAux,Parent->pt1);
            }
//          dinamicamente, o tratador de eventos de movimentos do mause, lê aonde ele está e traça retas de 
//          comprimento minusculo fazendo assim desenhos de mão livre
            else if(Parent->ferramenta == PENCIL){
                Parent->pt1 = Parent->pt2;
                Parent->pt2 = event.GetPosition();
                dc.DrawLine(Parent->pt1,Parent->pt2);   
            }
            
        }
                    
}

void DrawPanel::OnLeftUp(wxMouseEvent& event){
    
//  declarando variaveis de auxilio    
    wxClientDC dc(this);
    MyFrame *Parent = (MyFrame *)this->GetParent();
    dc.SetPen(wxPen(Parent->Cor, Parent->largura, wxSOLID));

//  verificando se o botãol esquerdo está clicado,  
    if(Parent->clicado){

        switch( Parent->ferramenta ){
            
    //      se a ferramenta for traçar linhas, desenha a linha do pt1 ao pt2 e seta clicado 0,
    //      o que quer dizer que o botão esquerdo não está mais clicado.
            case (TRACELINES):            
    //          pegando a posição do ponto 2 para traçar a reta   
                Parent->pt2 = event.GetPosition();            
                dc.SetLogicalFunction(wxCOPY);
                dc.DrawLine(Parent->pt1, Parent->pt2);
                Parent->clicado = 0;
                break;
    
    //      se a ferramenta for a de traçar retas em clickes, faz o mesmo que o traça linha com o adicional de 
    //      guardar a posição do ultimo click dentro do ptAux, assim na proxima vez em que o botão esquerdo for clicado será traçada uma
    //      nova linha com origem nesse ponto, assim que o mouse for solto a reta será traçada definitivamente!   
            case (TRACELINESCLICKS):
                if(!Parent->aux){
    //              pegando a posição do ponto 2 para traçar a reta   
                    Parent->ptAux = event.GetPosition(); 
                    Parent->pt2 = event.GetPosition();      
                    dc.SetLogicalFunction(wxCOPY);
                    dc.DrawLine(Parent->pt1, Parent->pt2);
                    Parent->clicado = 0;
                    Parent->aux = 1;
                }
                else {
                    Parent->pt1 = event.GetPosition();
                    dc.SetLogicalFunction(wxCOPY);                    
                    dc.DrawLine(Parent->ptAux,Parent->pt1);
                    Parent->ptAux = Parent->pt1;
                    Parent->clicado = 0;
                }
                break;                   
            case (PENCIL):
                Parent->pt1 = Parent->pt2 = event.GetPosition();
                dc.DrawLine(Parent->pt1,Parent->pt2);
                Parent->clicado = 0;
                break;
            case (CIRCULO):
                Parent->pt2 = event.GetPosition();
                dc.SetLogicalFunction(wxCOPY);
                if (abs(Parent->pt2.y - Parent->pt1.y) > abs(Parent->pt2.x - Parent->pt1.x))
                    Parent->pt2 = wxPoint(abs(Parent->pt2.y - Parent->pt1.y) + Parent->pt1.x, Parent->pt2.y);
                else
                    Parent->pt2 = wxPoint(Parent->pt2.x, abs(Parent->pt2.x - Parent->pt1.x) + Parent->pt1.y);
                dc.DrawEllipse(Parent->pt1, wxSize(Parent->pt2.x - Parent->pt1.x, Parent->pt2.y - Parent->pt1.y));
                Parent->clicado = 0;
                break;
            case (QUADRADO):
                Parent->pt2 = event.GetPosition();
                dc.SetLogicalFunction(wxCOPY);
                if (abs(Parent->pt2.y - Parent->pt1.y) > abs(Parent->pt2.x - Parent->pt1.x))
                    Parent->pt2 = wxPoint(abs(Parent->pt2.y - Parent->pt1.y) + Parent->pt1.x, Parent->pt2.y);
                else
                    Parent->pt2 = wxPoint(Parent->pt2.x, abs(Parent->pt2.x - Parent->pt1.x) + Parent->pt1.y);
                dc.DrawRectangle(Parent->pt1, wxSize(Parent->pt2.x - Parent->pt1.x, Parent->pt2.y - Parent->pt1.y));              
                Parent->clicado = 0;
                break;
        }
    }
}

