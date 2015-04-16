#include <wx/wx.h>
#include <wx/panel.h>


class PanelCores: public wxPanel{  
    
    public:
        PanelCores(wxWindow *pai);
        void SetCor(wxCommandEvent& event);
        
    private:
        wxButton *azul;
        wxButton *verde;
        wxButton *vermelho;
        wxButton *preto;
        wxButton *branco;
    
    DECLARE_EVENT_TABLE();
};

const int       ID_Branco = 255;
const int       ID_Preto = 256;

