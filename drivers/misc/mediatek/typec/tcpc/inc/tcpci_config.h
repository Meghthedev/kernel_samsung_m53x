/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

#ifndef __LINUX_TCPC_CONFIG_H
#define __LINUX_TCPC_CONFIG_H

#ifdef CONFIG_TCPC_CLASS
/* default config */

/* #define CONFIG_TYPEC_USE_DIS_VBUS_CTRL */
#define CONFIG_TYPEC_POWER_CTRL_INIT

#define CONFIG_TYPEC_CAP_TRY_SOURCE
#define CONFIG_TYPEC_CAP_TRY_SINK

#define CONFIG_TYPEC_CAP_DBGACC
/* #define CONFIG_TYPEC_CAP_DBGACC_SNK */
#define CONFIG_TYPEC_CAP_CUSTOM_SRC
#define CONFIG_TYPEC_CAP_NORP_SRC
/* #define CONFIG_COMPATIBLE_APPLE_TA */
/* FIXME : skip build error */
/* #define CONFIG_RECV_BAT_ABSENT_NOTIFY */

/* #define CONFIG_TYPEC_ATTACHED_SRC_SAFE0V_DELAY */
#define CONFIG_TYPEC_ATTACHED_SRC_SAFE0V_TIMEOUT

#define CONFIG_TYPEC_CHECK_LEGACY_CABLE
#define CONFIG_TYPEC_CHECK_LEGACY_CABLE2
#define CONFIG_TYPEC_LEGACY2_AUTO_RECYCLE
/* #define CONFIG_TYPEC_CHECK_SRC_UNATTACH_OPEN */
#define CONFIG_TYPEC_LEGACY3_ALWAYS_LOCAL_RP

#define CONFIG_TYPEC_CAP_RA_DETACH
#define CONFIG_TYPEC_CAP_LPM_WAKEUP_WATCHDOG

#define CONFIG_TYPEC_CAP_POWER_OFF_CHARGE

#define CONFIG_TYPEC_CAP_ROLE_SWAP
#define CONFIG_TYPEC_CAP_ROLE_SWAP_TOUT		1200

#define CONFIG_TYPEC_CAP_DISCHARGE_TOUT		50

#define CONFIG_TYPEC_CAP_AUTO_DISCHARGE
/* #define CONFIG_TCPC_AUTO_DISCHARGE_IC */

#define CONFIG_TYPEC_CAP_FORCE_DISCHARGE
/* #define CONFIG_TCPC_FORCE_DISCHARGE_IC */
#define CONFIG_TCPC_FORCE_DISCHARGE_EXT

#define CONFIG_TYPEC_CAP_AUDIO_ACC_SINK_VBUS

#define CONFIG_TYPEC_CAP_LOW_RP_DUTY
#define CONFIG_TYPEC_WAKEUP_ONCE_LOW_DUTY

/* #define CONFIG_TYPEC_CAP_CUSTOM_HV */

#define CONFIG_TYPEC_NOTIFY_ATTACHWAIT_SNK
/* #define CONFIG_TYPEC_NOTIFY_ATTACHWAIT_SRC */

#define CONFIG_TCPC_ATTACH_WAKE_LOCK_TOUT	5000

/* #define CONFIG_TCPC_LOG_WITH_PORT_NAME */

#ifdef CONFIG_TCPC_LOG_WITH_PORT_NAME
#define CONFIG_TCPC_DBG_PRESTR		"{%s}TCPC-"
#else
#define CONFIG_TCPC_DBG_PRESTR		"TCPC-"
#endif /* CONFIG_TCPC_LOG_WITH_PORT_NAME */

/*
 * USB 2.0 & 3.0 current
 * Unconfigured :	100 / 150 mA
 * Configured :		500 / 900 mA
 * http://www.testusb.com/power_issue.htm
 */

#define CONFIG_TYPEC_SNK_CURR_DFT		100
#define CONFIG_TYPEC_SRC_CURR_DFT		500
#define CONFIG_TYPEC_SNK_CURR_LIMIT		0

#define CONFIG_TCPC_SOURCE_VCONN
#define CONFIG_TCPC_VCONN_SUPPLY_MODE

#define CONFIG_TCPC_VSAFE0V_DETECT
/* #define CONFIG_TCPC_VSAFE0V_DETECT_EXT */
#define CONFIG_TCPC_VSAFE0V_DETECT_IC

#define CONFIG_TCPC_LPM_CONFIRM
#define CONFIG_TCPC_LPM_POSTPONE

#define CONFIG_TCPC_LOW_POWER_MODE
#define CONFIG_TCPC_CLOCK_GATING

/* #define CONFIG_TCPC_WATCHDOG_EN */
/* #define CONFIG_TCPC_INTRST_EN */
#define CONFIG_TCPC_I2CRST_EN

#define CONFIG_TCPC_SHUTDOWN_CC_DETACH
#define CONFIG_TCPC_SHUTDOWN_VBUS_DISABLE

#define CONFIG_TCPC_NOTIFIER_LATE_SYNC

#define CONFIG_TCPC_NOTIFICATION_NON_BLOCKING

#ifdef CONFIG_USB_POWER_DELIVERY

/* Experimental for CodeSize */
#define CONFIG_USB_PD_DR_SWAP
#define CONFIG_USB_PD_PR_SWAP
#define CONFIG_USB_PD_VCONN_SWAP
#define CONFIG_USB_PD_PE_SINK
#define CONFIG_USB_PD_PE_SOURCE
#define CONFIG_USB_PD_DISABLE_PE

#define CONFIG_USB_PD_TCPM_CB_RETRY		3
#define CONFIG_USB_PD_TCPM_CB_2ND
#define CONFIG_USB_PD_BLOCK_TCPM

/* #define CONFIG_USB_PD_RICHTEK_UVDM */

/**********************************************************
 * Mode Operation
 **********************************************************/

#define CONFIG_USB_PD_MODE_OPERATION

#ifdef CONFIG_USB_PD_MODE_OPERATION

#define CONFIG_USB_PD_ATTEMP_ENTER_MODE

#define CONFIG_USB_PD_ALT_MODE
#ifdef CONFIG_USB_PD_ALT_MODE
#define CONFIG_USB_PD_ALT_MODE_DFP
#define CONFIG_USB_PD_ALT_MODE_RTDC
#endif	/* CONFIG_USB_PD_ALT_MODE */

/* #define CONFIG_USB_PD_DP_CHECK_CABLE */
/* #define CONFIG_USB_PD_RTDC_CHECK_CABLE */

#endif	/* CONFIG_USB_PD_MODE_OPERATION */

/**********************************************************
 * PD revision 3.0 feature
 **********************************************************/

#define CONFIG_USB_PD_REV30

#ifdef CONFIG_USB_PD_REV30

#define CONFIG_USB_PD_REV30_SYNC_SPEC_REV
#define CONFIG_USB_PD_REV30_COLLISION_AVOID

/*
 * If DUT send a PD command immediately after Policy Engine is ready,
 * it may interrupt the compliance test process and getting a failed result.
 * even you make sure the CC state is SinkTxNG or SinkTxOK.
 *
 * SRC_FLOW_DELAY_STARTUP: For Ellisys
 * SNK_FLOW_DELAY_STARTUP: For MQP
 */

#define CONFIG_USB_PD_REV30_SRC_FLOW_DELAY_STARTUP
#define CONFIG_USB_PD_REV30_SNK_FLOW_DELAY_STARTUP

#define CONFIG_USB_PD_REV30_DISCOVER_CABLE_WITH_VCONN

/* PD30 Common Feature */

#define CONFIG_USB_PD_REV30_SRC_CAP_EXT_LOCAL
#define CONFIG_USB_PD_REV30_SRC_CAP_EXT_REMOTE

#define CONFIG_USB_PD_REV30_BAT_CAP_LOCAL
#define CONFIG_USB_PD_REV30_BAT_CAP_REMOTE

#define CONFIG_USB_PD_REV30_BAT_STATUS_LOCAL
#define CONFIG_USB_PD_REV30_BAT_STATUS_REMOTE

#define CONFIG_USB_PD_REV30_MFRS_INFO_LOCAL
#define CONFIG_USB_PD_REV30_MFRS_INFO_REMOTE

#define CONFIG_USB_PD_REV30_COUNTRY_CODE_LOCAL
#define CONFIG_USB_PD_REV30_COUNTRY_CODE_REMOTE

#define CONFIG_USB_PD_REV30_COUNTRY_INFO_LOCAL
#define CONFIG_USB_PD_REV30_COUNTRY_INFO_REMOTE

#define CONFIG_USB_PD_REV30_ALERT_LOCAL
#define CONFIG_USB_PD_REV30_ALERT_REMOTE

#define CONFIG_USB_PD_REV30_STATUS_LOCAL
#define CONFIG_USB_PD_REV30_STATUS_REMOTE

/* #define CONFIG_USB_PD_REV30_CHUNKING_BY_PE */

#define CONFIG_USB_PD_REV30_PPS_SINK
/* #define CONFIG_USB_PD_REV30_PPS_SOURCE */

#ifdef CONFIG_USB_PD_REV30_STATUS_LOCAL
#define CONFIG_USB_PD_REV30_STATUS_LOCAL_TEMP
#endif	/* CONFIG_USB_PD_REV30_STATUS_LOCAL */

#ifdef CONFIG_USB_PD_REV30_BAT_CAP_LOCAL
#define CONFIG_USB_PD_REV30_BAT_INFO
#endif	/* CONFIG_USB_PD_REV30_BAT_CAP_LOCAL */

#ifdef CONFIG_USB_PD_REV30_BAT_STATUS_LOCAL
#undef CONFIG_USB_PD_REV30_BAT_INFO
#define CONFIG_USB_PD_REV30_BAT_INFO
#endif	/* CONFIG_USB_PD_REV30_BAT_STATUS_LOCAL */

#ifdef CONFIG_USB_PD_REV30_COUNTRY_CODE_LOCAL
#define CONFIG_USB_PD_REV30_COUNTRY_AUTHORITY
#endif	/* CONFIG_USB_PD_REV30_COUNTRY_CODE_LOCAL */

#ifdef CONFIG_USB_PD_REV30_COUNTRY_INFO_LOCAL
#undef CONFIG_USB_PD_REV30_COUNTRY_AUTHORITY
#define CONFIG_USB_PD_REV30_COUNTRY_AUTHORITY
#endif	/* CONFIG_USB_PD_REV30_COUNTRY_INFO_LOCAL */

#ifdef CONFIG_USB_PD_REV30_ALERT_LOCAL
#define CONFIG_USB_PD_DPM_AUTO_SEND_ALERT
#endif	/* CONFIG_USB_PD_REV30_ALERT_LOCAL */

#ifdef CONFIG_USB_PD_REV30_ALERT_REMOTE
#define CONFIG_USB_PD_DPM_AUTO_GET_STATUS
#endif	/* CONFIG_USB_PD_REV30_ALERT_REMOTE */

#define CONFIG_MTK_HANDLE_PPS_TIMEOUT

#endif	/* CONFIG_USB_PD_REV30 */

/**********************************************************
 * PD direct charge support
 **********************************************************/

#ifdef CONFIG_USB_PD_ALT_MODE_RTDC
#define CONFIG_USB_PD_DIRECT_CHARGE
#endif	/* CONFIG_USB_PD_ALT_MODE_RTDC */

#ifdef CONFIG_USB_PD_REV30_PPS_SINK
#undef CONFIG_USB_PD_DIRECT_CHARGE
#define CONFIG_USB_PD_DIRECT_CHARGE
#endif	/* CONFIG_USB_PD_REV30_PPS_SINK */

#define CONFIG_USB_PD_KEEP_PARTNER_ID
#define CONFIG_USB_PD_KEEP_SVIDS
#define CONFIG_USB_PD_SRC_STARTUP_DISCOVER_ID
#define CONFIG_USB_PD_DFP_READY_DISCOVER_ID
#define CONFIG_USB_PD_RESET_CABLE

#define CONFIG_USB_PD_RANDOM_FLOW_DELAY

#define CONFIG_USB_PD_DFP_FLOW_DELAY
#define CONFIG_USB_PD_DFP_FLOW_DELAY_STARTUP
#define CONFIG_USB_PD_DFP_FLOW_DELAY_DRSWAP
#define CONFIG_USB_PD_DFP_FLOW_DELAY_RESET

/* Only in startup */
#define CONFIG_USB_PD_UFP_FLOW_DELAY
#define CONFIG_USB_PD_VCONN_STABLE_DELAY
#define CONFIG_USB_PD_VCONN_SAFE5V_ONLY

#define CONFIG_USB_PD_ATTEMP_DISCOVER_ID
#define CONFIG_USB_PD_ATTEMP_DISCOVER_SVID

#define CONFIG_USB_PD_DISCOVER_CABLE_REQUEST_VCONN
#define CONFIG_USB_PD_DISCOVER_CABLE_RETURN_VCONN

#define CONFIG_USB_PD_PR_SWAP_ERROR_RECOVERY

#define CONFIG_USB_PD_CUSTOM_VDM

#ifdef CONFIG_USB_PD_CUSTOM_VDM
#define CONFIG_USB_PD_SVDM
#define CONFIG_USB_PD_UVDM
#endif	/* CONFIG_USB_PD_CUSTOM_VDM */

#ifdef CONFIG_TYPEC_CAP_DBGACC_SNK
/* #define CONFIG_USB_PD_CUSTOM_DBGACC */
#endif	/* CONFIG_TYPEC_CAP_DBGACC_SNK */

/* S/W patch for ESD issue: repeat HReset Alert */
/* #define CONFIG_USB_PD_RECV_HRESET_COUNTER */

/* S/W patch for NoGoodCRC if SNK_DFT */
#define CONFIG_USB_PD_SNK_DFT_NO_GOOD_CRC

/* S/W patch for NoGoodCRC after PR_SWAP (repeat PS_RDY) */
#define CONFIG_USB_PD_IGNORE_PS_RDY_AFTER_PR_SWAP

/* S/W patch for delayed ps_change related to PS_RDY during PR_SWAP */
#define CONFIG_USB_PD_VBUS_DETECTION_DURING_PR_SWAP

/*
 * S/W patch for INT handler was stuck by other task (system busy)
 *
 * If the communication fails due to a timeout,
 * check the rx buffer is empty or not.
 *
 * If the rx buffer isn't empty, postpone timer.
 */

#define CONFIG_USB_PD_CHECK_RX_PENDING_IF_SRTOUT
#define CONFIG_USB_PD_ONLY_PRINT_SYSTEM_BUSY

/*
 * S/W patch for
 * If the CC pin is shorted to ground and our receive ability is better,
 * then we may receive message however always send failed.
 *
 * For the source role, it becomes an infinite hard reset loop.
 * For the sink role, it becomes an infinite error recovery loop.
 *
 * RENEGOTIATION_COUNTER:
 *     Auto error recovery
 *     if retried hard reset many times still negotiation failed.
 *
 * ERROR_RECOVERY_ONCE:
 *     If we have tried an error recovery,
 *     using pure typec mode during next time we reconnect.
 *
 */

#define CONFIG_USB_PD_RENEGOTIATION_COUNTER
#define CONFIG_USB_PD_ERROR_RECOVERY_ONCE

#define CONFIG_USB_PD_IGNORE_HRESET_COMPLETE_TIMER
#define CONFIG_USB_PD_DROP_REPEAT_PING
#define CONFIG_USB_PD_CHECK_DATA_ROLE
#define CONFIG_USB_PD_RETRY_CRC_DISCARD
#define CONFIG_USB_PD_PARTNER_CTRL_MSG_FIRST

#define CONFIG_USB_PD_SNK_HRESET_KEEP_DRAW
/* #define CONFIG_USB_PD_SNK_IGNORE_HRESET_IF_TYPEC_ONLY */
#define CONFIG_USB_PD_SNK_STANDBY_POWER
#define CONFIG_USB_PD_SNK_GOTOMIN

/* #define CONFIG_USB_PD_SRC_HIGHCAP_POWER */
#define CONFIG_USB_PD_SRC_TRY_PR_SWAP_IF_BAD_PW

#define CONFIG_USB_PD_TRANSMIT_BIST2
#define CONFIG_USB_PD_POSTPONE_VDM
#define CONFIG_USB_PD_POSTPONE_RETRY_VDM
#define CONFIG_USB_PD_POSTPONE_FIRST_VDM
#define CONFIG_USB_PD_POSTPONE_OTHER_VDM
/* #define CONFIG_USB_PD_STOP_SEND_VDM_IF_RX_BUSY */
#define CONFIG_USB_PD_STOP_REPLY_VDM_IF_RX_BUSY

/* #define CONFIG_USB_PD_SAFE0V_DELAY */
/* #define CONFIG_USB_PD_SAFE0V_TIMEOUT */

#ifndef CONFIG_USB_PD_DPM_SVDM_RETRY
#define CONFIG_USB_PD_DPM_SVDM_RETRY     2
#endif     /* CONFIG_USB_PD_DPM_SVDM_RETRY */

#ifndef CONFIG_USB_PD_DFP_FLOW_RETRY_MAX
#define CONFIG_USB_PD_DFP_FLOW_RETRY_MAX 2
#endif	/* CONFIG_USB_PD_DFP_FLOW_RETRY_MAX */

#ifndef CONFIG_USB_PD_VBUS_STABLE_TOUT
#define CONFIG_USB_PD_VBUS_STABLE_TOUT 125
#endif	/* CONFIG_USB_PD_VBUS_STABLE_TOUT */

#ifndef CONFIG_USB_PD_VBUS_PRESENT_TOUT
#define CONFIG_USB_PD_VBUS_PRESENT_TOUT	20
#endif	/* CONFIG_USB_PD_VBUS_PRESENT_TOUT */

#ifndef CONFIG_USB_PD_CUSTOM_VDM_TOUT
#define CONFIG_USB_PD_CUSTOM_VDM_TOUT	500
#endif	/* CONFIG_USB_PD_CUSTOM_VDM_TOUT */

#ifndef CONFIG_USB_PD_VCONN_READY_TOUT
#define CONFIG_USB_PD_VCONN_READY_TOUT		5
#endif	/* CONFIG_USB_PD_VCONN_READY_TOUT */

#ifndef CONFIG_USB_PD_DFP_FLOW_DLY
#define CONFIG_USB_PD_DFP_FLOW_DLY	30
#endif	/* CONFIG_USB_PD_DFP_FLOW_DLY */

#ifndef CONFIG_USB_PD_UFP_FLOW_DLY
#define CONFIG_USB_PD_UFP_FLOW_DLY			300
#endif	/* CONFIG_USB_PD_UFP_FLOW_DLY */

#ifndef CONFIG_USB_PD_PPS_REQUEST_INTERVAL
#define CONFIG_USB_PD_PPS_REQUEST_INTERVAL	7000
#endif	/* CONFIG_USB_PD_PPS_REQUEST_INTERVAL */

#ifdef CONFIG_MTK_CHARGER
#undef CONFIG_USB_PD_WAIT_BC12
#endif /* CONFIG_MTK_CHARGER */

#ifdef CONFIG_MTK_CHARGER
/* Need APIs from MTK charger */
#define CONFIG_KPOC_GET_SOURCE_CAP_TRY
#endif
#endif /* CONFIG_USB_POWER_DELIVERY */

/* debug config */
/* #define CONFIG_USB_PD_DBG_ALERT_STATUS */
/* #define CONFIG_USB_PD_DBG_SKIP_ALERT_HANDLER */
#define CONFIG_USB_PD_DBG_DP_DFP_D_AUTO_UPDATE

/**********************************************************
 * TypeC Shield Protection
 **********************************************************/

#if !IS_ENABLED(CONFIG_SEC_FACTORY)
#ifdef CONFIG_MTK_TYPEC_WATER_DETECT
#define CONFIG_WATER_DETECTION
#endif /* CONFIG_MTK_TYPEC_WATER_DETECT */
#endif	/* CONFIG_SEC_FACTORY */

#ifdef CONFIG_WATER_DETECTION
#define CONFIG_WD_SBU_POLLING
/* #define CONFIG_WATER_CALIBRATION */
#define CONFIG_WD_INIT_POWER_OFF_CHARGE
#define CONFIG_WD_SBU_CALIB_INIT	1800 /* mV */
#define CONFIG_WD_SBU_PL_BOUND		200 /* mV */
#define CONFIG_WD_SBU_PH_AUDDEV		70 /* mV */
#define CONFIG_WD_SBU_PH_LBOUND_ATTACH	1650 /* mV */
#define CONFIG_WD_SBU_PH_LBOUND		1180 /* mV */
#define CONFIG_WD_SBU_PH_LBOUND1_C2C	2850 /* mV */
#define CONFIG_WD_SBU_PH_UBOUND1_C2C	3150 /* mV */
#define CONFIG_WD_SBU_PH_UBOUND2_C2C	3800 /* mV */
#define CONFIG_WD_SBU_AUD_UBOUND	1600 /* mV */
#define CONFIG_WD_SBU_PH_LBOUND1_SS	1150 /* mV */
#define CONFIG_WD_SBU_PH_UBOUND1_SS	1250 /* mV */
#define CONFIG_WD_PROTECT_RETRY_COUNT	3

#define USBID_SRC_TON	100000
#endif /* CONFIG_WATER_DETECTION */

#ifdef CONFIG_WD_SBU_POLLING
#define CONFIG_WD_POLLING_ONLY
#endif /* CONFIG_WD_SBU_POLLING */

#if IS_ENABLED(CONFIG_SEC_FACTORY)
#define CONFIG_WD_SBU_POLLING
#define USBID_SRC_TON	0
#endif

#define CONFIG_CABLE_TYPE_DETECTION

#define CONFIG_CC_BOUNCE_DETECTION

#ifdef CONFIG_CC_BOUNCE_DETECTION
#define CONFIG_CC_BOUNCE_TIME	100	/* ms */
#define CONFIG_CC_BOUNCE_COUNT	10

#ifdef CONFIG_WATER_DETECTION
#define CONFIG_WD_TRY_CC_BOUNCE
#endif /* CONFIG_WATER_DETECTION */
#endif /* CONFIG_CC_BOUNCE_DETECTION */

#endif /* CONFIG_TCPC_CLASS */
#endif /* __LINUX_TCPC_CONFIG_H */
