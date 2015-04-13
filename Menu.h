#include <wx/wx.h>

class Menu: public wxMenuBar{

    public:
        Menu();
        void OnHello(wxCommandEvent& event);
        void OnExit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
    public:
        wxMenu *FileMenu;
        wxMenu *InfoMenu;
        wxMenu *ToolsMenu;
        
    DECLARE_EVENT_TABLE();
};

enum
{
    ID_HELLO = 1
};
