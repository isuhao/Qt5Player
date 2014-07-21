
#include "player.h"
#include "mediacenter.h"

#include <QApplication>

int main(int argc, char *argv[])
{
#ifdef Q_WS_MAEMO_6
    //Meego graphics system conflicts with xvideo during fullscreen transition
    QApplication::setGraphicsSystem("raster");
#endif
    QApplication app(argc, argv);

    Player player;


#if defined(Q_WS_SIMULATOR)
    player.setAttribute(Qt::WA_LockLandscapeOrientation);
    player.showMaximized();
#else
    player.show();
#endif
    return app.exec();
}
