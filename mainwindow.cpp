#include "mainwindow.h"
#include "interfacing.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    power = new power_peg();
    fake = new fake_in();
    antifire = new antifire_peg();
    hydro = new hydro_peg();
    landinggear = new landinggear_peg();
    wing = new wingsmech_peg();
    brakes = new brakes_peg();
    antiicing = new antiicing_peg();
    pneumo = new pneumo_peg();
    presure = new presure_peg();
    cabinlighting = new cabinlighting_peg();
    aircondition = new aircondition_peg();
    sas = new sas_peg();
    bailout = new bailout_peg();
}

MainWindow::~MainWindow()
{

    interfacing::SHARE_ADVANTECH.detach();
    interfacing::SHARE_RMI_PILOT.detach();
    interfacing::SHARE_ISU.detach();
    delete ui;
}





void MainWindow::on_power_sys_show_clicked()
{
    static bool active = false;
    if(active)
    {
        power->hide();
        active = false;
    }
    else
    {
        power->show();
        active = true;
    }
}


void MainWindow::on_fake_in_clicked()
{
    static bool active = false;
    if(active)
    {
        fake->hide();
        active = false;
    }
    else
    {
        fake->show();
        active = true;
    }

}


void MainWindow::on_antifire_clicked()
{
    static bool active = false;
    if(active)
    {
        antifire->hide();
        active = false;
    }
    else
    {
        antifire->show();
        active = true;
    }
}


void MainWindow::on_hydro_clicked()
{
    static bool active = false;
    if(active)
    {
        hydro->hide();
        active = false;
    }
    else
    {
        hydro->show();
        active = true;
    }
}


void MainWindow::on_landinggear_clicked()
{
    static bool active = false;
    if(active)
    {
        landinggear->hide();
        active = false;
    }
    else
    {
        landinggear->show();
        active = true;
    }
}


void MainWindow::on_wingsmech_clicked()
{
    static bool active = false;
    if(active)
    {
        wing->hide();
        active = false;
    }
    else
    {
        wing->show();
        active = true;
    }
}


void MainWindow::on_brakes_clicked()
{
    static bool active = false;
    if(active)
    {
        brakes->hide();
        active = false;
    }
    else
    {
        brakes->show();
        active = true;
    }
}


void MainWindow::on_antiicing_clicked()
{
    static bool active = false;
    if(active)
    {
        antiicing->hide();
        active = false;
    }
    else
    {
        antiicing->show();
        active = true;
    }
}


void MainWindow::on_pneumo_clicked()
{
    static bool active = false;
    if(active)
    {
        pneumo->hide();
        active = false;
    }
    else
    {
        pneumo->show();
        active = true;
    }
}


void MainWindow::on_presure_clicked()
{
    static bool active = false;
    if(active)
    {
        presure->hide();
        active = false;
    }
    else
    {
        presure->show();
        active = true;
    }
}


void MainWindow::on_cabinlighting_clicked()
{
    static bool active = false;
    if(active)
    {
        cabinlighting->hide();
        active = false;
    }
    else
    {
        cabinlighting->show();
        active = true;
    }
}


void MainWindow::on_aircondition_clicked()
{

    static bool active = false;
    if(active)
    {
        aircondition->hide();
        active = false;
    }
    else
    {
        aircondition->show();
        active = true;
    }
}


void MainWindow::on_sas_clicked()
{
    static bool active = false;
    if(active)
    {
        sas->hide();
        active = false;
    }
    else
    {
        sas->show();
        active = true;
    }
}


void MainWindow::on_bailout_clicked()
{
    static bool active = false;
    if(active)
    {
        bailout->hide();
        active = false;
    }
    else
    {
        bailout->show();
        active = true;
    }
}

