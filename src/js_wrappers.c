/* Extended Module Player
 * Copyright (C) 1996-2014 Claudio Matsuoka and Hipolito Carraro Jr
 *
 * This file is part of the Extended Module Player and is distributed
 * under the terms of the GNU Lesser General Public License. See COPYING.LIB
 * for more information.
 */

#include <stdlib.h>
#include <string.h>
#include <xmp.h>

extern int xmp_js__mi_get_loop_count(struct xmp_frame_info * mi_p)
{
    return mi_p->loop_count;
}

extern void * xmp_js__mi_get_buffer(struct xmp_frame_info * mi_p)
{
    return mi_p->buffer;
}

extern int xmp_js__mi_get_buffer_size(struct xmp_frame_info * mi_p)
{
    return mi_p->buffer_size;
}

extern int xmp_js__sizeof()
{
    return sizeof(struct xmp_frame_info);
}
