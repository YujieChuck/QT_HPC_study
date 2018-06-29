#ifndef CCODEVIEW_H
#define CCODEVIEW_H

#include <inc/gui/gui.h>
#include <inc/unity/caeglobalfunction.h>

class CCodeView : public GUI,public caeglobalFunction
{
    Q_OBJECT
public:
    CCodeView();
    CCodeView(QString GuiFile,QString MainPath);
    ~CCodeView();

public:
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
    * @函数名称 : InitialWindow
    * @功能描述 : 初始化界面的标题栏，并设置icon
    * @author : yujie.li
    * @date : 2018/06/29
    * @version : ver 1.0
    * @inparam :
    * @outparam :
    *****************************************************************************/
    void InitialWindow();
    /*****************************************************************************
    * @函数名称 : Downloadstlye
    * @功能描述 : 设置所有Widget的样式
    * @author : yujie.li
    * @date : 2018/06/29
    * @version : ver 1.0
    * @inparam :
    * @outparam :
    *****************************************************************************/
    void Downloadstlye();
    /*****************************************************************************
    * @函数名称 : ReadGuiDataFile
    * @功能描述 : 将配置文件中记录的数据刷入界面中
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

private:
    QString Gui_MainPath;


signals:

public slots:
};

#endif // CCODEVIEW_H
