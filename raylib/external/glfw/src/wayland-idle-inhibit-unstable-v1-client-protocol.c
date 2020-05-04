/* Generated by wayland-scanner 1.18.0 */

/*
 * Copyright © 2015 Samsung Electronics Co., Ltd
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

extern const struct wl_interface wl_surface_interface;
extern const struct wl_interface zwp_idle_inhibitor_v1_interface;

static const struct wl_interface *idle_inhibit_unstable_v1_wl_ii_types[] = {
	&zwp_idle_inhibitor_v1_interface,
	&wl_surface_interface,
};

static const struct wl_message zwp_idle_inhibit_manager_v1_requests[] = {
	{ "destroy", "", idle_inhibit_unstable_v1_wl_ii_types + 0 },
	{ "create_inhibitor", "no", idle_inhibit_unstable_v1_wl_ii_types + 0 },
};

WL_EXPORT const struct wl_interface zwp_idle_inhibit_manager_v1_interface = {
	"zwp_idle_inhibit_manager_v1", 1,
	2, zwp_idle_inhibit_manager_v1_requests,
	0, NULL,
};

static const struct wl_message zwp_idle_inhibitor_v1_requests[] = {
	{ "destroy", "", idle_inhibit_unstable_v1_wl_ii_types + 0 },
};

WL_EXPORT const struct wl_interface zwp_idle_inhibitor_v1_interface = {
	"zwp_idle_inhibitor_v1", 1,
	1, zwp_idle_inhibitor_v1_requests,
	0, NULL,
};

