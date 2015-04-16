#include <wx/wx.h>
#include <wx/panel.h>

class PanelMenu: public wxPanel{
    
    public:
        
        PanelMenu(wxWindow *pai);
        void OnChangeBackGround(wxCommandEvent& event);
        void OnTraceLines(wxCommandEvent& event);
        void OnTraceLinesOnClicks(wxCommandEvent& event);
        void OnPencil(wxCommandEvent& event);
        void OnLargura(wxCommandEvent& event);
    
    private:
        
        wxButton *MudaFundo;
        wxButton *TracaLinhas;
        wxButton *TracalinhaInClicks;
        wxButton *Pencil;
        wxButton *Largura;
        
    DECLARE_EVENT_TABLE();
};

const int       ID_CHANGEBACKG = 101;
const int       ID_TRACELINES= 102;
const int       ID_TRACELINESCLICKS= 103;
const int       ID_PENCIL= 104;
const int       ID_LARGURA= 105;
