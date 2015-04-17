#include <wx/wx.h>
#include <wx/panel.h>


class DrawPanel: public wxPanel{   
    
    public:
        DrawPanel(wxWindow *pai);
        void paintEvent(wxPaintEvent & evt);
        void paintNow();
        void render(wxDC& dc);
        
        void OnMouseMoved(wxMouseEvent& event);
        void OnLeftDown(wxMouseEvent& event);
        void OnLeftReleased(wxMouseEvent& event);
        void OnLeftClick(wxMouseEvent& event);

    DECLARE_EVENT_TABLE();
};
