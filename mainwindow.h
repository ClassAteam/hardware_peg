#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "power_peg.h"
#include "antifire_peg.h"
#include "hydro_peg.h"
#include "landinggear_peg.h"
#include "wingsmech_peg.h"
#include "brakes_peg.h"
#include "antiicing_peg.h"
#include "pneumo_peg.h"
#include "presure_peg.h"
#include "cabinlighting_peg.h"
#include "aircondition_peg.h"
#include "sas_peg.h"
#include "bailout_peg.h"
#include "fake_in.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public:
    power_peg* power;
    fake_in* fake;
    antifire_peg* antifire;
    hydro_peg* hydro;
    landinggear_peg* landinggear;
    wingsmech_peg* wing;
    brakes_peg* brakes;
    antiicing_peg* antiicing;
    pneumo_peg* pneumo;
    presure_peg* presure;
    cabinlighting_peg* cabinlighting;
    aircondition_peg* aircondition;
    sas_peg* sas;
    bailout_peg* bailout;


private slots:
    void on_power_sys_show_clicked();
    void on_fake_in_clicked();
    void on_antifire_clicked();
    void on_hydro_clicked();
    void on_landinggear_clicked();
    void on_wingsmech_clicked();
    void on_brakes_clicked();
    void on_antiicing_clicked();
    void on_pneumo_clicked();
    void on_presure_clicked();
    void on_cabinlighting_clicked();
    void on_aircondition_clicked();
    void on_sas_clicked();
    void on_bailout_clicked();
};

#endif // MAINWINDOW_H
