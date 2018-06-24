#include "qt_hpc_study.h"


QT_HPC_study::QT_HPC_study(QWidget *parent):GUI(parent)
{
    QDir DDir;
    QString qstrCurrentPath = DDir.currentPath();
    QString qstrGuiFile = "ConfigurationFolder/StudyGUI.csv";
    QString qstrJudgeFile = "ConfigurationFolder/GUIData/TestOutputHeader.csv";
    InitializationProgram(qstrCurrentPath,qstrGuiFile,"QT HPC Study",qstrJudgeFile);

    GUI::SetMainpath(qstrCurrentPath);

    GuiPreFunction();
    InitialConnection();
    SetGuiDataPath(qstrCurrentPath);
    SetGuiDataFile("ConfigurationFolder/GUIData/StudyGUIData.csv");
}

QT_HPC_study::QT_HPC_study(QString GuiFile, QString MainPath):GUI(GuiFile, MainPath)
{
//    GuiPreFunction();
//    InitialConnection();
//    SetGuiDataFile("ConfigurationFolder/CADMATGUIConfig.csv");
}

QT_HPC_study::~QT_HPC_study()
{

}

void QT_HPC_study::GuiPreFunction()
{

}

void QT_HPC_study::ReadGuiDataFile()
{
    ReadGuiPara(Gui_DataPath + "/" + Gui_DataFile);
}

void QT_HPC_study::WriteGuiDataFile()
{
    WriteGuiPara(Gui_DataPath + "/" + Gui_DataFile);
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

void QT_HPC_study::SetGuiDataPath(QString qstrPath)
{
    Gui_DataPath = qstrPath;
}

QString QT_HPC_study::GetGuiDataPath()
{
    return Gui_DataPath;
}

void QT_HPC_study::SetGuiDataFile(QString qstrGuiDataFile)
{
    Gui_DataFile = qstrGuiDataFile;
}
