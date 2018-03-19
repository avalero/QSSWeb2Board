#ifndef ARDUINOEXCEPTIONS_H
#define ARDUINOEXCEPTIONS_H

#include <QObject>
#include <QException>


class VerifyException: public QException{
    public:
        VerifyException(const QString& s, const QList<QString>& l = QList<QString>()):message(s),errorsList(l){}
        void raise() const { throw *this; }
        VerifyException *clone() const { return new VerifyException(*this); }
        QString getMessage() const{return message;}

    public:
        const QString message;
        const QList<QString> errorsList;
};

class UploadException: public QException{
    public:
        UploadException(const QString& s):message(s){}
        void raise() const { throw *this; }
        UploadException *clone() const { return new UploadException(*this); }

        const QString message;
};


class FileNotFoundException: public QException{
    public:
        FileNotFoundException(const QString& s):message(s){}
        void raise() const { throw *this; }
        FileNotFoundException *clone() const { return new FileNotFoundException(*this); }

        const QString message;
};


class BoardNotKnownException: public QException{
    public:
        BoardNotKnownException(const QString& s):message(s){}
        void raise() const { throw *this; }
        BoardNotKnownException *clone() const { return new BoardNotKnownException(*this); }

        const QString message;
};

class BoardNotDetectedException: public QException{
    public:
        BoardNotDetectedException(const QString& s):message(s){}
        void raise() const { throw *this; }
        BoardNotDetectedException *clone() const { return new BoardNotDetectedException(*this); }

        const QString message;
};

class FileNotCreatedException: public QException{
    public:
        FileNotCreatedException(const QString& s):message(s){}
        void raise() const { throw *this; }
        FileNotCreatedException *clone() const { return new FileNotCreatedException(*this); }

        const QString message;
};

#endif // ARDUINOEXCEPTIONS_H
