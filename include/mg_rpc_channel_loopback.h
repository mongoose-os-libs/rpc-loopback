/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_MOS_LIBS_RPC_LOOPBACK_SRC_MG_RPC_CHANNEL_LOOPBACK_H_
#define CS_MOS_LIBS_RPC_LOOPBACK_SRC_MG_RPC_CHANNEL_LOOPBACK_H_

#include "mg_rpc_channel.h"

#include "mongoose.h"

#define MGOS_RPC_LOOPBACK_ADDR "RPC.LOCAL"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Creates a new loopback channel. Should be called for each incoming loopback
 * request; `nc` is an incoming connection.
 */
struct mg_rpc_channel *mg_rpc_channel_loopback(void);

bool mgos_rpc_loopback_init(void);

#ifdef __cplusplus
}
#endif

#endif /* CS_MOS_LIBS_RPC_LOOPBACK_SRC_MG_RPC_CHANNEL_LOOPBACK_H_ */
