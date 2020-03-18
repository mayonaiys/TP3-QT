#ifndef TP3_PROGRESSBAR_H
#define TP3_PROGRESSBAR_H

#include <QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>

class ProgressBar : public QMainWindow{
    Q_OBJECT
private:
    QProgressBar* m_progressBar;
    QSlider* m_slider;
public:
    ProgressBar();
signals :
    void signalValueChanged(int value);

};


#endif //TP3_PROGRESSBAR_H
