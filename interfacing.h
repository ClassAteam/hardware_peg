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

#define SHARED_MEMORY_RMI_PIL "RMI_PIL"
#define SHARED_MEMORY_DEVICE_CONNECT "Struct_DEVICE_CONNECT"
#define N1758UDI  3
#define N1758UDO  7
#define N1724     3
#define N1715     1
#define N1747     3

#define KANAL_1758UDI  128
#define KANAL_1758UDO  128
#define KANAL_1724     32
#define KANAL_1715     32
#define KANAL_1747     64

#define MAT_UDI_UDO   1280


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
    void newColumn();

    //shared memory device
    static int mmrDevCount;
    static QSharedMemory SHARE_ADVANTECH;
    static SH_DEVICE_CONNECT DEVICE_CONNECT;
    static SH_DEVICE_CONNECT *pDev;

    //shared memory RMI PILOT
    static int mmrRmiPilCount;
    static QSharedMemory SHARE_RMI_PILOT;
    static SH_FROMRMI_PILOT RMI_PILOT_CONNECT;
    static SH_FROMRMI_PILOT *pPlt;

signals:
    int digitClicked(int);
    int changeValue(int);
    int rbClicked(const QString);

public slots:
    void createRedButton(bool* clue, QString name);
    void createRadioButton(int* toggler, QString name, bool isnewgroup);
    void createLabelClue(bool* clue, QString name);
    void createSign(QString name);
    void createLabelValue(double* clue, QString name);
    void createSlider(double* variable, int low_val, int high_val);
    void m_RedButton2(int);
    void setLbl();
    void setSlV(int);
    void setRB(const QString);
    void trigerButton();
    virtual void updateSmth();
    static void updMmrState();
};

