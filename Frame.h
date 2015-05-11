#include <wx/wx.h>
#include <wx/colour.h>

class MyFrame: public wxFrame
{
    public:
        MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
        int ferramenta, largura, clicado ,aux;
        wxColour Cor;
        wxPoint pt1,pt2,ptAux;         
};
