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

enum {
        ID_CHANGEBACKG,
        ID_TRACELINES,
        ID_TRACELINESCLICKS,
        ID_PENCIL,
        ID_LARGURA
};
