#include "pnp.h"
#include "ui_pnp.h"

PNP::PNP(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PNP)
{
    ui->setupUi(this);
}

PNP::~PNP()
{
    delete ui;
}
