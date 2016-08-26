#ifndef jdcoinADDRESSVALIDATOR_H
#define jdcoinADDRESSVALIDATOR_H

#include <QRegExpValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class jdcoinAddressValidator : public QValidator
{
    Q_OBJECT
public:
    explicit jdcoinAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
signals:

public slots:

};

#endif // jdcoinADDRESSVALIDATOR_H
