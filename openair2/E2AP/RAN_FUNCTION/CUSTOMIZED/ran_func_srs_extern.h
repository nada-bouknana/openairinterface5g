/*
 * SPDX-License-Identifier: LicenseRef-CSSL-1.0
 */

#ifndef RAN_FUNC_SM_SRS_EXTERN_AGENT_H
#define RAN_FUNC_SM_SRS_EXTERN_AGENT_H

// #include "openair2/NR_PHY_INTERFACE/NR_IF_Module.h"
#include "nfapi/open-nFAPI/nfapi/public_inc/nfapi_nr_interface_scf.h"
#include "openair2/E2AP/flexric/src/util/byte_array.h"


// uint8_t pack_nr_srs_report_tlv(const nfapi_srs_report_tlv_t *report_tlv, uint8_t **ppWritePackedMsg, uint8_t *end);
// uint8_t pack_nr_srs_indication_body(const nfapi_nr_srs_indication_pdu_t *value, uint8_t **ppWritePackedMsg, uint8_t *end);
// void signal_nfapi_srs_indication(NR_UL_IND_t *UL_info, nfapi_nr_srs_indication_pdu_t *nfapi_srs_ind);
void signal_nfapi_srs_indication(nfapi_nr_srs_indication_t *nfapi_srs_ind);

#endif
