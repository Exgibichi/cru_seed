// Copyright (c) 2018 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef __INCLUDED_COIN_H__
#define __INCLUDED_COIN_H__
#define MIN_BLOCK 1000
#define MIN_TESTNET_BLOCK 1000
#define REQUIRE_VERSION 70001
#include <string>

static const std::string mainnet_seeds[] = {"seed.cryptoru.info",
                                            "explorer.cryptoru.info",
                                            ""};

static const std::string testnet_seeds[] = {""};

static const int mainnet_port = 20180;
static const int testnet_port = 20181;
static const int minimunClientVersion = 1000;
static const int PROTOCOL_VERSION = 70002;

static unsigned char pchMessageStart[4] = {0x12, 0x22, 0x32, 0x42};
static unsigned char pchMessageStart_testnet[4] = {0x0b, 0x11, 0x09, 0x07};

#endif // __INCLUDED_COIN_H__
