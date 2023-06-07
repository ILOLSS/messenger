//
// Created by Filipp Po on 30.05.2023.
//

#ifndef QT_SERVER_MESSAGE_H
#define QT_SERVER_MESSAGE_H

#include <QString>

struct Message{
    QString from_username;
    QString content;

    Message(QString from_username = "", QString content = "");
};

#endif //QT_SERVER_MESSAGE_H
