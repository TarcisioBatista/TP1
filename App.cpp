#include "App.h"
#include "Frame.h"

//declarando variaveis globais no primeiro arquivo cpp a ser compilado
//simulando o que a main faria.

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame( "Paint", wxPoint(50, 50), wxSize(450, 340) );
    frame->Show( true );
    return true;
}
