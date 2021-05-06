#pragma once
#include <QWidget>
#include <QtWidgets>
#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QTimer>
#include "Struct_DeviceConnect.h"
#include "Struct_FromRmiOper.h"
#include "Struct_FromRmiPilot.h"
#include "Struct_ToRmiNavig.h"

#define SHARED_MEMORY_DEVICE_CONNECT "Struct_DEVICE_CONNECT"


const double TICK = 2.0;

const double tS{TICK / 1000};


class interfacing : public QWidget
{
    Q_OBJECT
public:
    interfacing(QWidget *parent = nullptr);

public:
    QFont *btnFont;
    QFont *lblClueFontAct;
    QFont *lblClueFontInact;
    QFont *lblValueFontAct;
    QFont *lblValueFontInact;
    QGridLayout* layout_buttons;
    QVector<QPushButton*> btnsPool;
    QVector<QLabel*> lblsPoolClue;
    QVector<QLabel*> lblsPoolValue;
    QVector<QSlider*> slPool;
    QVector<bool*> btnClues;
    QVector<bool*> lblClues;
    QVector<double*> lblValues;
    QVector<double*> slValues;
    QVector<QButtonGroup*> rbGrPool;
    int btnID;
    int slID;
    int lblClueID;
    int lblValueID;
    int row, column;
    int wgtCount;
    QSignalMapper* signalMapperBtns;
    QSignalMapper* signalMapperSldrs;

    //rbuttons
    QSignalMapper* signalMapperRbtns;
    int rbGroupID;
    int rbID;
    int rbMappedValue;
    QVector<int*> rbTogglers;
    QVector<QRadioButton*> rbtnPool;
    void posOcupied();

    //shared memory
    static int mmrCount;
    QSharedMemory SHARE_ADVANTECH;
    SH_DEVICE_CONNECT DEVICE_CONNECT;
    SH_DEVICE_CONNECT *pDev = &DEVICE_CONNECT;


signals:
    int digitClicked(int);
    int changeValue(int);
    int rbClicked(const QString);

public slots:
    void createRedButton(bool* clue, QString name);
    void createRadioButton(int* toggler, QString name, bool isnewgroup);
    void createLabelClue(bool* clue, QString name);
    void createLabelValue(double* clue, QString name);
    void createSlider(double* variable, int low_val, int high_val);
    void m_RedButton2(int);
    void setLbl();
    void setSlV(int);
    void setRB(const QString);
    void trigerButton();
    void updMmrState();
    virtual void updateSmth();
};

