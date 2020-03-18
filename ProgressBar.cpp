//
// Created by Remi on 18/03/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "ProgressBar.h"
ProgressBar::ProgressBar() {
    setWindowTitle("IHM");
    setFixedSize(300,100);
    QWidget* parent = new QWidget();
    m_progressBar = new QProgressBar();
    m_progressBar->setRange(0,100);
    m_slider = new QSlider();
    m_slider->setOrientation(Qt::Horizontal);
    QObject::connect(m_slider, SIGNAL(valueChanged(int)),m_progressBar, SLOT(setValue(int)));
    QVBoxLayout* vBox = new QVBoxLayout();
    vBox->addWidget(m_progressBar);
    vBox->addWidget(m_slider);
    parent->setLayout(vBox);
    setCentralWidget(parent);
}