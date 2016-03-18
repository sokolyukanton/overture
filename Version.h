#ifndef VERSION_H
#define VERSION_H
#include <qstring.h>
#include <Element.h>
#include <qvector.h>

class Version
{
private:
    int _id;
    QString _name;
    QVector<Element> _elements;
public:
    Version();
    Version(int id, QString name, QVector<Element> elements):_id(id), _name(name), _elements(elements){}
    int getId(){
        return _id;
    }
    QString getName(){
        return _name;
    }
    QVector<Element> getElements(){
        return _elements;
    }
};

#endif // VERSION_H
