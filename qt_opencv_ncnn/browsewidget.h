#ifndef BROWSEWIDGET_H
#define BROWSEWIDGET_H

#include <QWidget>

namespace Ui {
class BrowseWidget;
}

class BrowseWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BrowseWidget(QWidget *parent = nullptr);
    ~BrowseWidget();

private:
    Ui::BrowseWidget *ui;
};

#endif // BROWSEWIDGET_H
