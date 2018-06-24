/*******************************************************************************
Copyright(C):
FileName:gui.h
Description:用于基于csv文件生成界面的基类
Author:yujie.li
Date:2018/06/22
Others:
Histroy:
*******************************************************************************/
#ifndef GUI_H
#define GUI_H

//#include <QDialog>
#include <QMainWindow>

//添加的头文件如下：
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QComboBox>
#include <QTextEdit>
#include <QGridLayout>
#include <QHBoxLayout>
#include <Qtgui>
#include <QRadioButton>
#include <QGroupBox>
#include <QTableView>
#include <QCheckBox>
#include <QComboBox>
#include <QSpacerItem>
#include <QTableWidget>
#include <QTextEdit>

#include <QFile>
#include "inc/gui/groupboxextend.h"

#include "inc/gui/basewindow.h"
#include "inc/gui/csvfileparse.h"
#include "inc/gui/csvfilewrite.h"
//#include <caeglobalfunction.h>
#include <vector>


class GUI : public QMainWindow
{
    Q_OBJECT

public:
    GUI(QWidget *parent = 0);
    GUI(QString GuiFile,QString MainPath);
    ~GUI();
public:
    void CreatGuiThroughCsvFile(const QString &fileName);
    void GUILayoutFunc(QGridLayout *MGrid, int num1);
    void GUILayoutFunc(QLayout *layoutObj,int num1);
    void GUILayoutFunc(GroupBoxExtend *MGrid3, int num1);

    void CreatSingleWidget(int intWidgetNum);

    QGridLayout *mainLayout;
    CsvFileParse* GuiCsv;
    QList<QStringList> GuiData;
    QWidget* GuiQWidget;
    QString m_Gui_ConfigPath;
private:
    QString m_path;
    QString GuiFile;
    QString GuiFlag;

public:
    void SetMainpath(const QString &fileName);
    QString GetMainpath();

    void SetGuiFile(const QString &fileName);
    QString GetGuiFile();

//    void SetGuiFlag(const QString &fileName);
//    QString GetGuiFlag();

    //QList<QWidget> GuiQWidget;
//    std::vector<QLabel* > AAA;
//    AAA.push_back();

    QLabel *GuiLabel[500];
    QLineEdit *GuiLineEdit[500];
    QPushButton *GuiPushButton[500];
    QString *GuiPushButtonBatFile[500];
    QComboBox *GuiComboBox[500];
    CsvFileParse *GuiComboxCsv[500];
    QRadioButton *GuiRadioButton[500];
    QCheckBox *GuiCheckBox[500];
    QSpacerItem *GuiSpacerItem[500];
    QTableWidget *GuiTableWidget[500];
    CsvFileParse *GuiTableWidgetHeaderCsv[500];
    CsvFileParse *GuiTableWidgetDataCsv[500];
    QString *GuiUserDefined[500];
    QTextEdit *GuiTextEdit[500];


    QGroupBox *GuiGroup[500];
    GroupBoxExtend *GuiGroup_E[500];
    QGridLayout *GuiGridLayout[500];
    QHBoxLayout *GuiHBoxLayout[500];
    QVBoxLayout *GuiVBoxLayout[500];

    //count
//    int currentRow,countQlabel,countQEdit,countQHBoxLayout,countQGridLayout;
//    int countQPushButton,countGroup,countComboBox,countRadioButton;
//    int countQCheckBox,countQSpacerItem,countQTableWidget;

    void DataFlagSave();
    QList<QStringList> GuiFunctionData;

    //read and write csv files in order to update GUI
    CsvFileWrite* WriteGUIData;
    void ReadGuiPara(const QString &fileName);
    void WriteGuiPara(const QString &fileName);
    void UpdataGuiPara(QList<QStringList> TwoA);

    //update Gui data and transfer data to model
    void SetGuiDatatoObject(QList<QStringList> *DataTransfer);
    virtual void SetRestGuiDatatoObject(QList<QStringList> *DataTransfer);

    void GetGuiDataFromObject(QList<QStringList> *DataTransfer);
    virtual void GetRestGuiDataFromObject(QList<QStringList> *DataTransfer);

    //Add orther initial function
    virtual void GuiPreFunction();
    virtual void UpdateUserDefinedPara(bool flag);
    virtual void SetConfigPath(QString Path);
    virtual QString GetConfigPath();
    virtual void ReadConfigFile();
    virtual void WriteConfigFile();

    //Upate table and Get cuurent table data
    void UpdataTableFromQList(QTableWidget *Tableobj, QList<QStringList> Data, int RowStart, int ColumStart);
    QList<QStringList> GetTableData(QTableWidget *Tableobj);
    void DeleSelectedInTable(QTableWidget *Tableobj, int RowStart, int ColumStart, int RowNum, int ColumNum);

private:
    QList<QStringList> GuiCheckFunctionData;
    /*****************************************************************************
    * @函数名称 : CreatCheckFunctionData
    * @功能描述 : 用于check配置文件中是否有遗漏的组件信息未存储，若存在，则自动添加上
    * @author : yujie.li
    * @date : 2018/06/22
    * @version : ver 1.0
    * @inparam : 组件编号：num1
    * @outparam :
    *****************************************************************************/
    void CreatCheckFunctionData(int num1);


};

#endif // GUI_H
