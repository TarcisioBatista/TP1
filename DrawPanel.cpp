#include "DrawPanel.h"

DrawPanel::DrawPanel(wxWindow *pai):
         wxPanel(pai, 0, wxPoint(100,-1), wxSize(300,-1)){
                
        this->SetBackgroundColour(wxColour(255,255,255));
}
