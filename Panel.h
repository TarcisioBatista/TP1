#include <wx/wx.h>
#include <wx/panel.h>

class Panel: public wxPanel{
    
    public:
        
        Panel(wxWindow *pai);
        void OnChangeBackGround(wxCommandEvent& event);
        void OnTraceLines(wxCommandEvent& event);
        void OnTraceLinesOnClicks(wxCommandEvent& event);
        void OnPencil(wxCommandEvent& event);
        
        enum {
            ID_CHANGEBACKG,
            ID_TRACELINES,
            ID_TRACELINESCLICKS,
            ID_PENCIL
        };
    
    private:
        
        wxButton *MudaFundo;
        wxButton *TracaLinhas;
        wxButton *TracalinhaInClicks;
        wxButton *Pencil;
        
    DECLARE_EVENT_TABLE();
};
