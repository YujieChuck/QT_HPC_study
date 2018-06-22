#ifndef GROUPBOXEXTEND_H
#define GROUPBOXEXTEND_H

#include <QGroupBox>
#include <QVector>

class GroupBoxExtend : public QGroupBox
{
    Q_OBJECT

    public:
        enum State{
            STATE_NORMAL,
            STATE_EXPAND
        };

    public:
        GroupBoxExtend(QWidget *parent = NULL, State state = STATE_NORMAL);
        GroupBoxExtend(const QString &title, QWidget *parent = NULL, State state = STATE_NORMAL);
        void UpdateState(bool checked);

    private Q_SLOTS:
        void onChecked(bool checked);

    public:
        void addWidget(QWidget *widget);
        State getState() const;

    private:
        QVector<QWidget*> children_;
        State state_;
};



#endif // GROUPBOXEXTEND_H
