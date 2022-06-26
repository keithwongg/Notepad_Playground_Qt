#include "notepad.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication oEditorApp(argc, argv);
    Notepad oEditor;
    oEditor.show();
    return oEditorApp.exec();
}
