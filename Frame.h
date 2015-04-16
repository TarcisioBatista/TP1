#include <wx/wx.h>
#include <wx/colour.h>
#include "Menu.h"
#include "PanelMenu.h"
#include "PanelCores.h"

class MyFrame: public wxFrame
{
    public:
        MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
    private:
        Menu *MenuBar;
        PanelMenu *Panel1;
        PanelCores *Panel3;    
};
