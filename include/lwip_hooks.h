// file: <include/lwip_hooks.h>
#ifndef _LWIP_HOOKS_H_
#define _LWIP_HOOKS_H_

#include "lwip/netif.h"
#include "lwip/pbuf.h"
#include "lwip/ip4.h"

#include "esp_log.h"
#include "esp_err.h"

#ifdef __cplusplus
extern "C"
{
#endif

    int lwip_hook_ip4_input(struct pbuf *pbuf, struct netif *input_netif);
#define LWIP_HOOK_IP4_INPUT lwip_hook_ip4_input

#ifdef __cplusplus
}
#endif

#endif /* _LWIP_HOOKS_H_ */