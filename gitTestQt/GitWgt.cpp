#include "GitWgt.h"
#include "ui_GitWgt.h"

GitWgt::GitWgt(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::GitWgt)
{
	ui->setupUi(this);
}

GitWgt::~GitWgt()
{
	delete ui;
}
