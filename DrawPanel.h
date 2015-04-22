#include <wx/wx.h>
#include <wx/panel.h>


class DrawPanel: public wxPanel{   
    
    public:
        DrawPanel(wxWindow *pai);
        void paintEvent(wxPaintEvent & evt);
        void paintNow();
        void render(wxDC& dc);
        
        //tratamento de eventos do mouse
        void OnLeftDown(wxMouseEvent& event);
        void OnLeftUp(wxMouseEvent& event);
        void OnMouseMoved(wxMouseEvent& event);
        void OnLeftClicked(wxMouseEvent& event);

//    DECLARE_EVENT_TABLE();
};

const int       CHANGEBACKG = 101;
const int       TRACELINES= 102;
const int       TRACELINESCLICKS= 103;
const int       PENCIL= 104;
