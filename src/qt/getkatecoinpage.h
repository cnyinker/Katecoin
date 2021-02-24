#ifndef GETSOLARCOINPAGE_H
#define GETSOLARCOINPAGE_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QByteArray>
#include <QTimer>

namespace Ui {
    class GetKateCoinPage;
}
class ClientModel;
class WalletModel;

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Trade page widget */
class GetKateCoinPage : public QWidget
{
    Q_OBJECT

public:
    explicit GetKateCoinPage(QWidget *parent = 0);
    ~GetKateCoinPage();

    void setModel(ClientModel *clientModel);
    void setModel(WalletModel *walletModel);

public slots:

// signals:

private:
    Ui::GetKateCoinPage *ui;
    ClientModel *clientModel;
    WalletModel *walletModel;

private slots:

};

#endif // GETSOLARCOINPAGE_H
