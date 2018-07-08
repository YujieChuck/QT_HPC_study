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
    this->mainLayout->setColumnStretch(0,2);
    this->mainLayout->setColumnStretch(1,1);
    if(this->GuiGridLayout[1]!=NULL){
        this->GuiGridLayout[1]->setRowStretch(0,1);
        this->GuiGridLayout[1]->setRowStretch(1,20);
    }
    if(this->GuiGridLayout[4]!=NULL){
        this->GuiGridLayout[4]->setRowStretch(0,2);
        this->GuiGridLayout[4]->setRowStretch(1,1);
    }
    for(int i=0;i<500;i++){
        if(this->GuiPushButton[i]!=NULL){
            this->GuiPushButton[i]->setObjectName(QString("GuiPushButton%1").arg(i));
        }
    }

    //Intial tab widget
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
