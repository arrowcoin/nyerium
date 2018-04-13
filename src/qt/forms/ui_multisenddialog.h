/********************************************************************************
** Form generated from reading UI file 'multisenddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISENDDIALOG_H
#define UI_MULTISENDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiSendDialog
{
public:
    QLineEdit *multiSendPercentEdit;
    QLineEdit *multiSendAddressEdit;
    QLabel *label_2;
    QLabel *message;
    QPushButton *addButton;
    QPushButton *disableButton;
    QPushButton *addressBookButton;
    QLabel *label;
    QLabel *label_5;
    QPushButton *deleteButton;
    QPushButton *activateButton;
    QPushButton *viewButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *multiSendStakeCheckBox;
    QCheckBox *multiSendMasternodeCheckBox;

    void setupUi(QDialog *MultiSendDialog)
    {
        if (MultiSendDialog->objectName().isEmpty())
            MultiSendDialog->setObjectName(QStringLiteral("MultiSendDialog"));
        MultiSendDialog->setWindowModality(Qt::NonModal);
        MultiSendDialog->resize(652, 348);
        QFont font;
        font.setFamily(QStringLiteral("Ara Hamah 1982"));
        font.setPointSize(14);
        MultiSendDialog->setFont(font);
        multiSendPercentEdit = new QLineEdit(MultiSendDialog);
        multiSendPercentEdit->setObjectName(QStringLiteral("multiSendPercentEdit"));
        multiSendPercentEdit->setGeometry(QRect(170, 150, 201, 20));
        multiSendPercentEdit->setFont(font);
        multiSendAddressEdit = new QLineEdit(MultiSendDialog);
        multiSendAddressEdit->setObjectName(QStringLiteral("multiSendAddressEdit"));
        multiSendAddressEdit->setGeometry(QRect(170, 180, 401, 21));
        multiSendAddressEdit->setFont(font);
        label_2 = new QLabel(MultiSendDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 0, 621, 121));
        label_2->setFont(font);
        label_2->setLineWidth(1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        message = new QLabel(MultiSendDialog);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(290, 200, 351, 91));
        message->setFont(font);
        addButton = new QPushButton(MultiSendDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(20, 260, 120, 23));
        addButton->setFont(font);
        disableButton = new QPushButton(MultiSendDialog);
        disableButton->setObjectName(QStringLiteral("disableButton"));
        disableButton->setGeometry(QRect(150, 290, 120, 23));
        disableButton->setFont(font);
        addressBookButton = new QPushButton(MultiSendDialog);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        addressBookButton->setGeometry(QRect(570, 180, 28, 21));
        addressBookButton->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);
        addressBookButton->setAutoDefault(false);
        label = new QLabel(MultiSendDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 150, 121, 20));
        label->setFont(font);
        label_5 = new QLabel(MultiSendDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 180, 111, 16));
        label_5->setFont(font);
        deleteButton = new QPushButton(MultiSendDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(150, 260, 120, 23));
        deleteButton->setFont(font);
        activateButton = new QPushButton(MultiSendDialog);
        activateButton->setObjectName(QStringLiteral("activateButton"));
        activateButton->setGeometry(QRect(20, 290, 120, 23));
        activateButton->setFont(font);
        viewButton = new QPushButton(MultiSendDialog);
        viewButton->setObjectName(QStringLiteral("viewButton"));
        viewButton->setGeometry(QRect(20, 230, 251, 23));
        viewButton->setFont(font);
        horizontalLayoutWidget = new QWidget(MultiSendDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 120, 372, 29));
        horizontalLayoutWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        multiSendStakeCheckBox = new QCheckBox(horizontalLayoutWidget);
        multiSendStakeCheckBox->setObjectName(QStringLiteral("multiSendStakeCheckBox"));
        multiSendStakeCheckBox->setFont(font);

        horizontalLayout->addWidget(multiSendStakeCheckBox);

        multiSendMasternodeCheckBox = new QCheckBox(horizontalLayoutWidget);
        multiSendMasternodeCheckBox->setObjectName(QStringLiteral("multiSendMasternodeCheckBox"));
        multiSendMasternodeCheckBox->setFont(font);

        horizontalLayout->addWidget(multiSendMasternodeCheckBox);


        retranslateUi(MultiSendDialog);

        QMetaObject::connectSlotsByName(MultiSendDialog);
    } // setupUi

    void retranslateUi(QDialog *MultiSendDialog)
    {
        MultiSendDialog->setWindowTitle(QApplication::translate("MultiSendDialog", "MultiSend", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        multiSendPercentEdit->setToolTip(QApplication::translate("MultiSendDialog", "Enter whole numbers 1 - 100", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        multiSendPercentEdit->setPlaceholderText(QApplication::translate("MultiSendDialog", "Enter % to Give (1-100)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        multiSendAddressEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        multiSendAddressEdit->setPlaceholderText(QApplication::translate("MultiSendDialog", "Enter Address to Send to", Q_NULLPTR));
        label_2->setText(QApplication::translate("MultiSendDialog", "MultiSend allows you to automatically send up to 100% of your stake or masternode reward to a list of other Nyerium addresses after it matures.\n"
"To Add: enter percentage to give and Nyerium address to add to the MultiSend vector.\n"
"To Delete: Enter address to delete and press delete.\n"
"MultiSend will not be activated unless you have clicked Activate", Q_NULLPTR));
        message->setText(QString());
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        addButton->setStatusTip(QApplication::translate("MultiSendDialog", "Add to MultiSend Vector", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        addButton->setText(QApplication::translate("MultiSendDialog", "Add", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        disableButton->setStatusTip(QApplication::translate("MultiSendDialog", "Deactivate MultiSend", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        disableButton->setText(QApplication::translate("MultiSendDialog", "Deactivate", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("MultiSendDialog", "Choose an address from the address book", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("MultiSendDialog", "Alt+A", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MultiSendDialog", "Percentage of stake to send", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MultiSendDialog", "Percentage:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("MultiSendDialog", "Address to send portion of stake to", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("MultiSendDialog", "Address:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        deleteButton->setStatusTip(QApplication::translate("MultiSendDialog", "Delete Address From MultiSend Vector", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        deleteButton->setText(QApplication::translate("MultiSendDialog", "Delete", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        activateButton->setStatusTip(QApplication::translate("MultiSendDialog", "Activate MultiSend", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        activateButton->setText(QApplication::translate("MultiSendDialog", "Activate", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        viewButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewButton->setStatusTip(QApplication::translate("MultiSendDialog", "View MultiSend Vector", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        viewButton->setText(QApplication::translate("MultiSendDialog", "View MultiSend", Q_NULLPTR));
        multiSendStakeCheckBox->setText(QApplication::translate("MultiSendDialog", "Send For Stakes", Q_NULLPTR));
        multiSendMasternodeCheckBox->setText(QApplication::translate("MultiSendDialog", "Send For Masternode Rewards", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MultiSendDialog: public Ui_MultiSendDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISENDDIALOG_H
