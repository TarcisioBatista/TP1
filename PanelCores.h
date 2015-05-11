#include <wx/wx.h>
#include <vector>

class PanelCores: public wxPanel{  
    
    public:
        PanelCores(wxWindow *pai);

        void OnPaint(wxPaintEvent& event);
        void OnClick(wxMouseEvent& event);
        
        DECLARE_EVENT_TABLE();
        
    private:
        std::vector<wxColour> cores;
    
};

