// Copyright (c) 2009-2017 The Bitcoin Core developers\n// Copyright (c) 2009-2016 The Litecoin Core developers\n// Copyright (c) 2009-2016 The Megacoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MEGACOIN_QT_TEST_COMPATTESTS_H
#define MEGACOIN_QT_TEST_COMPATTESTS_H

#include <QObject>
#include <QTest>

class CompatTests : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void bswapTests();
};

#endif // MEGACOIN_QT_TEST_COMPATTESTS_H
