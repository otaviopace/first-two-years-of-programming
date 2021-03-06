#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <person.h>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();
    void loadPerson(Person);

private:
    Ui::LoginDialog *ui;
    Person person;

protected:
    void reject();

};

#endif // LOGINDIALOG_H
