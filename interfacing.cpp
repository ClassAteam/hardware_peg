#include "interfacing.h"

QSharedMemory interfacing::SHARE_ADVANTECH(SHARED_MEMORY_DEVICE_CONNECT);
SH_DEVICE_CONNECT interfacing::DEVICE_CONNECT{};
SH_DEVICE_CONNECT* interfacing::pDev = &interfacing::DEVICE_CONNECT;

QSharedMemory interfacing::SHARE_RMI_PILOT(SHARED_MEMORY_RMI_PIL);
SH_FROMRMI_PILOT interfacing::RMI_PILOT_CONNECT{};
SH_FROMRMI_PILOT* interfacing::pPlt = &interfacing::RMI_PILOT_CONNECT;

QSharedMemory interfacing::SHARE_ISU(SHARED_MEMORY_ISU);
SH_ISU interfacing::ISU_CONNECT{};
SH_ISU* interfacing::pISU = &interfacing::ISU_CONNECT;


int interfacing::mmrDevCount{};
int interfacing::mmrRmiPilCount{};
int interfacing::mmrISUCount{};
QElapsedTimer timing;


interfacing::interfacing(QWidget *parent)
    : QWidget(parent), btnID{0}, slID{0}, lblClueID{0},row{0}, column{0},
       rbGroupID{0}, rbID{0}, rbMappedValue{0}
{
    layout_buttons = new QGridLayout(this);
    this->setLayout(layout_buttons);
    //screen appearance



    //second ver
//    int screenCount = QApplication::desktop()->screenCount();
//    QRect screenRect = QApplication::desktop()->screenGeometry(0);
//    this->move(QPoint(screenRect.x(), screenRect.y()));

    //old ver
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    this->setFixedHeight(screenGeometry.height());
    this->setFixedWidth(screenGeometry.width());
    this->setWindowState(Qt::WindowFullScreen);
    //fonts
    btnFont = new QFont("Courier", 12, QFont::Bold);
    lblClueFontAct = new QFont("Time", 8, QFont::Bold);
    lblClueFontInact = new QFont("Time", 8, QFont::Bold);
    //buttons
    signalMapperBtns = new QSignalMapper(this);
    connect(signalMapperBtns, SIGNAL(mapped(int)), this, SIGNAL(digitClicked(int)));
    connect(this, SIGNAL(digitClicked(int)), this, SLOT(m_RedButton2(int)));
    //labels
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(setLbl()));
    connect(timer, SIGNAL(timeout()), this, SLOT(updateSmth()));
    timer->start(TICK);
    //sliders
    signalMapperSldrs = new QSignalMapper(this);
    connect(signalMapperSldrs, SIGNAL(mapped(int)), this, SIGNAL(changeValue(int)));
    connect(this, SIGNAL(changeValue(int)), this, SLOT(setSlV(int)));
    //rbuttons
    QButtonGroup* firstgroup = new QButtonGroup;
    rbGrPool.append(firstgroup);
    signalMapperRbtns = new QSignalMapper(this);
    connect(signalMapperRbtns, SIGNAL(mapped(QString)), this, SIGNAL(rbClicked(const QString)));
    connect(this, SIGNAL(rbClicked(QString)), this, SLOT(setRB(const QString)));
//    this->setStyleSheet("QLabel {color: green}"); //would be very expensive

    if(mmrDevCount == 0)
    {
        SHARE_ADVANTECH.setKey(SHARED_MEMORY_DEVICE_CONNECT);
        if(!SHARE_ADVANTECH.create(sizeof(DEVICE_CONNECT))) {
            qDebug() << "unable to create shared memory dev";
            return;
        }
        else mmrDevCount++;
    }

    if(mmrRmiPilCount == 0)
    {
        SHARE_RMI_PILOT.setKey(SHARED_MEMORY_RMI_PIL);
        if(!SHARE_RMI_PILOT.create(sizeof(RMI_PILOT_CONNECT))) {
            qDebug() << "unable to create shared memory rmi_pil";
            return;
        }
        else mmrRmiPilCount++;
    }

    if(mmrISUCount == 0)
    {
        SHARE_ISU.setKey(SHARED_MEMORY_ISU);
        if(!SHARE_ISU.create(sizeof(ISU_CONNECT))) {
            qDebug() << "unable to create shared memory ISU";
            return;
        }
        else mmrISUCount++;
    }

}

void interfacing::createRedButton(bool* clue, QString name)
{
    QPushButton *button = new QPushButton(name);
//    button->setFixedHeight(40);
//    button->setFixedWidth(150);
    button->setStyleSheet("max-width: 45em;");
    layout_buttons->addWidget(button, row, column);
    posOcupied();
    button->setFont(*btnFont);
    signalMapperBtns->setMapping(button, btnID);
    connect(button, SIGNAL(clicked()), signalMapperBtns, SLOT(map()));
    btnClues.append(clue);
    btnID++;
    btnsPool.append(button);
}

void interfacing::createLabelClue(bool* clue, QString name)
{
    QLabel *label = new QLabel(name);
    layout_buttons->addWidget(label, row, column);
    label->setStyleSheet("max-width: 20em;");
    posOcupied();
    lblClues.append(clue);
    lblClueID++;
    lblsPoolClue.append(label);

}

void interfacing::createSign(QString name)
{
    QLabel *label = new QLabel(name);
    layout_buttons->addWidget(label, row, column);
    label->setFixedHeight(30);
    label->setStyleSheet("color: green;"
                         "font: bold 14px;");
    posOcupied();

}

void interfacing::createLabelValue(double* value, QString name)
{
    QLabel *label = new QLabel(name);
    layout_buttons->addWidget(label, row, column);
//    label->setFixedWidth(300);
    label->setStyleSheet("max-width: 60em;");
    posOcupied();
    lblValues.append(value);
    lblValueID++;
    lblsPoolValue.append(label);
}

void interfacing::createSlider(double* variable, int low_val, int high_val)
{
    QSlider *slider = new QSlider(Qt::Horizontal);
    slider->setRange(low_val, high_val);
    slider->setPageStep(1);
    slider->setValue(0);
//    slider->setStyleSheet("max-width: 10em;");
    slider->setFixedWidth(150);
    layout_buttons->addWidget(slider, row, column);
    posOcupied();
    signalMapperSldrs->setMapping(slider, slID);
    connect(slider, SIGNAL(valueChanged(int)), signalMapperSldrs, SLOT(map()));
    slValues.append(variable);
    slID++;
    slPool.append(slider);
}
void interfacing::createSlider(double* variable, int low_val, int high_val,
                               int width)
{
    QSlider *slider = new QSlider(Qt::Horizontal);
    slider->setRange(low_val, high_val);
    slider->setPageStep(1);
    slider->setValue(0);
    slider->setFixedWidth(width);
    layout_buttons->addWidget(slider, row, column);
    posOcupied();
    signalMapperSldrs->setMapping(slider, slID);
    connect(slider, SIGNAL(valueChanged(int)), signalMapperSldrs, SLOT(map()));
    slValues.append(variable);
    slID++;
    slPool.append(slider);
}
void interfacing::createRadioButton(int* toggler, QString name, bool isLastInGrp)
{
    QRadioButton* rbutton = new QRadioButton(name, this);
    rbGrPool[rbGroupID]->addButton(rbutton);
    layout_buttons->addWidget(rbutton, row, column);
    posOcupied();
    const QString str = QString::number(rbID) + "_" + QString::number(rbMappedValue) ;
    signalMapperRbtns->setMapping(rbutton, str);
    connect(rbutton, SIGNAL(clicked()), signalMapperRbtns, SLOT(map()));
    rbTogglers.append(toggler);
    rbtnPool.append(rbutton);
    rbID++;
    if(rbMappedValue == 0)
    {
        rbutton->setChecked(true);
    }
    rbMappedValue++;
    if(isLastInGrp)
    {
        rbMappedValue = 0;
        rbGroupID++;
        QButtonGroup* newGroup = new QButtonGroup;
        rbGrPool.append(newGroup);
    }
}
void interfacing::setSlV(int value)
{
    QSlider *slider = slPool[value];
    *slValues[value] = slider->value();
}
void interfacing::m_RedButton2(int value)
{
    QPushButton *button = btnsPool[value];;
    bool pressed;
    pressed = *btnClues[value];
    if(pressed == false)
    {
        *btnClues[value] = true;
        button->setStyleSheet("background-color: red;");
    }
    if(pressed == true)
    {
        *btnClues[value] = false;
        button->setStyleSheet("");
   }
}
void interfacing::setLbl()
{

    for(int i = 0; i < lblsPoolClue.count(); i++)
    {
        QLabel *label = lblsPoolClue[i];
        QString str = label->text();
        for(int i = 0; i < str.size(); ++i)
        {
            if(str.at(i) == QChar(' '))
            {
                str.truncate(i + 1);
            }
        }
        bool pressed;
        pressed = *lblClues[i];
        if(pressed)
        {
            QPalette pal = label->palette();
            pal.setColor(QPalette::WindowText, Qt::red);
            label->setPalette(pal);
            label->setFont(*lblClueFontAct);
        }
        else
        {
            QPalette pal = label->palette();
            pal.setColor(QPalette::WindowText, Qt::gray);
            label->setPalette(pal);
            label->setFont(*lblClueFontInact);
        }

    }

    for(int i = 0; i < lblsPoolValue.count(); i++)
    {
        QLabel *label = lblsPoolValue[i];
        QString str = label->text();
        for(int i = 0; i < str.size(); ++i)
        {
            if(str.at(i) == QChar(' '))
            {
                str.truncate(i + 1);
            }
        }

        label->setText(str + " = " + QString::number(*lblValues[i]));

        if(*lblValues[i] != 0)
        {
            QPalette pal = label->palette();
            pal.setColor(QPalette::WindowText, Qt::blue);
            label->setPalette(pal);
            label->setFont(*lblClueFontAct);
        }
        else
        {
            QPalette pal = label->palette();
            pal.setColor(QPalette::WindowText, Qt::gray);
            label->setPalette(pal);
            label->setFont(*lblClueFontInact);

        }
    }
}

void interfacing::setRB(const QString str)
{
    QStringList list;
    QString value_index;
    QString value;

    list = str.split(QRegularExpression("_"));
    value_index = list[0];
    value = list[1];

    *rbTogglers[value_index.toInt()] = value.toInt();
}

void interfacing::posOcupied()
{
    if(row < 40)
        row++;
    else
    {
        row = 0;
        column++;
    }
}
void interfacing::newColumn()
{
    row = 0;
    column++;
}
void interfacing::updMmrState()
{
    SHARE_ADVANTECH.lock();
    pDev = static_cast<SH_DEVICE_CONNECT*>(SHARE_ADVANTECH.data());

    //IN_MAT
    for(int i = 0; i < MAT_UDI_UDO; i ++)
    {
        pDev->IN_MAT[i] = DEVICE_CONNECT.IN_MAT[i];
    }
    //IN_D
    for(int i = 0; i < N1758UDI; ++i)
    {
        for(int y = 0; y < KANAL_1758UDI; ++y)
        {
            pDev->IN_D[i][y] = DEVICE_CONNECT.IN_D[i][y];
        }
    }
    //IN_A
    for(int i = 0; i < N1747; ++i)
    {
        for(int y = 0; y < KANAL_1747; ++y)
        {
            pDev->IN_A[i][y] = DEVICE_CONNECT.IN_A[i][y];
        }
    }
    //IN_A15
    for(int i = 0; i < N1715; ++i)
    {
        for(int y = 0; y < KANAL_1715; ++y)
        {
            pDev->IN_A15[i][y] = DEVICE_CONNECT.IN_A15[i][y];
        }
    }
    //OUT_D
    for(int i = 0; i < N1758UDO; ++i)
    {
        for(int y = 0; y < KANAL_1758UDO; ++y)
        {
            DEVICE_CONNECT.OUT_D[i][y] = pDev->OUT_D[i][y];
        }
    }
    //OUT_A
    for(int i = 0; i < N1747; ++i)
    {
        for(int y = 0; y < KANAL_1747; ++y)
        {
            DEVICE_CONNECT.OUT_A[i][y] = pDev->OUT_A[i][y];
        }
    }
    SHARE_ADVANTECH.unlock();

    //RMI_PILOT
    SHARE_RMI_PILOT.lock();
    pPlt = static_cast<SH_FROMRMI_PILOT*>(SHARE_RMI_PILOT.data());
    *pPlt = RMI_PILOT_CONNECT;

    SHARE_RMI_PILOT.unlock();

    //ISU
    SHARE_ISU.lock();
    pISU = static_cast<SH_ISU*>(SHARE_ISU.data());
    *pISU = ISU_CONNECT;
    SHARE_ISU.unlock();
}
void interfacing::trigerButton()
{
    qDebug() << "timer is up";
}

void interfacing::updateSmth()
{
    qDebug() << "base logic update call";

}
