#include <wx/wx.h>
#include <wx/panel.h>


class PanelCores: public wxPanel{  
    
    public:
        PanelCores(wxWindow *pai);
        void SetBranco(wxCommandEvent& event);
        void SetPreto(wxCommandEvent& event);
        void SetAzul(wxCommandEvent& event);
        void SetVermelho(wxCommandEvent& event);
        
    private:
        wxButton *azul;
        wxButton *vermelho;
        wxButton *preto;
        wxButton *branco;
    
};

const int       ID_Branco = 255;
const int       ID_Preto = 256;
const int       ID_Azul = 254;
const int       ID_Vermelho = 253;

