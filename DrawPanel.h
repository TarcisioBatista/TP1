#include <wx/wx.h>
#include <wx/panel.h>



class DrawPanel: public wxPanel{   
    
    public:
        DrawPanel(wxWindow *pai);
        wxWindow *Parent;
        
        //tratamento de eventos do mouse
        void OnLeftDown(wxMouseEvent& event);
        void OnLeftUp(wxMouseEvent& event);
        void OnMouseMoved(wxMouseEvent& event);
        
        wxColour col;
        
        
    DECLARE_EVENT_TABLE();
};

const int      LD = 200;
const int      LU = 201;
const int      MM = 202;

const int       CHANGEBACKG = 101;
const int       TRACELINES = 102;
const int       TRACELINESCLICKS = 103;
const int       CIRCULO = 104;
const int       QUADRADO = 105;
const int       PENCIL = 106;


