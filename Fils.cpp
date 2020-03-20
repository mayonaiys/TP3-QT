#include <QtWidgets/QVBoxLayout>
#include <iostream>
#include "Fils.h"
#include "ProgressBar.h"

Fils::Fils() {
    setWindowTitle("IHM");
    setFixedSize(300,150);
    QWidget* parent = new QWidget();
    QVBoxLayout* vBox = new QVBoxLayout();
    m_button = new QPushButton;
    m_button->setText("fils");
    m_textZone = new QTextEdit();
    m_textZone->append("texte initial");

    //Question 2 :
    //QObject::connect(m_button, SIGNAL(clicked()),this, SLOT(close())); //Ferme l'IHM

    //Question 3/4/5 :
    connect(m_button, SIGNAL(clicked()),this, SLOT(slotSetButtonName())); //Change le texte du bouton

    //Question 6 :
    //connect(m_button, SIGNAL(clicked()),this, SLOT(slotAfficheIHM1()));//Affiche l'IHM de l'exercice 1

    vBox->addWidget(m_button);
    vBox->addWidget(m_textZone);
    parent->setLayout(vBox);
    setCentralWidget(parent);

}

void Fils::slotSetButtonName() {
    static int i = 1;
    m_button->setText("Example");
    m_textZone->append("Example" + QString::number(i));
    std::cout << "Example" << i << std::endl;
    i++;
}

void Fils::slotAfficheIHM1() {
    ProgressBar* window = new ProgressBar();
    window->show();
}
