#include "qt_hpc_study.h"


QT_HPC_study::QT_HPC_study():GUI()
{
    QDir DDir;
    QString qstrCurrentPath = DDir.currentPath();
    QString qstrMainPathFile = "ConfigurationFolder/StudyGUIMainPath.csv";
    QString qstrJudgeFile = "ConfigurationFolder/GUIData/TestOutputHeader.csv";
    QString qstrGuiFile = "ConfigurationFolder/StudyGUI.csv";
    Gui_MainPath = InitializationProgram(qstrCurrentPath,qstrMainPathFile,"QT HPC Study",qstrJudgeFile);

    GUI::SetMainpath(Gui_MainPath);

    GuiPreFunction();
    InitialConnection();
    SetGuiDataPath(Gui_MainPath);
    SetGuiDataFile("ConfigurationFolder/GUIData/StudyGUIData.csv");
    CreatGuiThroughCsvFile(Gui_MainPath+"/"+qstrGuiFile);

    ReadGuiDataFile();
    //#########################Intial window#########################//
    InitialWindow();
    Downloadstlye();

    this->setWindowState(Qt::WindowMaximized);
}

QT_HPC_study::QT_HPC_study(QString GuiFile, QString MainPath):GUI(GuiFile, MainPath)
{
//    GuiPreFunction();
//    InitialConnection();
//    SetGuiDataFile("ConfigurationFolder/CADMATGUIConfig.csv");
}

QT_HPC_study::~QT_HPC_study()
{
//    WriteGuiDataFile();
}

void QT_HPC_study::GuiPreFunction()
{

}

void QT_HPC_study::InitialWindow()
{
    // 设置标题栏跑马灯效果，可以不设置;
    m_titleBar->setTitleRoll();
    m_titleBar->setTitleIcon(Gui_MainPath + "/ConfigurationFolder/images/Logo.png");
    m_titleBar->setTitleContent(QStringLiteral("HPC Study v1.0"));
    m_titleBar->setButtonType(MIN_MAX_BUTTON);
    m_titleBar->setTitleWidth(this->width());
    m_titleBar->setBackgroundColor(0,0,20);


    //加载样式表
    QFile file(Gui_MainPath + "/ConfigurationFolder/images/QSS/TitleQss.css");
    if (file.open(QFile::ReadOnly)){
        QString qss = QLatin1String(file.readAll());
        QString paletteColor = qss.mid(20, 7);
        qApp->setPalette(QPalette(QColor(paletteColor)));
        qApp->setStyleSheet(qss);
        file.close();
    }
}

void QT_HPC_study::Downloadstlye()
{
    //加载样式表
    QFile file(Gui_MainPath + "/ConfigurationFolder/images/QSS/WidgetQss.css");

    if (file.open(QFile::ReadOnly)){
        QString qss = QLatin1String(file.readAll());
        QString paletteColor = qss.mid(20, 7);
        qApp->setPalette(QPalette(QColor(paletteColor)));
        qApp->setStyleSheet(qss);
        file.close();
    }
}

void QT_HPC_study::ReadGuiDataFile()
{
    ReadGuiPara(GetGuiDataPath() + "/" + GetGuiDataFile());
}

void QT_HPC_study::WriteGuiDataFile()
{
    WriteGuiPara(GetGuiDataPath() + "/" + GetGuiDataFile());
}

void QT_HPC_study::InitialConnection()
{
//    if(GuiRadioButton[1]!=NULL) QObject::connect(GuiRadioButton[1], SIGNAL(clicked()),this,SLOT(Clicked_RadioRaceFlag()));
//    if(GuiRadioButton[2]!=NULL) QObject::connect(GuiRadioButton[2], SIGNAL(clicked()),this,SLOT(Clicked_RadioRaceFlag()));
//    createActions();
}

void QT_HPC_study::UpdateUserDefinedPara(bool flag)
{
    //Initial the value of UserDefined
//    QString Temp_str;
//    if(flag){
//        if(GuiLineEdit[1]!=NULL) CreoModelFile = GuiLineEdit[1]->text();
//        if(GuiLineEdit[2]!=NULL) ScriptFile = GuiLineEdit[2]->text();
//        if(GuiLineEdit[3]!=NULL) Gui_WorkPath = GuiLineEdit[3]->text();
//    }
//    else{
//        if(GuiLineEdit[1]!=NULL) GuiLineEdit[1]->setText(CreoModelFile);
//        if(GuiLineEdit[2]!=NULL) GuiLineEdit[2]->setText(ScriptFile);
//        if(GuiLineEdit[3]!=NULL) GuiLineEdit[3]->setText(Gui_WorkPath);
//    }
}
