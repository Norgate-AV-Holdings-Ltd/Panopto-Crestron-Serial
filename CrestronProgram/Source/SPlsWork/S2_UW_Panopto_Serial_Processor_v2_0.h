#ifndef __S2_UW_PANOPTO_SERIAL_PROCESSOR_V2_0_H__
#define __S2_UW_PANOPTO_SERIAL_PROCESSOR_V2_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_UW_Panopto_Serial_Processor_v2_0_GET_STATUS_DIG_INPUT 0
#define __S2_UW_Panopto_Serial_Processor_v2_0_CMD_START_DIG_INPUT 1
#define __S2_UW_Panopto_Serial_Processor_v2_0_CMD_STOP_DIG_INPUT 2
#define __S2_UW_Panopto_Serial_Processor_v2_0_CMD_PAUSE_DIG_INPUT 3
#define __S2_UW_Panopto_Serial_Processor_v2_0_CMD_RESUME_DIG_INPUT 4
#define __S2_UW_Panopto_Serial_Processor_v2_0_CMD_EXTEND_DIG_INPUT 5
#define __S2_UW_Panopto_Serial_Processor_v2_0_ERROR_NOCOM_DIG_INPUT 6


/*
* ANALOG_INPUT
*/
#define __S2_UW_Panopto_Serial_Processor_v2_0_ENABLE_ADHOC_START_ANALOG_INPUT 1
#define __S2_UW_Panopto_Serial_Processor_v2_0_DEBUG_ANALOG_INPUT 2


#define __S2_UW_Panopto_Serial_Processor_v2_0_PANOPTO_SERIAL_RX_BUFFER_INPUT 0
#define __S2_UW_Panopto_Serial_Processor_v2_0_PANOPTO_SERIAL_RX_BUFFER_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __PANOPTO_SERIAL_RX, __S2_UW_Panopto_Serial_Processor_v2_0_PANOPTO_SERIAL_RX_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_ABOUTTOSTART_DIG_OUTPUT 0
#define __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_START_DIG_OUTPUT 1
#define __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_STOP_DIG_OUTPUT 2
#define __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_PAUSE_DIG_OUTPUT 3
#define __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_RESUME_DIG_OUTPUT 4
#define __S2_UW_Panopto_Serial_Processor_v2_0_SHOW_CMD_EXTEND_DIG_OUTPUT 5
#define __S2_UW_Panopto_Serial_Processor_v2_0_HAS_RECORDING_DATA_DIG_OUTPUT 6
#define __S2_UW_Panopto_Serial_Processor_v2_0_HAS_QUEUED_DATA_DIG_OUTPUT 7


/*
* ANALOG_OUTPUT
*/

#define __S2_UW_Panopto_Serial_Processor_v2_0_PANOPTO_SERIAL_TX_STRING_OUTPUT 0
#define __S2_UW_Panopto_Serial_Processor_v2_0_RECORDERSTATE_STRING_OUTPUT 1
#define __S2_UW_Panopto_Serial_Processor_v2_0_RECORDERSTATESIMPLE_STRING_OUTPUT 2
#define __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_ID_STRING_OUTPUT 3
#define __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_NAME_STRING_OUTPUT 4
#define __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_STARTTIME_STRING_OUTPUT 5
#define __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_ENDTIME_STRING_OUTPUT 6
#define __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_MINUTESUNTILSTARTTIME_STRING_OUTPUT 7
#define __S2_UW_Panopto_Serial_Processor_v2_0_RECORDING_MINUTESUNTILENDTIME_STRING_OUTPUT 8
#define __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_ID_STRING_OUTPUT 9
#define __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_NAME_STRING_OUTPUT 10
#define __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_STARTTIME_STRING_OUTPUT 11
#define __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_ENDTIME_STRING_OUTPUT 12
#define __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_MINUTESUNTILSTARTTIME_STRING_OUTPUT 13
#define __S2_UW_Panopto_Serial_Processor_v2_0_QUEUED_RECORDING_MINUTESUNTILENDTIME_STRING_OUTPUT 14


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_TEMP_PANOPTO_SERIAL_RX_STRING_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_TEMP_PANOPTO_SERIAL_RX, __S2_UW_Panopto_Serial_Processor_v2_0_GS_TEMP_PANOPTO_SERIAL_RX_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDERSTATE_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDERSTATE_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDERSTATE_SIMPLE_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDERSTATE_SIMPLE_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_ID_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ID, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_ID_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_NAME_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_NAME, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_NAME_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_STARTTIME_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_STARTTIME, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_STARTTIME_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_ENDTIME_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ENDTIME, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_ENDTIME_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_MINUTESUNTILSTARTTIME_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILSTARTTIME, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_MINUTESUNTILSTARTTIME_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_MINUTESUNTILENDTIME_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILENDTIME, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_MINUTESUNTILENDTIME_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_ID_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ID, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_ID_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_NAME_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_NAME, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_NAME_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_STARTTIME_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_STARTTIME, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_STARTTIME_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_ENDTIME_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ENDTIME, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_ENDTIME_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_MINUTESUNTILENDTIME_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILENDTIME, __S2_UW_Panopto_Serial_Processor_v2_0_GS_QUEUED_RECORDING_MINUTESUNTILENDTIME_STRING_MAX_LEN );
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_TAG_ARRAY_NUM_ELEMS 6
#define __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_TAG_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_TAG, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_TAG_ARRAY_NUM_ELEMS, __S2_UW_Panopto_Serial_Processor_v2_0_GS_RECORDING_TAG_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __GI_ALLOWCMD;
   unsigned short __GI_STATUS_COUNT_REC;
   unsigned short __GI_STATUS_COUNT_QUE;
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_TEMP_PANOPTO_SERIAL_RX );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ID );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_NAME );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_STARTTIME );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_ENDTIME );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILSTARTTIME );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_MINUTESUNTILENDTIME );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ID );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_NAME );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_STARTTIME );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_ENDTIME );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILSTARTTIME );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_QUEUED_RECORDING_MINUTESUNTILENDTIME );
   DECLARE_STRING_ARRAY( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDING_TAG );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __PANOPTO_SERIAL_RX );
};

START_NVRAM_VAR_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0 )
{
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE );
   DECLARE_STRING_STRUCT( S2_UW_Panopto_Serial_Processor_v2_0, __GS_RECORDERSTATE_SIMPLE );
};



#endif //__S2_UW_PANOPTO_SERIAL_PROCESSOR_V2_0_H__

