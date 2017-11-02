// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PYTHONBIT_QT_PYTHONBITADDRESSVALIDATOR_H
#define PYTHONBIT_QT_PYTHONBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class PythonbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PythonbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Pythonbit address widget validator, checks for a valid pythonbit address.
 */
class PythonbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PythonbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // PYTHONBIT_QT_PYTHONBITADDRESSVALIDATOR_H
