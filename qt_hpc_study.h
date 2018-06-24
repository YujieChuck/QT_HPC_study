/*******************************************************************************
Copyright(C):
FileName:qt_hpc_study.h
Description:用于调试功能代码
Author:yujie.li
Date:2018/06/22
Others:
Histroy:
*******************************************************************************/
#ifndef QT_HPC_STUDY_H
#define QT_HPC_STUDY_H

#include <QDialog>

#include <inc/gui/gui.h>
#include <inc/unity/caeglobalfunction.h>

class QT_HPC_study : public GUI,public caeglobalFunction
{
    Q_OBJECT

public:
    QT_HPC_study(QWidget *parent);
    QT_HPC_study(QString GuiFile,QString MainPath);
    ~QT_HPC_study();

protected:
    /*****************************************************************************
    * @函数名称 : GuiPreFunction
    * @功能描述 : 初始化界面后，用于定制界面显示。例如Qlabel中文字的显示颜色，Qtable的显示效果等
    * @author : yujie.li
    * @date : 2018/06/24
    * @version : ver 1.0
    * @inparam :
    * @outparam :
    *****************************************************************************/
    void GuiPreFunction();                   //virtual function
    /*****************************************************************************
    * @函数名称 : ReadGuiDataFile
    * @功能描述 : 读取界面的配置文件
    * @author : yujie.li
    * @date : 2018/06/24
    * @version : ver 1.0
    * @inparam :
    * @outparam :
    *****************************************************************************/
    void ReadGuiDataFile();
    /*****************************************************************************
    * @函数名称 : WriteGuiDataFile
    * @功能描述 : 将当前界面所有信息写入配置文件中
    * @author : yujie.li
    * @date : 2018/06/24
    * @version : ver 1.0
    * @inparam :
    * @outparam :
    *****************************************************************************/
    void WriteGuiDataFile();
    /*****************************************************************************
    * @函数名称 : InitialConnection
    * @功能描述 : 定义该界面所有信号与槽
    * @author : yujie.li
    * @date : 2018/06/24
    * @version : ver 1.0
    * @inparam :
    * @outparam :
    *****************************************************************************/
    void InitialConnection();
    /*****************************************************************************
    * @函数名称 : UpdateUserDefinedPara
    * @功能描述 : 用于将界面中某Widget与定义的变量进行映射
    * @author : yujie.li
    * @date : 2018/06/24
    * @version : ver 1.0
    * @inparam :
    * @outparam :
    *****************************************************************************/
    void UpdateUserDefinedPara(bool flag);   //virtual function
    /*****************************************************************************
    * @函数名称 : SetGuiDataPath
    * @功能描述 : 用于设置界面中所有Widget对应的数值存放路径，（界面所有Widget的数值与显示分离）
    * @author : yujie.li
    * @date : 2018/06/24
    * @version : ver 1.0
    * @inparam :
    * @outparam :
    *****************************************************************************/
    void SetGuiDataPath(QString qstrPath);
    /*****************************************************************************
    * @函数名称 : GetGuiDataPath
    * @功能描述 : 获取界面中所有Widget对应的数值存放路径
    * @author : yujie.li
    * @date : 2018/06/24
    * @version : ver 1.0
    * @inparam :
    * @outparam :
    *****************************************************************************/
    QString GetGuiDataPath();
    /*****************************************************************************
    * @函数名称 : SetGuiDataFile
    * @功能描述 : 用于设置界面中所有Widget对应的数值存放的文件，这里必须为CSV文件，（界面所有Widget的数值与显示分离）
    * @author : yujie.li
    * @date : 2018/06/24
    * @version : ver 1.0
    * @inparam :
    * @outparam :
    *****************************************************************************/
    void SetGuiDataFile(QString qstrGuiDataFile);


private:
    QString M_MainPath;
    QString Gui_MainPath;
    QString Gui_DataPath,Gui_DataFile;

};

#endif // QT_HPC_STUDY_H
