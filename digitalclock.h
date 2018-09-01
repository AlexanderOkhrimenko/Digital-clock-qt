#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H
#include <QLCDNumber>
#include <QWidget>

class digitalclock : public QLCDNumber
{
    Q_OBJECT

public:
    digitalclock(QWidget *parent = 0);


private slots:
    void showTime();
};

#endif // DIGITALCLOCK_H
