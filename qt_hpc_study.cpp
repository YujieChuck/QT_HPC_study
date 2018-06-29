#include "qt_hpc_study.h"
#include "ccodeview.h"
#include <QSplitter>
#include <QStackedWidget>

QT_HPC_study::QT_HPC_study(QWidget *parent):BaseWindow(parent)
{

    //Set the mainwindow
    QSplitter *splitterMain =new QSplitter(Qt::Horizontal,this);
    splitterMain->setOpaqueResize(true);
    splitterMain->setStretchFactor(0,-1);
    splitterMain->setMinimumSize(splitterMain->minimumSize());
    splitterMain->setMaximumSize(splitterMain->maximumSize());

    this->setCentralWidget(splitterMain);

    QStackedWidget *stack =new QStackedWidget();
    stack->setFrameStyle(QFrame::Panel|QFrame::Raised);
    splitterMain->addWidget(stack);



    QDir DDir;
    QString qstrCurrentPath = DDir.currentPath();
    QString qstrMainPathFile = "ConfigurationFolder/StudyGUIMainPath.csv";
    QString qstrJudgeFile = "ConfigurationFolder/GUIData/TestOutputHeader.csv";
    QString qstrGuiFile = "ConfigurationFolder/StudyGUI.csv";
    Gui_MainPath = InitializationProgram(qstrCurrentPath,qstrMainPathFile,"QT HPC Study",qstrJudgeFile);

    GUI *CCodeView_obj =  new CCodeView(Gui_MainPath+"/"+qstrGuiFile,Gui_MainPath);
    CCodeView_obj->SetGuiDataPath(Gui_MainPath);
    CCodeView_obj->SetGuiDataFile("ConfigurationFolder/GUIData/StudyGUIData.csv");


    stack->addWidget(CCodeView_obj);

    GuiPreFunction();
    InitialConnection();

    ReadGuiDataFile();

    //#########################Intial window#########################//
    Downloadstlye();
    InitialWindow();


    //this->setWindowState(Qt::WindowMaximized);
}

QT_HPC_study::~QT_HPC_study()
{
}

void QT_HPC_study::GuiPreFunction()
{

}

void QT_HPC_study::InitialWindow()
{
    // 设置标题栏跑马灯效果，可以不设置;
    m_titleBar->setTitleRoll();
    m_titleBar->setTitleIcon(Gui_MainPath + "/ConfigurationFolder/images/Logo.png");
    m_titleBar->setTitleContent(QStringLiteral("    HPC Study v1.0  "));
    //m_titleBar->setButtonType(MIN_MAX_BUTTON);
    //m_titleBar->setTitleWidth(this->width());
    m_titleBar->setTitleWidth(650);
    m_titleBar->setBackgroundColor(0,0,20);

    //The follow code could update the image of pushbutton. So it shows that the css file could not load image normally.
//    m_titleBar->m_pButtonMin->setStyleSheet("border-image:url(D:/QT_study/Cplus_study/QT_HPC_study/QT_HPC_study/ConfigurationFolder/images/QSS/TitleQss/min.png) 0 81 0 0 ;");
}

void QT_HPC_study::Downloadstlye()
{
    //加载样式表
    QFile file(Gui_MainPath + "/ConfigurationFolder/images/QSS/WidgetQss.css");
    QFile TitleCssfile(Gui_MainPath + "/ConfigurationFolder/images/QSS/TitleQss.css");
    if (file.open(QFile::ReadOnly)&&TitleCssfile.open(QFile::ReadOnly)){
        QString styleSheet = qApp->styleSheet();
        styleSheet += QLatin1String(file.readAll());
        styleSheet += QLatin1String(TitleCssfile.readAll());
        QString paletteColor = styleSheet.mid(20, 7);
        qApp->setPalette(QPalette(QColor(paletteColor)));
        qApp->setStyleSheet(styleSheet);   //qApp
        file.close();
    }
}

void QT_HPC_study::ReadGuiDataFile()
{
    //ReadGuiPara(GetGuiDataPath() + "/" + GetGuiDataFile());
}

void QT_HPC_study::WriteGuiDataFile()
{
    //WriteGuiPara(GetGuiDataPath() + "/" + GetGuiDataFile());
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
