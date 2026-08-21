/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 */

#ifndef RAN_FUNC_SM_SRS_SUBSCRIPTION_AGENT_H
#define RAN_FUNC_SM_SRS_SUBSCRIPTION_AGENT_H

#include "openair2/E2AP/flexric/src/sm/srs_sm/ie/srs_data_ie.h"
#include "common/utils/ds/seq_arr.h"

typedef struct ran_param_data {
  uint32_t ric_req_id;
  //srs_event_trigger_t ev_tr;
} ran_param_data_t;


// seq_arr_t srs_subs_data;

void init_srs_subs_data(seq_arr_t *srs_subs_data);
void insert_srs_subs_data(seq_arr_t *seq_arr, ran_param_data_t *data);
void remove_srs_subs_data(seq_arr_t *srs_subs_data, uint32_t ric_req_id);

#endif
