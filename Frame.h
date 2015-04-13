#include <wx/wx.h>
#include "Menu.h"

class MyFrame: public wxFrame
{
    public:
        MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
    private:
        Menu *MenuBar;
};
