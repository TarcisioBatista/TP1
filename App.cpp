#include "App.h"
#include "Frame.h"

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame( "Hello World", wxPoint(50, 50), wxSize(450, 340) );
    frame->Show( true );
    return true;
}
