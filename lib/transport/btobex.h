/**
	\file btobex.h
	Bluetooth OBEX, Bluetooth transport for OBEX.
	OpenOBEX library - Free implementation of the Object Exchange protocol.

 	Copyright (c) 2002 Marcel Holtmann, All Rights Reserved.

	OpenOBEX is free software; you can redistribute it and/or modify
	it under the terms of the GNU Lesser General Public License as
	published by the Free Software Foundation; either version 2.1 of
	the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with OpenOBEX. If not, see <http://www.gnu.org/>.
 */

#ifndef BTOBEX_H
#define BTOBEX_H

#include "bluez_compat.h"
#include "obex_transport.h"

void btobex_get_ops(struct obex_transport_ops* ops);
void btobex_prepare_connect(obex_t *self, const bdaddr_t *src,
			    const bdaddr_t *dst, uint8_t channel);
void btobex_prepare_listen(obex_t *self, const bdaddr_t *src, uint8_t channel);

struct btobex_rfcomm_data {
	struct sockaddr_rc self;
	struct sockaddr_rc peer;
};

union btobex_data {
	struct btobex_rfcomm_data rfcomm;
};
#endif