#include "App.h"
#include "Frame.h"

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit(){
       
    MyFrame *frame = new MyFrame( "Paint", wxPoint(50, 50), wxSize(1100, 680));
    frame->Show( true );
    return true;
}
