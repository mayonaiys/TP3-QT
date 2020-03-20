//
// Created by Remi on 18/03/2020.
//

#ifndef TP3_FILS_H
#define TP3_FILS_H


#include <QtWidgets/QPushButton>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextEdit>

class Fils : public QMainWindow{
    Q_OBJECT;
private:
    QPushButton* m_button;
    QTextEdit* m_textZone;
public:
    Fils();
public slots:
    void slotSetButtonName();
    void slotAfficheIHM1();

};


#endif //TP3_FILS_H
