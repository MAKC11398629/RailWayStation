#ifndef MEDIAREADER_H
#define MEDIAREADER_H

#include <QObject>

class MediaReader : public QObject
{
    Q_OBJECT
public:
    explicit MediaReader(QObject *parent = nullptr);

signals:

public slots:
};

#endif // MEDIAREADER_H