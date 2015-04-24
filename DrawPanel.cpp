#include "Frame.h"


BEGIN_EVENT_TABLE(DrawPanel, wxPanel)
    EVT_LEFT_DOWN(DrawPanel::OnLeftDown)
	EVT_LEFT_UP(DrawPanel::OnLeftUp)
	EVT_MOTION(DrawPanel::OnMouseMoved)
	EVT_LEFT_DCLICK(DrawPanel::OnLeftClicked)
END_EVENT_TABLE()

DrawPanel::DrawPanel(wxWindow *pai):
       wxPanel(pai, 0, wxPoint(100,-1), wxSize(300,-1)){
            
        this->SetBackgroundColour(wxColour(255,255,255));
        MyFrame *Parent = ((MyFrame::MyFrame) *) this->GetParent();
        Parent->ferramenta=0;
        
}

void DrawPanel::OnLeftClicked(wxMouseEvent& event){
}
void DrawPanel::OnLeftDown(wxMouseEvent& event){
}
void DrawPanel::OnLeftUp(wxMouseEvent& event){
}
void DrawPanel::OnMouseMoved(wxMouseEvent& event){
}
