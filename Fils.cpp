#include <QtWidgets/QVBoxLayout>
#include <iostream>
#include "Fils.h"

Fils::Fils() {
    setWindowTitle("IHM");
    setFixedSize(300,150);
    QWidget* parent = new QWidget();
    QVBoxLayout* vBox = new QVBoxLayout();
    m_button = new QPushButton;
    m_button->setText("fils");
    //QObject::connect(m_button, SIGNAL(clicked()),this, SLOT(close())); //Ferme la page
    QObject::connect(m_button, SIGNAL(clicked()),this, SLOT(slotSetButtonName()));
    vBox->addWidget(m_button);
    parent->setLayout(vBox);
    setCentralWidget(parent);

}

void Fils::slotSetButtonName() {
    std::cout << "test" << std::endl;
}
