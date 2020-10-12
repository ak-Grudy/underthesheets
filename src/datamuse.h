/***********************************************************************
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * See http://www.gnu.org/licenses/ for a look at the GNU general public
 * license.
 ***********************************************************************/

#ifndef DATAMUSE_H
#define DATAMUSE_H
#include <QtNetwork>
#include <QObject>
#include <QDebug>
#include <QIODevice>
#include <QSslSocket>
#include <QNetworkAccessManager>

class Datamuse : public QObject
{
public:
    Datamuse(QString w);

    Datamuse(int index1, QString w1);

    QStringList returnSynList();

private:
    QString setSearchParam(int w);

    QNetworkAccessManager *net;

    QStringList synList;
};

#endif // DATAMUSE_H
