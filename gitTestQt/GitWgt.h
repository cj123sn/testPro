#ifndef GITWGT_H
#define GITWGT_H

#include <QWidget>

namespace Ui {
class GitWgt;
}

class GitWgt : public QWidget
{
	Q_OBJECT

public:
	explicit GitWgt(QWidget *parent = 0);
	~GitWgt();

private:
	Ui::GitWgt *ui;
};

#endif // GITWGT_H
