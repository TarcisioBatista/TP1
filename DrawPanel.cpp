#include "DrawPanel.h"

//BEGIN_EVENT_TABLE(DrawPanel, wxPane:l)
//    EVT_LEFT_DOWN(DrawPanel::OnLeftDown)
//	EVT_LEFT_UP(DrawPanel::OnLeftUp)
//	EVT_MOTION(DrawPanel::OnMouseMove
//	EVT_LEFT_CLICKED(DrawPanel::OnLeftClic)
//END_EVENT_TAB()

DrawPanel::DrawPanel(wxWindow *pai):
       wxPanel(pai, 0, wxPoint(100,-1), wxSize(300,-1)){
            this->SetBackgroundColour(wxColour(255,255,255));
}
