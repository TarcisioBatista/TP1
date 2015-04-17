#include <wx/wx.h>
#include <wx/colour.h>
#include "Menu.h"
#include "PanelMenu.h"
#include "PanelCores.h"
#include "DrawPanel.h"


class MyFrame: public wxFrame
{
    public:
        MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
        int ferramenta, larg;
        wxColour *Cor;
    private:
        Menu *MenuBar;
        PanelMenu *Panel1;
        PanelCores *Panel3;
        DrawPanel *Panel2;    
};
