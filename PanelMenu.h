#include <wx/wx.h>
#include <wx/panel.h>

class PanelMenu: public wxPanel{
    
    public:
        
        PanelMenu(wxWindow *pai);
        void OnChangeBackGround(wxCommandEvent& event);
        void OnTraceLines(wxCommandEvent& event);
        void OnTraceLinesOnClicks(wxCommandEvent& event);
        void OnCircle(wxCommandEvent& event);
        void OnSquare(wxCommandEvent& event);
        void OnPencil(wxCommandEvent& event);
        void OnLargura(wxCommandEvent& event);
        
    
    private:
        
        wxBitmapButton *MudaFundo;
        wxBitmapButton *TracaLinhas;
        wxBitmapButton *TracalinhaInClicks;
        wxBitmapButton *Circulo;
        wxBitmapButton *Quadrado;
        wxBitmapButton *Pencil;
        wxButton *Largura;
        wxBitmap line, lineclick, pen, paintbucket, circle, square;
                       
};

const int       ID_CHANGEBACKG = 101;
const int       ID_TRACELINES= 102;
const int       ID_TRACELINESCLICKS= 103;
const int       ID_CIRCULO = 104;
const int       ID_QUADRADO = 105;
const int       ID_PENCIL = 106;
const int       ID_LARGURA = 107; 
