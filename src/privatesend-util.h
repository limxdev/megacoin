// Copyright (c) 2014-2017 The Dash Core developers
// Copyright (c) 2018 FXTC developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MEGACOIN_PRIVATESEND_UTIL_H
#define MEGACOIN_PRIVATESEND_UTIL_H

#include <wallet/wallet.h>

class CKeyHolder
{
private:
    CReserveKey reserveKey;
    CPubKey pubKey;
public:
    CKeyHolder(CWallet* pwalletIn);
    CKeyHolder(CKeyHolder&&) = default;
    CKeyHolder& operator=(CKeyHolder&&) = default;
    void KeepKey();
    void ReturnKey();

    CScript GetScriptForDestination() const;

};

class CKeyHolderStorage
{
private:
    std::vector<std::unique_ptr<CKeyHolder> > storage;
    mutable CCriticalSection cs_storage;

public:
    CScript AddKey(CWallet* pwalletIn);
    void KeepAll();
    void ReturnAll();

};

#endif // MEGACOIN_PRIVATESEND_UTIL_H