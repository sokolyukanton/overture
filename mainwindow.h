#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QMessageBox>
#include "versionlistform.h"
#include "projectcreatingform.h"
#include "Project.h"
#include <qstringlist.h>
#include <QSettings>
#include <qdebug.h>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void deleteConfirm();
    void showRenamingForm();
    void showVersionList();
    void showProjectCreatingForm();   
    void closeEvent(QCloseEvent *);

private:
    Ui::MainWindow * ui;
    QMessageBox * deleteConfirming;
    VersionListForm * versionListForm;
    ProjectCreatingForm * prjCreatingForm;
    QVector <Project> * _projects;
    XmlIO * _xmlwriter;
    QString _storagePath;

    void _deleteProjectFolder(const QString &);
    void _updateProjectsList();
    QString _createIni();
    QString _readIni();
};

#endif // MAINWINDOW_H
