#ifndef PNP_H
#define PNP_H

#include <QWidget>

namespace Ui {
class PNP;
}

class PNP : public QWidget
{
    Q_OBJECT

public:
    explicit PNP(QWidget *parent = nullptr);
    ~PNP();

private:
    Ui::PNP *ui;
};

#endif // PNP_H
