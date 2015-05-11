#include <wx/wx.h>

class Icon : public wxIcon{
    
    public:
    Icon (const wxString &name, wxBitmapType type=wxICON_DEFAULT_TYPE);
    
};
