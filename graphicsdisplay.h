#ifndef GRAPHICSDISPLAY_H
#define GRAPHICSDISPLAY_H
#include "observer.h"
#include "state.h"
#include "info.h"
#include "window.h"
using namespace std;
class Cell;

class GraphicsDisplay: public Observer<Info, State> {
    Xwindow gWindow;
    const int gridSize;
    public:
        GraphicsDisplay(int n);
        void notify(Subject<Info, State> &whoNotified) override;
};

#endif

