//*****************************************************************************
//
//  accessories.pb.h
//! @file
//!
//! @brief Auto-generated (see below).
//!
//
//*****************************************************************************

//*****************************************************************************
//
// Copyright (c) 2023, Ambiq Micro, Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer in the
// documentation and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from this
// software without specific prior written permission.
//
// Third party software included in this distribution is subject to the
// additional license terms as defined in the /docs/licenses directory.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
// This is part of revision release_sdk_3_1_1-10cda4b5e0 of the AmbiqSuite Development Package.
//
//*****************************************************************************
/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.1 at Fri Nov 09 16:58:28 2018. */

#ifndef PB_ACCESSORIES_PB_H_INCLUDED
#define PB_ACCESSORIES_PB_H_INCLUDED
#include <pb.h>

#include "common.pb.h"

#include "system.pb.h"

#include "transport.pb.h"

#include "speech.pb.h"

#include "calling.pb.h"

#include "central.pb.h"

#include "device.pb.h"

#include "media.pb.h"

#include "state.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _Command
{
    Command_NONE = 0,
    Command_RESET_CONNECTION = 51,
    Command_SYNCHRONIZE_SETTINGS = 50,
    Command_KEEP_ALIVE = 55,
    Command_REMOVE_DEVICE = 56,
    Command_UPGRADE_TRANSPORT = 30,
    Command_SWITCH_TRANSPORT = 31,
    Command_START_SPEECH = 11,
    Command_PROVIDE_SPEECH = 10,
    Command_STOP_SPEECH = 12,
    Command_ENDPOINT_SPEECH = 13,
    Command_NOTIFY_SPEECH_STATE = 14,
    Command_FORWARD_AT_COMMAND = 40,
    Command_INCOMING_CALL = 41,
    Command_GET_CENTRAL_INFORMATION = 103,
    Command_GET_DEVICE_INFORMATION = 20,
    Command_GET_DEVICE_CONFIGURATION = 21,
    Command_OVERRIDE_ASSISTANT = 22,
    Command_START_SETUP = 23,
    Command_COMPLETE_SETUP = 24,
    Command_NOTIFY_DEVICE_CONFIGURATION = 25,
    Command_UPDATE_DEVICE_INFORMATION = 26,
    Command_NOTIFY_DEVICE_INFORMATION = 27,
    Command_ISSUE_MEDIA_CONTROL = 60,
    Command_GET_STATE = 100,
    Command_SET_STATE = 101,
    Command_SYNCHRONIZE_STATE = 102
} Command;
#define _Command_MIN Command_NONE
#define _Command_MAX Command_SYNCHRONIZE_STATE
#define _Command_ARRAYSIZE ((Command)(Command_SYNCHRONIZE_STATE + 1))

/* Struct definitions */
typedef struct _Response
{
    ErrorCode error_code;
    pb_size_t which_payload;
    union
    {
        DeviceInformation device_information;
        State state;
        ConnectionDetails connection_details;
        DeviceConfiguration device_configuration;
        CentralInformation central_information;
        Dialog dialog;
        SpeechProvider speech_provider;
    } payload;
/* @@protoc_insertion_point(struct:Response) */
} Response;

typedef struct _ControlEnvelope
{
    Command command;
    pb_size_t which_payload;
    union
    {
        Response response;
        ProvideSpeech provide_speech;
        StartSpeech start_speech;
        StopSpeech stop_speech;
        EndpointSpeech endpoint_speech;
        NotifySpeechState notify_speech_state;
        GetDeviceInformation get_device_information;
        GetDeviceConfiguration get_device_configuration;
        OverrideAssistant override_assistant;
        StartSetup start_setup;
        CompleteSetup complete_setup;
        NotifyDeviceConfiguration notify_device_configuration;
        UpdateDeviceInformation update_device_information;
        NotifyDeviceInformation notify_device_information;
        UpgradeTransport upgrade_transport;
        SwitchTransport switch_transport;
        ForwardATCommand forward_at_command;
        IncomingCall incoming_call;
        SynchronizeSettings synchronize_settings;
        ResetConnection reset_connection;
        KeepAlive keep_alive;
        RemoveDevice remove_device;
        IssueMediaControl issue_media_control;
        GetState get_state;
        SetState set_state;
        SynchronizeState synchronize_state;
        GetCentralInformation get_central_information;
    } payload;
/* @@protoc_insertion_point(struct:ControlEnvelope) */
} ControlEnvelope;

/* Default values for struct fields */

/* Initializer values for message structs */
#define Response_init_default                    {_ErrorCode_MIN, 0, {DeviceInformation_init_default}}
#define ControlEnvelope_init_default             {_Command_MIN, 0, {Response_init_default}}
#define Response_init_zero                       {_ErrorCode_MIN, 0, {DeviceInformation_init_zero}}
#define ControlEnvelope_init_zero                {_Command_MIN, 0, {Response_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define Response_device_information_tag          3
#define Response_state_tag                       7
#define Response_connection_details_tag          8
#define Response_device_configuration_tag        10
#define Response_central_information_tag         13
#define Response_dialog_tag                      14
#define Response_speech_provider_tag             15
#define Response_error_code_tag                  1
#define ControlEnvelope_response_tag             9
#define ControlEnvelope_provide_speech_tag       10
#define ControlEnvelope_start_speech_tag         11
#define ControlEnvelope_stop_speech_tag          12
#define ControlEnvelope_endpoint_speech_tag      13
#define ControlEnvelope_notify_speech_state_tag  14
#define ControlEnvelope_get_device_information_tag 20
#define ControlEnvelope_get_device_configuration_tag 21
#define ControlEnvelope_override_assistant_tag   22
#define ControlEnvelope_start_setup_tag          23
#define ControlEnvelope_complete_setup_tag       24
#define ControlEnvelope_notify_device_configuration_tag 25
#define ControlEnvelope_update_device_information_tag 26
#define ControlEnvelope_notify_device_information_tag 27
#define ControlEnvelope_upgrade_transport_tag    30
#define ControlEnvelope_switch_transport_tag     31
#define ControlEnvelope_forward_at_command_tag   40
#define ControlEnvelope_incoming_call_tag        41
#define ControlEnvelope_synchronize_settings_tag 50
#define ControlEnvelope_reset_connection_tag     51
#define ControlEnvelope_keep_alive_tag           55
#define ControlEnvelope_remove_device_tag        56
#define ControlEnvelope_issue_media_control_tag  60
#define ControlEnvelope_get_state_tag            100
#define ControlEnvelope_set_state_tag            101
#define ControlEnvelope_synchronize_state_tag    102
#define ControlEnvelope_get_central_information_tag 103
#define ControlEnvelope_command_tag              1

/* Struct field encoding specification for nanopb */
extern const pb_field_t Response_fields[9];
extern const pb_field_t ControlEnvelope_fields[29];

/* Maximum encoded size of messages (where known) */
#define Response_size                            104
#define ControlEnvelope_size                     (2 + (UpdateDeviceInformation_size > 302 ? UpdateDeviceInformation_size : 302))

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ACCESSORIES_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
