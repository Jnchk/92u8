/*
 * Copyright (c) 2007-2008 Atheros Communications, Inc.
 * All rights reserved.
 *
 */
/**
 * @defgroup fal_stp FAL_STP
 * @{
 */  
#include "sw.h"
#include "fal_stp.h"
#include "hsl_api.h"

static sw_error_t
_fal_stp_port_state_set(a_uint32_t dev_id, a_uint32_t st_id,
                       fal_port_t port_id, fal_stp_state_t state)
{
    sw_error_t rv;
    hsl_api_t *p_api;

    SW_RTN_ON_NULL(p_api = hsl_api_ptr_get(dev_id));

    if (NULL == p_api->stp_port_state_set)
        return SW_NOT_SUPPORTED;

    rv = p_api->stp_port_state_set(dev_id, st_id, port_id, state);
    return rv;
}

static sw_error_t
_fal_stp_port_state_get(a_uint32_t dev_id, a_uint32_t st_id,
                       fal_port_t port_id, fal_stp_state_t * state)
{
    sw_error_t rv;
    hsl_api_t *p_api;

    SW_RTN_ON_NULL(p_api = hsl_api_ptr_get(dev_id));

    if (NULL == p_api->stp_port_state_get)
        return SW_NOT_SUPPORTED;

    rv = p_api->stp_port_state_get(dev_id, st_id, port_id, state);
    return rv;
}

/**
 * @brief Set port stp state on a particular spanning tree and port.
 *   @details   Comments:
 *    For those devices which only support single spanning tree st_id should
 *    be FAL_SINGLE_STP_ID that is zero.
 * @param[in] dev_id device id
 * @param[in] st_id spanning tree id
 * @param[in] port_id port id
 * @param[in] state port state for spanning tree
 * @return SW_OK or error code
 */
sw_error_t
fal_stp_port_state_set(a_uint32_t dev_id, a_uint32_t st_id,
                       fal_port_t port_id, fal_stp_state_t state)
{
    sw_error_t rv;

    FAL_API_LOCK;
    rv = _fal_stp_port_state_set(dev_id, st_id, port_id, state);
    FAL_API_UNLOCK;
    return rv;
}

/**
 * @brief Get port stp state on a particular spanning tree and port.
 *   @details  Comments:
 *    For those devices which only support single spanning tree st_id should
 *    be FAL_SINGLE_STP_ID that is zero.
 * @param[in] dev_id device id
 * @param[in] st_id spanning tree id
 * @param[in] port_id port id
 * @param[out] state port state for spanning tree
 * @return SW_OK or error code
 */
sw_error_t
fal_stp_port_state_get(a_uint32_t dev_id, a_uint32_t st_id,
                       fal_port_t port_id, fal_stp_state_t * state)
{
    sw_error_t rv;

    FAL_API_LOCK;
    rv = _fal_stp_port_state_get(dev_id, st_id, port_id, state);
    FAL_API_UNLOCK;
    return rv;
}

/**
 * @}
 */
