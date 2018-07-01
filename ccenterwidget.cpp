#include "ccenterwidget.h"


CCenterWidget::CCenterWidget(QString GuiFile, QString MainPath): GUI(GuiFile,MainPath)
{
    GuiPreFunction();
    InitialConnection();
}

CCenterWidget::~CCenterWidget()
{

}

void CCenterWidget::GuiPreFunction()
{

}

void CCenterWidget::InitialWindow()
{

}

void CCenterWidget::Downloadstlye()
{

}

void CCenterWidget::ReadGuiDataFile()
{
    ReadGuiPara(GetGuiDataPath() + "/" + GetGuiDataFile());
}

void CCenterWidget::WriteGuiDataFile()
{
    WriteGuiPara(GetGuiDataPath() + "/" + GetGuiDataFile());
}

void CCenterWidget::InitialConnection()
{

}

void CCenterWidget::UpdateUserDefinedPara(bool flag)
{

}
