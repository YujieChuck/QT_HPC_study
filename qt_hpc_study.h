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

class QT_HPC_study : public QDialog
{
    Q_OBJECT

public:
    QT_HPC_study(QWidget *parent = 0);
    ~QT_HPC_study();
};

#endif // QT_HPC_STUDY_H
