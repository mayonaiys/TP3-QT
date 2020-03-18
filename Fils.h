//
// Created by Remi on 18/03/2020.
//

#ifndef TP3_FILS_H
#define TP3_FILS_H


#include <QtWidgets/QPushButton>
#include <QtWidgets/QMainWindow>

class Fils : public QMainWindow{
private:
    QPushButton* m_button;
public:
    Fils();
public slots:
    void slotSetButtonName();

};


#endif //TP3_FILS_H
