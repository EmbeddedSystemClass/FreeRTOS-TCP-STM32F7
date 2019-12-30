#ifndef FREERTOS_IP_CONFIG_H
#define FREERTOS_IP_CONFIG_H


#define ipconfigETHERNET_DRIVER_FILTERS_FRAME_TYPES   1
#define ipconfigDRIVER_INCLUDED_TX_IP_CHECKSUM        1
#define ipconfigDRIVER_INCLUDED_RX_IP_CHECKSUM        1
#define ipconfigZERO_COPY_RX_DRIVER                   1
#define ipconfigZERO_COPY_TX_DRIVER                   1
#define ipconfigUSE_LINKED_RX_MESSAGES                1

#define ipconfigUSE_RMII                                1      

#define arpGRATUITOUS_ARP_PERIOD         ( pdMS_TO_TICKS( 500 ) )

#define ipconfigBYTE_ORDER pdFREERTOS_LITTLE_ENDIAN

#define ipconfigSOCK_DEFAULT_RECEIVE_BLOCK_TIME	( 5000 )
#define	ipconfigSOCK_DEFAULT_SEND_BLOCK_TIME	( 5000 )

#define ipconfigUSE_LLMNR					( 0 )
#define ipconfigUSE_NBNS					( 0 )

#define ipconfigUSE_DNS_CACHE				( 1 )
#define ipconfigDNS_CACHE_NAME_LENGTH		( 16 )
#define ipconfigDNS_CACHE_ENTRIES			( 4 )
#define ipconfigDNS_REQUEST_ATTEMPTS		( 2 )

#define ipconfigIP_TASK_PRIORITY			( configMAX_PRIORITIES - 2 )

#define ipconfigIP_TASK_STACK_SIZE_WORDS	( configMINIMAL_STACK_SIZE * 5 )

#define ipconfigUSE_NETWORK_EVENT_HOOK 1

#define ipconfigUDP_MAX_SEND_BLOCK_TIME_TICKS ( 5000 / portTICK_PERIOD_MS )

#define ipconfigUSE_DHCP	0

#define ipconfigMAXIMUM_DISCOVER_TX_PERIOD		( 120000 / portTICK_PERIOD_MS )

#define ipconfigARP_CACHE_ENTRIES		6

#define ipconfigMAX_ARP_RETRANSMISSIONS ( 5 )

#define ipconfigMAX_ARP_AGE			150

#define ipconfigINCLUDE_FULL_INET_ADDR	1

#define ipconfigNUM_NETWORK_BUFFER_DESCRIPTORS		60

#define ipconfigEVENT_QUEUE_LENGTH		( ipconfigNUM_NETWORK_BUFFER_DESCRIPTORS + 5 )

#define ipconfigALLOW_SOCKET_SEND_WITHOUT_BIND 1

#define ipconfigUDP_TIME_TO_LIVE		128
#define ipconfigTCP_TIME_TO_LIVE		128 

#define ipconfigUSE_TCP				( 1 )

#define ipconfigUSE_TCP_WIN			( 1 )

#define ipconfigNETWORK_MTU		1200

#define ipconfigUSE_DNS			1

#define ipconfigREPLY_TO_INCOMING_PINGS				1
#define ipconfigSUPPORT_OUTGOING_PINGS				0

#define ipconfigSUPPORT_SELECT_FUNCTION				1

#define ipconfigFILTER_OUT_NON_ETHERNET_II_FRAMES  1

#define ipconfigPACKET_FILLER_SIZE 2

#define ipconfigTCP_WIN_SEG_COUNT		240

// #define ipconfigTCP_RX_BUFFER_LEN			( 1000 )
// #define ipconfigTCP_TX_BUFFER_LEN			( 1000 )

// #define ipconfigTCP_HANG_PROTECTION			( 1 )
// #define ipconfigTCP_HANG_PROTECTION_TIME	( 30 )

#define ipconfigTCP_KEEP_ALIVE				( 1 )
#define ipconfigTCP_KEEP_ALIVE_INTERVAL		( 20 ) 

#endif 