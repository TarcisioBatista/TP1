#include <wx/wx.h>

class Menu: public wxMenuBar{

    public:
        Menu();
        void OnNovo(wxCommandEvent& event);
        void OnExit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
    private:
        wxMenu *FileMenu;
        wxMenu *InfoMenu;
        wxMenu *ToolsMenu;
        
    DECLARE_EVENT_TABLE();
};

enum
{
    ID_NOVO = 1
};
