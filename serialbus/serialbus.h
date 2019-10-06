// +build !minimal

#pragma once

#ifndef GO_QTSERIALBUS_H
#define GO_QTSERIALBUS_H

#include <stdint.h>

#ifdef __cplusplus
int QCanBus_QCanBus_QRegisterMetaType();
int QCanBusDevice_QCanBusDevice_QRegisterMetaType();
int QModbusClient_QModbusClient_QRegisterMetaType();
int QModbusDevice_QModbusDevice_QRegisterMetaType();
int QModbusReply_QModbusReply_QRegisterMetaType();
int QModbusRtuSerialMaster_QModbusRtuSerialMaster_QRegisterMetaType();
int QModbusRtuSerialSlave_QModbusRtuSerialSlave_QRegisterMetaType();
int QModbusServer_QModbusServer_QRegisterMetaType();
int QModbusTcpClient_QModbusTcpClient_QRegisterMetaType();
int QModbusTcpServer_QModbusTcpServer_QRegisterMetaType();
extern "C" {
#endif

struct QtSerialBus_PackedString { char* data; long long len; };
struct QtSerialBus_PackedList { void* data; long long len; };
struct QtSerialBus_PackedList QCanBus_AvailableDevices(void* ptr, struct QtSerialBus_PackedString plugin, struct QtSerialBus_PackedString errorMessage);
void* QCanBus_CreateDevice(void* ptr, struct QtSerialBus_PackedString plugin, struct QtSerialBus_PackedString interfaceName, struct QtSerialBus_PackedString errorMessage);
void* QCanBus_QCanBus_Instance();
struct QtSerialBus_PackedString QCanBus_Plugins(void* ptr);
void* QCanBus___availableDevices_atList(void* ptr, int i);
void QCanBus___availableDevices_setList(void* ptr, void* i);
void* QCanBus___availableDevices_newList(void* ptr);
void* QCanBus___children_atList(void* ptr, int i);
void QCanBus___children_setList(void* ptr, void* i);
void* QCanBus___children_newList(void* ptr);
void* QCanBus___dynamicPropertyNames_atList(void* ptr, int i);
void QCanBus___dynamicPropertyNames_setList(void* ptr, void* i);
void* QCanBus___dynamicPropertyNames_newList(void* ptr);
void* QCanBus___findChildren_atList(void* ptr, int i);
void QCanBus___findChildren_setList(void* ptr, void* i);
void* QCanBus___findChildren_newList(void* ptr);
void* QCanBus___findChildren_atList3(void* ptr, int i);
void QCanBus___findChildren_setList3(void* ptr, void* i);
void* QCanBus___findChildren_newList3(void* ptr);
void* QCanBus___qFindChildren_atList2(void* ptr, int i);
void QCanBus___qFindChildren_setList2(void* ptr, void* i);
void* QCanBus___qFindChildren_newList2(void* ptr);
void QCanBus_ChildEventDefault(void* ptr, void* event);
void QCanBus_ConnectNotifyDefault(void* ptr, void* sign);
void QCanBus_CustomEventDefault(void* ptr, void* event);
void QCanBus_DeleteLaterDefault(void* ptr);
void QCanBus_DisconnectNotifyDefault(void* ptr, void* sign);
char QCanBus_EventDefault(void* ptr, void* e);
char QCanBus_EventFilterDefault(void* ptr, void* watched, void* event);
void* QCanBus_MetaObjectDefault(void* ptr);
void QCanBus_TimerEventDefault(void* ptr, void* event);
void* QCanBusDevice_NewQCanBusDevice2(void* parent);
void QCanBusDevice_Clear(void* ptr, long long direction);
void QCanBusDevice_Close(void* ptr);
struct QtSerialBus_PackedList QCanBusDevice_ConfigurationKeys(void* ptr);
void* QCanBusDevice_ConfigurationParameter(void* ptr, int key);
char QCanBusDevice_ConnectDevice(void* ptr);
void QCanBusDevice_DisconnectDevice(void* ptr);
void QCanBusDevice_EnqueueOutgoingFrame(void* ptr, void* newFrame);
void QCanBusDevice_EnqueueReceivedFrames(void* ptr, void* newFrames);
long long QCanBusDevice_Error(void* ptr);
void QCanBusDevice_ConnectErrorOccurred(void* ptr, long long t);
void QCanBusDevice_DisconnectErrorOccurred(void* ptr);
void QCanBusDevice_ErrorOccurred(void* ptr, long long vqc);
struct QtSerialBus_PackedString QCanBusDevice_ErrorString(void* ptr);
long long QCanBusDevice_FramesAvailable(void* ptr);
void QCanBusDevice_ConnectFramesReceived(void* ptr, long long t);
void QCanBusDevice_DisconnectFramesReceived(void* ptr);
void QCanBusDevice_FramesReceived(void* ptr);
long long QCanBusDevice_FramesToWrite(void* ptr);
void QCanBusDevice_ConnectFramesWritten(void* ptr, long long t);
void QCanBusDevice_DisconnectFramesWritten(void* ptr);
void QCanBusDevice_FramesWritten(void* ptr, long long framesCount);
char QCanBusDevice_HasOutgoingFrames(void* ptr);
struct QtSerialBus_PackedString QCanBusDevice_InterpretErrorFrame(void* ptr, void* frame);
char QCanBusDevice_Open(void* ptr);
void QCanBusDevice_SetConfigurationParameter(void* ptr, int key, void* value);
void QCanBusDevice_SetConfigurationParameterDefault(void* ptr, int key, void* value);
void QCanBusDevice_SetError(void* ptr, struct QtSerialBus_PackedString errorText, long long errorId);
void QCanBusDevice_SetState(void* ptr, long long newState);
long long QCanBusDevice_State(void* ptr);
void QCanBusDevice_ConnectStateChanged(void* ptr, long long t);
void QCanBusDevice_DisconnectStateChanged(void* ptr);
void QCanBusDevice_StateChanged(void* ptr, long long state);
char QCanBusDevice_WaitForFramesReceived(void* ptr, int msecs);
char QCanBusDevice_WaitForFramesReceivedDefault(void* ptr, int msecs);
char QCanBusDevice_WaitForFramesWritten(void* ptr, int msecs);
char QCanBusDevice_WaitForFramesWrittenDefault(void* ptr, int msecs);
char QCanBusDevice_WriteFrame(void* ptr, void* frame);
int QCanBusDevice___configurationKeys_atList(void* ptr, int i);
void QCanBusDevice___configurationKeys_setList(void* ptr, int i);
void* QCanBusDevice___configurationKeys_newList(void* ptr);
void QCanBusDevice___enqueueReceivedFrames_newFrames_setList(void* ptr, void* i);
void* QCanBusDevice___enqueueReceivedFrames_newFrames_newList(void* ptr);
void* QCanBusDevice___children_atList(void* ptr, int i);
void QCanBusDevice___children_setList(void* ptr, void* i);
void* QCanBusDevice___children_newList(void* ptr);
void* QCanBusDevice___dynamicPropertyNames_atList(void* ptr, int i);
void QCanBusDevice___dynamicPropertyNames_setList(void* ptr, void* i);
void* QCanBusDevice___dynamicPropertyNames_newList(void* ptr);
void* QCanBusDevice___findChildren_atList(void* ptr, int i);
void QCanBusDevice___findChildren_setList(void* ptr, void* i);
void* QCanBusDevice___findChildren_newList(void* ptr);
void* QCanBusDevice___findChildren_atList3(void* ptr, int i);
void QCanBusDevice___findChildren_setList3(void* ptr, void* i);
void* QCanBusDevice___findChildren_newList3(void* ptr);
void* QCanBusDevice___qFindChildren_atList2(void* ptr, int i);
void QCanBusDevice___qFindChildren_setList2(void* ptr, void* i);
void* QCanBusDevice___qFindChildren_newList2(void* ptr);
void QCanBusDevice_ChildEventDefault(void* ptr, void* event);
void QCanBusDevice_ConnectNotifyDefault(void* ptr, void* sign);
void QCanBusDevice_CustomEventDefault(void* ptr, void* event);
void QCanBusDevice_DeleteLaterDefault(void* ptr);
void QCanBusDevice_DisconnectNotifyDefault(void* ptr, void* sign);
char QCanBusDevice_EventDefault(void* ptr, void* e);
char QCanBusDevice_EventFilterDefault(void* ptr, void* watched, void* event);
void* QCanBusDevice_MetaObjectDefault(void* ptr);
void QCanBusDevice_TimerEventDefault(void* ptr, void* event);
int QCanBusDeviceInfo_Channel(void* ptr);
struct QtSerialBus_PackedString QCanBusDeviceInfo_Description(void* ptr);
char QCanBusDeviceInfo_HasFlexibleDataRate(void* ptr);
char QCanBusDeviceInfo_IsVirtual(void* ptr);
struct QtSerialBus_PackedString QCanBusDeviceInfo_Name(void* ptr);
struct QtSerialBus_PackedString QCanBusDeviceInfo_SerialNumber(void* ptr);
void QCanBusDeviceInfo_Swap(void* ptr, void* other);
void QCanBusDeviceInfo_DestroyQCanBusDeviceInfo(void* ptr);
void* QCanBusFactory_CreateDevice(void* ptr, struct QtSerialBus_PackedString interfaceName, struct QtSerialBus_PackedString errorMessage);
struct QtSerialBus_PackedList QCanBusFactoryV2_AvailableDevices(void* ptr, struct QtSerialBus_PackedString errorMessage);
void* QCanBusFactoryV2_CreateDevice(void* ptr, struct QtSerialBus_PackedString interfaceName, struct QtSerialBus_PackedString errorMessage);
void* QCanBusFactoryV2___availableDevices_atList(void* ptr, int i);
void QCanBusFactoryV2___availableDevices_setList(void* ptr, void* i);
void* QCanBusFactoryV2___availableDevices_newList(void* ptr);
int QCanBusFrame_TransmissionTimeoutError_Type();
int QCanBusFrame_LostArbitrationError_Type();
int QCanBusFrame_ControllerError_Type();
int QCanBusFrame_ProtocolViolationError_Type();
int QCanBusFrame_TransceiverError_Type();
int QCanBusFrame_MissingAcknowledgmentError_Type();
int QCanBusFrame_BusOffError_Type();
int QCanBusFrame_BusError_Type();
int QCanBusFrame_ControllerRestartError_Type();
int QCanBusFrame_UnknownError_Type();
int QCanBusFrame_AnyError_Type();
void* QCanBusFrame_NewQCanBusFrame(long long ty);
void* QCanBusFrame_NewQCanBusFrame2(unsigned int identifier, void* data);
long long QCanBusFrame_Error(void* ptr);
unsigned int QCanBusFrame_FrameId(void* ptr);
long long QCanBusFrame_FrameType(void* ptr);
char QCanBusFrame_HasBitrateSwitch(void* ptr);
char QCanBusFrame_HasErrorStateIndicator(void* ptr);
char QCanBusFrame_HasExtendedFrameFormat(void* ptr);
char QCanBusFrame_HasFlexibleDataRateFormat(void* ptr);
char QCanBusFrame_HasLocalEcho(void* ptr);
char QCanBusFrame_IsValid(void* ptr);
void* QCanBusFrame_Payload(void* ptr);
void QCanBusFrame_SetBitrateSwitch(void* ptr, char bitrateSwitch);
void QCanBusFrame_SetError(void* ptr, long long error);
void QCanBusFrame_SetErrorStateIndicator(void* ptr, char errorStateIndicator);
void QCanBusFrame_SetExtendedFrameFormat(void* ptr, char isExtended);
void QCanBusFrame_SetFlexibleDataRateFormat(void* ptr, char isFlexibleData);
void QCanBusFrame_SetFrameId(void* ptr, unsigned int newFrameId);
void QCanBusFrame_SetFrameType(void* ptr, long long newType);
void QCanBusFrame_SetLocalEcho(void* ptr, char echo);
void QCanBusFrame_SetPayload(void* ptr, void* data);
struct QtSerialBus_PackedString QCanBusFrame_ToString(void* ptr);
void* QModbusClient_NewQModbusClient(void* parent);
int QModbusClient_NumberOfRetries(void* ptr);
char QModbusClient_ProcessPrivateResponse(void* ptr, void* response, void* data);
char QModbusClient_ProcessPrivateResponseDefault(void* ptr, void* response, void* data);
char QModbusClient_ProcessResponse(void* ptr, void* response, void* data);
char QModbusClient_ProcessResponseDefault(void* ptr, void* response, void* data);
void* QModbusClient_SendRawRequest(void* ptr, void* request, int serverAddress);
void* QModbusClient_SendReadRequest(void* ptr, void* read, int serverAddress);
void* QModbusClient_SendReadWriteRequest(void* ptr, void* read, void* write, int serverAddress);
void* QModbusClient_SendWriteRequest(void* ptr, void* write, int serverAddress);
void QModbusClient_SetNumberOfRetries(void* ptr, int number);
void QModbusClient_SetTimeout(void* ptr, int newTimeout);
int QModbusClient_Timeout(void* ptr);
void QModbusClient_ConnectTimeoutChanged(void* ptr, long long t);
void QModbusClient_DisconnectTimeoutChanged(void* ptr);
void QModbusClient_TimeoutChanged(void* ptr, int newTimeout);
void QModbusClient_Close(void* ptr);
void QModbusClient_CloseDefault(void* ptr);
char QModbusClient_Open(void* ptr);
char QModbusClient_OpenDefault(void* ptr);
void* QModbusDataUnit_NewQModbusDataUnit();
void* QModbusDataUnit_NewQModbusDataUnit2(long long ty);
void* QModbusDataUnit_NewQModbusDataUnit3(long long ty, int address, unsigned short size);
void* QModbusDataUnit_NewQModbusDataUnit4(long long ty, int address, void* data);
char QModbusDataUnit_IsValid(void* ptr);
long long QModbusDataUnit_RegisterType(void* ptr);
void QModbusDataUnit_SetRegisterType(void* ptr, long long ty);
void QModbusDataUnit_SetStartAddress(void* ptr, int address);
void QModbusDataUnit_SetValue(void* ptr, int index, unsigned short value);
void QModbusDataUnit_SetValueCount(void* ptr, unsigned int newCount);
void QModbusDataUnit_SetValues(void* ptr, void* values);
int QModbusDataUnit_StartAddress(void* ptr);
unsigned short QModbusDataUnit_Value(void* ptr, int index);
unsigned int QModbusDataUnit_ValueCount(void* ptr);
struct QtSerialBus_PackedList QModbusDataUnit_Values(void* ptr);
unsigned short QModbusDataUnit___QModbusDataUnit_data_atList4(void* ptr, int i);
void QModbusDataUnit___QModbusDataUnit_data_setList4(void* ptr, unsigned short i);
void* QModbusDataUnit___QModbusDataUnit_data_newList4(void* ptr);
unsigned short QModbusDataUnit___setValues_values_atList(void* ptr, int i);
void QModbusDataUnit___setValues_values_setList(void* ptr, unsigned short i);
void* QModbusDataUnit___setValues_values_newList(void* ptr);
unsigned short QModbusDataUnit___values_atList(void* ptr, int i);
void QModbusDataUnit___values_setList(void* ptr, unsigned short i);
void* QModbusDataUnit___values_newList(void* ptr);
unsigned short QModbusDataUnit___m_values_atList(void* ptr, int i);
void QModbusDataUnit___m_values_setList(void* ptr, unsigned short i);
void* QModbusDataUnit___m_values_newList(void* ptr);
unsigned short QModbusDataUnit___setM_values__atList(void* ptr, int i);
void QModbusDataUnit___setM_values__setList(void* ptr, unsigned short i);
void* QModbusDataUnit___setM_values__newList(void* ptr);
void* QModbusDevice_NewQModbusDevice(void* parent);
void QModbusDevice_Close(void* ptr);
char QModbusDevice_ConnectDevice(void* ptr);
void* QModbusDevice_ConnectionParameter(void* ptr, int parameter);
void QModbusDevice_DisconnectDevice(void* ptr);
long long QModbusDevice_Error(void* ptr);
void QModbusDevice_ConnectErrorOccurred(void* ptr, long long t);
void QModbusDevice_DisconnectErrorOccurred(void* ptr);
void QModbusDevice_ErrorOccurred(void* ptr, long long error);
struct QtSerialBus_PackedString QModbusDevice_ErrorString(void* ptr);
char QModbusDevice_Open(void* ptr);
void QModbusDevice_SetConnectionParameter(void* ptr, int parameter, void* value);
void QModbusDevice_SetError(void* ptr, struct QtSerialBus_PackedString errorText, long long error);
void QModbusDevice_SetState(void* ptr, long long newState);
long long QModbusDevice_State(void* ptr);
void QModbusDevice_ConnectStateChanged(void* ptr, long long t);
void QModbusDevice_DisconnectStateChanged(void* ptr);
void QModbusDevice_StateChanged(void* ptr, long long state);
void QModbusDevice_DestroyQModbusDevice(void* ptr);
void QModbusDevice_DestroyQModbusDeviceDefault(void* ptr);
void* QModbusDevice___children_atList(void* ptr, int i);
void QModbusDevice___children_setList(void* ptr, void* i);
void* QModbusDevice___children_newList(void* ptr);
void* QModbusDevice___dynamicPropertyNames_atList(void* ptr, int i);
void QModbusDevice___dynamicPropertyNames_setList(void* ptr, void* i);
void* QModbusDevice___dynamicPropertyNames_newList(void* ptr);
void* QModbusDevice___findChildren_atList(void* ptr, int i);
void QModbusDevice___findChildren_setList(void* ptr, void* i);
void* QModbusDevice___findChildren_newList(void* ptr);
void* QModbusDevice___findChildren_atList3(void* ptr, int i);
void QModbusDevice___findChildren_setList3(void* ptr, void* i);
void* QModbusDevice___findChildren_newList3(void* ptr);
void* QModbusDevice___qFindChildren_atList2(void* ptr, int i);
void QModbusDevice___qFindChildren_setList2(void* ptr, void* i);
void* QModbusDevice___qFindChildren_newList2(void* ptr);
void QModbusDevice_ChildEventDefault(void* ptr, void* event);
void QModbusDevice_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusDevice_CustomEventDefault(void* ptr, void* event);
void QModbusDevice_DeleteLaterDefault(void* ptr);
void QModbusDevice_DisconnectNotifyDefault(void* ptr, void* sign);
char QModbusDevice_EventDefault(void* ptr, void* e);
char QModbusDevice_EventFilterDefault(void* ptr, void* watched, void* event);
void* QModbusDevice_MetaObjectDefault(void* ptr);
void QModbusDevice_TimerEventDefault(void* ptr, void* event);
void* QModbusDeviceIdentification_NewQModbusDeviceIdentification();
long long QModbusDeviceIdentification_ConformityLevel(void* ptr);
char QModbusDeviceIdentification_Contains(void* ptr, unsigned int objectId);
void* QModbusDeviceIdentification_QModbusDeviceIdentification_FromByteArray(void* ba);
char QModbusDeviceIdentification_Insert(void* ptr, unsigned int objectId, void* value);
char QModbusDeviceIdentification_IsValid(void* ptr);
struct QtSerialBus_PackedList QModbusDeviceIdentification_ObjectIds(void* ptr);
void QModbusDeviceIdentification_Remove(void* ptr, unsigned int objectId);
void QModbusDeviceIdentification_SetConformityLevel(void* ptr, long long level);
void* QModbusDeviceIdentification_Value(void* ptr, unsigned int objectId);
int QModbusDeviceIdentification___objectIds_atList(void* ptr, int i);
void QModbusDeviceIdentification___objectIds_setList(void* ptr, int i);
void* QModbusDeviceIdentification___objectIds_newList(void* ptr);
void* QModbusDeviceIdentification___m_objects_atList(void* ptr, int v, int i);
void QModbusDeviceIdentification___m_objects_setList(void* ptr, int key, void* i);
void* QModbusDeviceIdentification___m_objects_newList(void* ptr);
struct QtSerialBus_PackedList QModbusDeviceIdentification___m_objects_keyList(void* ptr);
void* QModbusDeviceIdentification___setM_objects__atList(void* ptr, int v, int i);
void QModbusDeviceIdentification___setM_objects__setList(void* ptr, int key, void* i);
void* QModbusDeviceIdentification___setM_objects__newList(void* ptr);
struct QtSerialBus_PackedList QModbusDeviceIdentification___setM_objects__keyList(void* ptr);
int QModbusDeviceIdentification_____m_objects_keyList_atList(void* ptr, int i);
void QModbusDeviceIdentification_____m_objects_keyList_setList(void* ptr, int i);
void* QModbusDeviceIdentification_____m_objects_keyList_newList(void* ptr);
int QModbusDeviceIdentification_____setM_objects__keyList_atList(void* ptr, int i);
void QModbusDeviceIdentification_____setM_objects__keyList_setList(void* ptr, int i);
void* QModbusDeviceIdentification_____setM_objects__keyList_newList(void* ptr);
void* QModbusExceptionResponse_NewQModbusExceptionResponse();
void* QModbusExceptionResponse_NewQModbusExceptionResponse2(void* pdu);
void* QModbusExceptionResponse_NewQModbusExceptionResponse3(long long code, long long ec);
void QModbusExceptionResponse_SetExceptionCode(void* ptr, long long ec);
void* QModbusPdu_NewQModbusPdu();
void* QModbusPdu_NewQModbusPdu2(long long code, void* data);
void* QModbusPdu_NewQModbusPdu3(void* other);
void* QModbusPdu_Data(void* ptr);
short QModbusPdu_DataSize(void* ptr);
long long QModbusPdu_ExceptionCode(void* ptr);
long long QModbusPdu_FunctionCode(void* ptr);
char QModbusPdu_IsException(void* ptr);
char QModbusPdu_IsValid(void* ptr);
void QModbusPdu_SetData(void* ptr, void* data);
void QModbusPdu_SetFunctionCode(void* ptr, long long code);
void QModbusPdu_SetFunctionCodeDefault(void* ptr, long long code);
short QModbusPdu_Size(void* ptr);
void QModbusPdu_DestroyQModbusPdu(void* ptr);
void QModbusPdu_DestroyQModbusPduDefault(void* ptr);
struct QtSerialBus_PackedString QModbusPdu_QModbusPdu_ExceptionByte();
void* QModbusPdu___encode_vector_atList2(void* ptr, int i);
void QModbusPdu___encode_vector_setList2(void* ptr, void* i);
void* QModbusPdu___encode_vector_newList2(void* ptr);
void* QModbusReply_NewQModbusReply(long long ty, int serverAddress, void* parent);
long long QModbusReply_Error(void* ptr);
void QModbusReply_ConnectErrorOccurred(void* ptr, long long t);
void QModbusReply_DisconnectErrorOccurred(void* ptr);
void QModbusReply_ErrorOccurred(void* ptr, long long error);
struct QtSerialBus_PackedString QModbusReply_ErrorString(void* ptr);
void QModbusReply_ConnectFinished(void* ptr, long long t);
void QModbusReply_DisconnectFinished(void* ptr);
void QModbusReply_Finished(void* ptr);
char QModbusReply_IsFinished(void* ptr);
void* QModbusReply_RawResult(void* ptr);
void* QModbusReply_Result(void* ptr);
int QModbusReply_ServerAddress(void* ptr);
long long QModbusReply_Type(void* ptr);
void* QModbusReply___children_atList(void* ptr, int i);
void QModbusReply___children_setList(void* ptr, void* i);
void* QModbusReply___children_newList(void* ptr);
void* QModbusReply___dynamicPropertyNames_atList(void* ptr, int i);
void QModbusReply___dynamicPropertyNames_setList(void* ptr, void* i);
void* QModbusReply___dynamicPropertyNames_newList(void* ptr);
void* QModbusReply___findChildren_atList(void* ptr, int i);
void QModbusReply___findChildren_setList(void* ptr, void* i);
void* QModbusReply___findChildren_newList(void* ptr);
void* QModbusReply___findChildren_atList3(void* ptr, int i);
void QModbusReply___findChildren_setList3(void* ptr, void* i);
void* QModbusReply___findChildren_newList3(void* ptr);
void* QModbusReply___qFindChildren_atList2(void* ptr, int i);
void QModbusReply___qFindChildren_setList2(void* ptr, void* i);
void* QModbusReply___qFindChildren_newList2(void* ptr);
void QModbusReply_ChildEventDefault(void* ptr, void* event);
void QModbusReply_ConnectNotifyDefault(void* ptr, void* sign);
void QModbusReply_CustomEventDefault(void* ptr, void* event);
void QModbusReply_DeleteLaterDefault(void* ptr);
void QModbusReply_DisconnectNotifyDefault(void* ptr, void* sign);
char QModbusReply_EventDefault(void* ptr, void* e);
char QModbusReply_EventFilterDefault(void* ptr, void* watched, void* event);
void* QModbusReply_MetaObjectDefault(void* ptr);
void QModbusReply_TimerEventDefault(void* ptr, void* event);
void* QModbusRequest_NewQModbusRequest();
void* QModbusRequest_NewQModbusRequest2(void* pdu);
void* QModbusRequest_NewQModbusRequest3(long long code, void* data);
int QModbusRequest_QModbusRequest_CalculateDataSize(void* request);
int QModbusRequest_QModbusRequest_MinimumDataSize(void* request);
void* QModbusResponse_NewQModbusResponse();
void* QModbusResponse_NewQModbusResponse2(void* pdu);
void* QModbusResponse_NewQModbusResponse3(long long code, void* data);
int QModbusResponse_QModbusResponse_CalculateDataSize(void* response);
int QModbusResponse_QModbusResponse_MinimumDataSize(void* response);
void* QModbusRtuSerialMaster_NewQModbusRtuSerialMaster(void* parent);
void QModbusRtuSerialMaster_Close(void* ptr);
void QModbusRtuSerialMaster_CloseDefault(void* ptr);
int QModbusRtuSerialMaster_InterFrameDelay(void* ptr);
char QModbusRtuSerialMaster_Open(void* ptr);
char QModbusRtuSerialMaster_OpenDefault(void* ptr);
void QModbusRtuSerialMaster_SetInterFrameDelay(void* ptr, int microseconds);
void QModbusRtuSerialMaster_SetTurnaroundDelay(void* ptr, int turnaroundDelay);
int QModbusRtuSerialMaster_TurnaroundDelay(void* ptr);
void* QModbusRtuSerialSlave_NewQModbusRtuSerialSlave(void* parent);
void QModbusRtuSerialSlave_Close(void* ptr);
void QModbusRtuSerialSlave_CloseDefault(void* ptr);
char QModbusRtuSerialSlave_Open(void* ptr);
char QModbusRtuSerialSlave_OpenDefault(void* ptr);
void QModbusRtuSerialSlave_DestroyQModbusRtuSerialSlave(void* ptr);
void QModbusRtuSerialSlave_DestroyQModbusRtuSerialSlaveDefault(void* ptr);
void* QModbusServer_NewQModbusServer(void* parent);
char QModbusServer_Data(void* ptr, void* newData);
char QModbusServer_Data2(void* ptr, long long table, unsigned short address, unsigned short data);
void QModbusServer_ConnectDataWritten(void* ptr, long long t);
void QModbusServer_DisconnectDataWritten(void* ptr);
void QModbusServer_DataWritten(void* ptr, long long table, int address, int size);
void* QModbusServer_ProcessPrivateRequest(void* ptr, void* request);
void* QModbusServer_ProcessPrivateRequestDefault(void* ptr, void* request);
void* QModbusServer_ProcessRequest(void* ptr, void* request);
void* QModbusServer_ProcessRequestDefault(void* ptr, void* request);
char QModbusServer_ProcessesBroadcast(void* ptr);
char QModbusServer_ProcessesBroadcastDefault(void* ptr);
char QModbusServer_ReadData(void* ptr, void* newData);
char QModbusServer_ReadDataDefault(void* ptr, void* newData);
int QModbusServer_ServerAddress(void* ptr);
char QModbusServer_SetData(void* ptr, void* newData);
char QModbusServer_SetData2(void* ptr, long long table, unsigned short address, unsigned short data);
void QModbusServer_SetServerAddress(void* ptr, int serverAddress);
char QModbusServer_SetValue(void* ptr, int option, void* newValue);
char QModbusServer_SetValueDefault(void* ptr, int option, void* newValue);
void* QModbusServer_Value(void* ptr, int option);
void* QModbusServer_ValueDefault(void* ptr, int option);
char QModbusServer_WriteData(void* ptr, void* newData);
char QModbusServer_WriteDataDefault(void* ptr, void* newData);
void QModbusServer_Close(void* ptr);
void QModbusServer_CloseDefault(void* ptr);
char QModbusServer_Open(void* ptr);
char QModbusServer_OpenDefault(void* ptr);
void* QModbusTcpClient_NewQModbusTcpClient(void* parent);
void QModbusTcpClient_Close(void* ptr);
void QModbusTcpClient_CloseDefault(void* ptr);
char QModbusTcpClient_Open(void* ptr);
char QModbusTcpClient_OpenDefault(void* ptr);
void QModbusTcpClient_DestroyQModbusTcpClient(void* ptr);
void QModbusTcpClient_DestroyQModbusTcpClientDefault(void* ptr);
char QModbusTcpConnectionObserver_AcceptNewConnection(void* ptr, void* newClient);
void* QModbusTcpServer_NewQModbusTcpServer(void* parent);
void QModbusTcpServer_Close(void* ptr);
void QModbusTcpServer_CloseDefault(void* ptr);
void QModbusTcpServer_InstallConnectionObserver(void* ptr, void* observer);
void QModbusTcpServer_ConnectModbusClientDisconnected(void* ptr, long long t);
void QModbusTcpServer_DisconnectModbusClientDisconnected(void* ptr);
void QModbusTcpServer_ModbusClientDisconnected(void* ptr, void* modbusClient);
char QModbusTcpServer_Open(void* ptr);
char QModbusTcpServer_OpenDefault(void* ptr);
void QModbusTcpServer_DestroyQModbusTcpServer(void* ptr);
void QModbusTcpServer_DestroyQModbusTcpServerDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif