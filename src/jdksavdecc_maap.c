
/*
  Copyright (c) 2013, J.D. Koftinoff Software, Ltd.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:

   1. Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.

   3. Neither the name of J.D. Koftinoff Software, Ltd. nor the names of its
      contributors may be used to endorse or promote products derived from
      this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.
*/


#include "jdksavdecc_world.h"
#include "jdksavdecc_maap.h"

struct jdksavdecc_eui48 jdksavdecc_maap_dynamic_allocation_pool_start = JDKSAVDECC_MAAP_DYNAMIC_ALLOCATION_POOL_START;

struct jdksavdecc_eui48 jdksavdecc_maap_dynamic_allocation_pool_end = JDKSAVDECC_MAAP_DYNAMIC_ALLOCATION_POOL_END;

struct jdksavdecc_eui48 jdksavdecc_maap_local_allocation_pool_start = JDKSAVDECC_MAAP_LOCAL_ALLOCATION_POOL_START;

struct jdksavdecc_eui48 jdksavdecc_maap_local_allocation_pool_end = JDKSAVDECC_MAAP_LOCAL_ALLOCATION_POOL_END;

#if 0 // TODO
void jdksavdecc_maap_state_machine_init(
    struct jdksavdecc_maap_state_machine *self,
    jdksavdecc_microsecond_time current_time,
    struct jdksavdecc_eui48 local_mac,
    uint16_t desired_count,
    struct jdksavdecc_frame_sender *frame_sender,
    uint32_t tag,
    void *additional
    )
{
}


void jdksavdecc_maap_state_machine_destroy(
    struct jdksavdecc_state_machine *self
    )
{
}


void jdksavdecc_maap_state_machine_tick(
    struct jdksavdecc_state_machine *self,
    jdksavdecc_microsecond_time current_time
    )
{
}


ssize_t jdksavdecc_maap_state_machine_rx_frame(
    struct jdksavdecc_state_machine *self,
    struct jdksavdecc_frame *rx_frame,
    size_t pos
    )
{
    return 0;
}


void jdksavdecc_maap_state_machine_tx_frame(
    struct jdksavdecc_state_machine *self,
    struct jdksavdecc_frame const *frame
    )
{
}



/// See IEEE Std 1722-2011 Annex B.3.2
void jdksavdecc_maap_state_initial(
    struct jdksavdecc_maap_state_machine *self,
    enum jdksavdecc_maap_event event,
    struct jdksavdecc_maap *received_pdu
    )
{
}
    

/// See IEEE Std 1722-2011 Annex B.3.2
void jdksavdecc_maap_state_probe(
    struct jdksavdecc_maap_state_machine *self,
    enum jdksavdecc_maap_event event,
    struct jdksavdecc_maap *received_pdu
    )
{
}


/// See IEEE Std 1722-2011 Annex B.3.2
void jdksavdecc_maap_state_defend(
    struct jdksavdecc_maap_state_machine *self,
    enum jdksavdecc_maap_event event,
    struct jdksavdecc_maap *received_pdu
    )
{
}



/// See IEEE Std 1722-2011 Annex B.3.6.1
void jdksavdecc_maap_action_generate_address(
    struct jdksavdecc_maap_state_machine *self,
    struct jdksavdecc_eui48 *start_address,
    uint16_t count
    )
{
}


/// See IEEE Std 1722-2011 Annex B.3.6.2
void jdksavdecc_maap_action_init_maap_probe_count(
    struct jdksavdecc_maap_state_machine *self
    )
{
}


/// See IEEE Std 1722-2011 Annex B.3.6.3
void jdksavdecc_maap_action_dec_maap_probe_count(
    struct jdksavdecc_maap_state_machine *self
    )
{
}


/// See IEEE Std 1722-2011 Annex B.3.6.4
void jdksavdecc_maap_action_compare_mac(
    struct jdksavdecc_maap_state_machine *self,
    struct jdksavdecc_maap *received_pdu
    )
{
}


/// See IEEE Std 1722-2011 Annex B.3.6.5
void jdksavdecc_maap_action_sprobe(
    struct jdksavdecc_maap_state_machine *self
    )
{
}


/// See IEEE Std 1722-2011 Annex B.3.6.6
void jdksavdecc_maap_action_sdefend(
    struct jdksavdecc_maap_state_machine *self
    )
{
}


/// See IEEE Std 1722-2011 Annex B.3.6.7
void jdksavdecc_maap_action_sannounce(
    struct jdksavdecc_maap_state_machine *self
    )
{
}

#endif





