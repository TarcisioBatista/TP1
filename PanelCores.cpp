#include <wx/wx.h>

class PanelCores: public wxMenuBar{

    public:
        
        PanelCores();
        void OnHello(wxCommandEvent& event);
        void OnExit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        
    private:
        
        wxMenu *FileMenu;
        wxMenu *InfoMenu;
        wxMenu *ToolsMenu;
        
    DECLARE_EVENT_TABLE();
};
