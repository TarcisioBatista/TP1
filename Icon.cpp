#include "icon.h"


Icon::Icon (const wxString &name, wxBitmapType type=wxICON_DEFAULT_TYPE)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150)){
            
  SetIcon(wxIcon(wxT("teste.xpm")));
  Centre();
}
