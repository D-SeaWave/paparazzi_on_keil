/* This file has been generated by gen_settings from /home/qq/paparazzi/var/aircrafts/NAZE32/settings_modules.xml /home/qq/paparazzi/conf/modules/gps_ubx_ucenter.xml /home/qq/paparazzi/conf/settings/control/rotorcraft_guidance.xml /home/qq/paparazzi/conf/settings/estimation/ahrs_int_cmpl_quat.xml /home/qq/paparazzi/conf/settings/control/stabilization_att_int_quat.xml /home/qq/paparazzi/conf/settings/rotorcraft_basic.xml /home/qq/paparazzi/var/aircrafts/NAZE32/settings_telemetry.xml */
/* Version v5.8.1_stable-0-ga7c97e1-dirty */
/* Please DO NOT EDIT */

#ifndef SETTINGS_H
#define SETTINGS_H

#define RCSettings(mode_changed) { \
}

#include "autopilot.h"
#include "generated/periodic_telemetry.h"
#include "gps/gps_ubx_ucenter.h"
#include "guidance/guidance_h.h"
#include "guidance/guidance_v.h"
#include "navigation.h"
#include "stabilization/stabilization_attitude_common_int.h"
#include "stabilization/stabilization_attitude_quat_int.h"
#include "subsystems/ahrs/ahrs_int_cmpl_quat.h"
#include "generated/modules.h"

#define SETTINGS_NAMES { \
 { "telemetry_mode_Main" }, \
 { "autopilot_mode_auto2" }, \
 { "kill_throttle" }, \
 { "autopilot_power_switch" }, \
 { "autopilot_mode" }, \
 { "stabilization_gains.p.x" }, \
 { "stabilization_gains.d.x" }, \
 { "stabilization_gains.i.x" }, \
 { "stabilization_gains.dd.x" }, \
 { "stabilization_gains.p.y" }, \
 { "stabilization_gains.d.y" }, \
 { "stabilization_gains.i.y" }, \
 { "stabilization_gains.dd.y" }, \
 { "stabilization_gains.p.z" }, \
 { "stabilization_gains.d.z" }, \
 { "stabilization_gains.i.z" }, \
 { "stabilization_gains.dd.z" }, \
 { "att_ref_quat_i.model.omega.p" }, \
 { "att_ref_quat_i.model.zeta.p" }, \
 { "att_ref_quat_i.model.omega.q" }, \
 { "att_ref_quat_i.model.zeta.q" }, \
 { "att_ref_quat_i.model.omega.r" }, \
 { "att_ref_quat_i.model.zeta.r" }, \
 { "ahrs_icq.gravity_heuristic_factor" }, \
 { "ahrs_icq.accel_omega" }, \
 { "ahrs_icq.accel_zeta" }, \
 { "ahrs_icq.mag_omega" }, \
 { "ahrs_icq.mag_zeta" }, \
 { "guidance_v_kp" }, \
 { "guidance_v_kd" }, \
 { "guidance_v_ki" }, \
 { "guidance_v_nominal_throttle" }, \
 { "guidance_v_adapt_throttle_enabled" }, \
 { "guidance_v_z_sp" }, \
 { "guidance_h.use_ref" }, \
 { "gh_ref.max_speed" }, \
 { "guidance_h.approx_force_by_thrust" }, \
 { "gh_ref.tau" }, \
 { "gh_ref.omega" }, \
 { "gh_ref.zeta" }, \
 { "guidance_h.gains.p" }, \
 { "guidance_h.gains.d" }, \
 { "guidance_h.gains.i" }, \
 { "guidance_h.gains.v" }, \
 { "guidance_h.gains.a" }, \
 { "guidance_h.sp.pos.x" }, \
 { "guidance_h.sp.pos.y" }, \
 { "flight_altitude" }, \
 { "nav_heading" }, \
 { "nav_radius" }, \
 { "nav_climb_vspeed" }, \
 { "nav_descend_vspeed" }, \
 { "gps_ubx_ucenter.sw_ver_h" }, \
 { "gps_ubx_ucenter.sw_ver_l" }, \
 { "gps_ubx_ucenter.hw_ver_h" }, \
 { "gps_ubx_ucenter.hw_ver_l" }, \
 { "gps_ubx_ucenter.baud_init" }, \
 { "gps_ubx_ucenter.baud_run" }, \
 { "sensors_mag_hmc58xx_report_status" }, \
 { "gps_ubx_gps_ubx_ucenter_periodic_status" }, \
 { "calibration_send_imu_mag_current_status" }, \
};
#define SETTINGS_NAMES_SHORT { \
 "tel_mod_Mai" , \
 "aut_mod_aut" , \
 "kil_thr" , \
 "aut_pow_swi" , \
 "aut_mod" , \
 "sta_gai_p_x" , \
 "sta_gai_d_x" , \
 "sta_gai_i_x" , \
 "sta_gai_dd_x" , \
 "sta_gai_p_y" , \
 "sta_gai_d_y" , \
 "sta_gai_i_y" , \
 "sta_gai_dd_y" , \
 "sta_gai_p_z" , \
 "sta_gai_d_z" , \
 "sta_gai_i_z" , \
 "sta_gai_dd_z" , \
 "att_ref_qua_i_mo" , \
 "att_ref_qua_i_mo" , \
 "att_ref_qua_i_mo" , \
 "att_ref_qua_i_mo" , \
 "att_ref_qua_i_mo" , \
 "att_ref_qua_i_mo" , \
 "ahr_icq_gra_heu_" , \
 "ahr_icq_acc_ome" , \
 "ahr_icq_acc_zet" , \
 "ahr_icq_mag_ome" , \
 "ahr_icq_mag_zet" , \
 "gui_v_kp" , \
 "gui_v_kd" , \
 "gui_v_ki" , \
 "gui_v_nom_thr" , \
 "gui_v_ada_thr_en" , \
 "gui_v_z_sp" , \
 "gui_h_use_ref" , \
 "gh_ref_max_spe" , \
 "gui_h_app_for_by" , \
 "gh_ref_tau" , \
 "gh_ref_ome" , \
 "gh_ref_zet" , \
 "gui_h_gai_p" , \
 "gui_h_gai_d" , \
 "gui_h_gai_i" , \
 "gui_h_gai_v" , \
 "gui_h_gai_a" , \
 "gui_h_sp_pos_x" , \
 "gui_h_sp_pos_y" , \
 "fli_alt" , \
 "nav_hea" , \
 "nav_rad" , \
 "nav_cli_vsp" , \
 "nav_des_vsp" , \
 "gps_ubx_uce_sw_v" , \
 "gps_ubx_uce_sw_v" , \
 "gps_ubx_uce_hw_v" , \
 "gps_ubx_uce_hw_v" , \
 "gps_ubx_uce_bau_" , \
 "gps_ubx_uce_bau_" , \
 "sen_mag_hmc_rep_" , \
 "gps_ubx_gps_ubx_" , \
 "cal_sen_imu_mag_" , \
};
#define NB_SETTING 61
#define DlSetting(_idx, _value) { \
  switch (_idx) { \
    case 0: telemetry_mode_Main = _value; break;\
    case 1: autopilot_mode_auto2 = _value; break;\
    case 2: autopilot_KillThrottle( _value ); _value = kill_throttle; break;\
    case 3: autopilot_SetPowerSwitch( _value ); _value = autopilot_power_switch; break;\
    case 4: autopilot_set_mode( _value ); _value = autopilot_mode; break;\
    case 5: stabilization_gains.p.x = _value; break;\
    case 6: stabilization_gains.d.x = _value; break;\
    case 7: stabilization_gains.i.x = _value; break;\
    case 8: stabilization_gains.dd.x = _value; break;\
    case 9: stabilization_gains.p.y = _value; break;\
    case 10: stabilization_gains.d.y = _value; break;\
    case 11: stabilization_gains.i.y = _value; break;\
    case 12: stabilization_gains.dd.y = _value; break;\
    case 13: stabilization_gains.p.z = _value; break;\
    case 14: stabilization_gains.d.z = _value; break;\
    case 15: stabilization_gains.i.z = _value; break;\
    case 16: stabilization_gains.dd.z = _value; break;\
    case 17: stabilization_attitude_quat_int_SetOmegaP( _value ); _value = att_ref_quat_i.model.omega.p; break;\
    case 18: stabilization_attitude_quat_int_SetZetaP( _value ); _value = att_ref_quat_i.model.zeta.p; break;\
    case 19: stabilization_attitude_quat_int_SetOmegaQ( _value ); _value = att_ref_quat_i.model.omega.q; break;\
    case 20: stabilization_attitude_quat_int_SetZetaQ( _value ); _value = att_ref_quat_i.model.zeta.q; break;\
    case 21: stabilization_attitude_quat_int_SetOmegaR( _value ); _value = att_ref_quat_i.model.omega.r; break;\
    case 22: stabilization_attitude_quat_int_SetZetaR( _value ); _value = att_ref_quat_i.model.zeta.r; break;\
    case 23: ahrs_icq.gravity_heuristic_factor = _value; break;\
    case 24: ahrs_int_cmpl_quat_SetAccelOmega( _value ); _value = ahrs_icq.accel_omega; break;\
    case 25: ahrs_int_cmpl_quat_SetAccelZeta( _value ); _value = ahrs_icq.accel_zeta; break;\
    case 26: ahrs_int_cmpl_quat_SetMagOmega( _value ); _value = ahrs_icq.mag_omega; break;\
    case 27: ahrs_int_cmpl_quat_SetMagZeta( _value ); _value = ahrs_icq.mag_zeta; break;\
    case 28: guidance_v_kp = _value; break;\
    case 29: guidance_v_kd = _value; break;\
    case 30: guidance_v_SetKi( _value ); _value = guidance_v_ki; break;\
    case 31: guidance_v_nominal_throttle = _value; break;\
    case 32: guidance_v_adapt_throttle_enabled = _value; break;\
    case 33: guidance_v_z_sp = _value; break;\
    case 34: guidance_h_SetUseRef( _value ); _value = guidance_h.use_ref; break;\
    case 35: guidance_h_SetMaxSpeed( _value ); _value = gh_ref.max_speed; break;\
    case 36: guidance_h.approx_force_by_thrust = _value; break;\
    case 37: guidance_h_SetTau( _value ); _value = gh_ref.tau; break;\
    case 38: guidance_h_SetOmega( _value ); _value = gh_ref.omega; break;\
    case 39: guidance_h_SetZeta( _value ); _value = gh_ref.zeta; break;\
    case 40: guidance_h.gains.p = _value; break;\
    case 41: guidance_h.gains.d = _value; break;\
    case 42: guidance_h_set_igain( _value ); _value = guidance_h.gains.i; break;\
    case 43: guidance_h.gains.v = _value; break;\
    case 44: guidance_h.gains.a = _value; break;\
    case 45: guidance_h.sp.pos.x = _value; break;\
    case 46: guidance_h.sp.pos.y = _value; break;\
    case 47: navigation_SetFlightAltitude( _value ); _value = flight_altitude; break;\
    case 48: nav_heading = _value; break;\
    case 49: nav_radius = _value; break;\
    case 50: nav_climb_vspeed = _value; break;\
    case 51: nav_descend_vspeed = _value; break;\
    case 52: gps_ubx_ucenter.sw_ver_h = _value; break;\
    case 53: gps_ubx_ucenter.sw_ver_l = _value; break;\
    case 54: gps_ubx_ucenter.hw_ver_h = _value; break;\
    case 55: gps_ubx_ucenter.hw_ver_l = _value; break;\
    case 56: gps_ubx_ucenter.baud_init = _value; break;\
    case 57: gps_ubx_ucenter.baud_run = _value; break;\
    case 58: sensors_mag_hmc58xx_report_status = _value; break;\
    case 59: gps_ubx_gps_ubx_ucenter_periodic_status = _value; break;\
    case 60: calibration_send_imu_mag_current_status = _value; break;\
    default: break;\
  }\
}
#define PeriodicSendDlValue(_trans, _dev) { \
  static uint8_t i;\
  float var;\
  if (i >= 61) i = 0;\
  switch (i) { \
    case 0: var = telemetry_mode_Main; break;\
    case 1: var = autopilot_mode_auto2; break;\
    case 2: var = kill_throttle; break;\
    case 3: var = autopilot_power_switch; break;\
    case 4: var = autopilot_mode; break;\
    case 5: var = stabilization_gains.p.x; break;\
    case 6: var = stabilization_gains.d.x; break;\
    case 7: var = stabilization_gains.i.x; break;\
    case 8: var = stabilization_gains.dd.x; break;\
    case 9: var = stabilization_gains.p.y; break;\
    case 10: var = stabilization_gains.d.y; break;\
    case 11: var = stabilization_gains.i.y; break;\
    case 12: var = stabilization_gains.dd.y; break;\
    case 13: var = stabilization_gains.p.z; break;\
    case 14: var = stabilization_gains.d.z; break;\
    case 15: var = stabilization_gains.i.z; break;\
    case 16: var = stabilization_gains.dd.z; break;\
    case 17: var = att_ref_quat_i.model.omega.p; break;\
    case 18: var = att_ref_quat_i.model.zeta.p; break;\
    case 19: var = att_ref_quat_i.model.omega.q; break;\
    case 20: var = att_ref_quat_i.model.zeta.q; break;\
    case 21: var = att_ref_quat_i.model.omega.r; break;\
    case 22: var = att_ref_quat_i.model.zeta.r; break;\
    case 23: var = ahrs_icq.gravity_heuristic_factor; break;\
    case 24: var = ahrs_icq.accel_omega; break;\
    case 25: var = ahrs_icq.accel_zeta; break;\
    case 26: var = ahrs_icq.mag_omega; break;\
    case 27: var = ahrs_icq.mag_zeta; break;\
    case 28: var = guidance_v_kp; break;\
    case 29: var = guidance_v_kd; break;\
    case 30: var = guidance_v_ki; break;\
    case 31: var = guidance_v_nominal_throttle; break;\
    case 32: var = guidance_v_adapt_throttle_enabled; break;\
    case 33: var = guidance_v_z_sp; break;\
    case 34: var = guidance_h.use_ref; break;\
    case 35: var = gh_ref.max_speed; break;\
    case 36: var = guidance_h.approx_force_by_thrust; break;\
    case 37: var = gh_ref.tau; break;\
    case 38: var = gh_ref.omega; break;\
    case 39: var = gh_ref.zeta; break;\
    case 40: var = guidance_h.gains.p; break;\
    case 41: var = guidance_h.gains.d; break;\
    case 42: var = guidance_h.gains.i; break;\
    case 43: var = guidance_h.gains.v; break;\
    case 44: var = guidance_h.gains.a; break;\
    case 45: var = guidance_h.sp.pos.x; break;\
    case 46: var = guidance_h.sp.pos.y; break;\
    case 47: var = flight_altitude; break;\
    case 48: var = nav_heading; break;\
    case 49: var = nav_radius; break;\
    case 50: var = nav_climb_vspeed; break;\
    case 51: var = nav_descend_vspeed; break;\
    case 52: var = gps_ubx_ucenter.sw_ver_h; break;\
    case 53: var = gps_ubx_ucenter.sw_ver_l; break;\
    case 54: var = gps_ubx_ucenter.hw_ver_h; break;\
    case 55: var = gps_ubx_ucenter.hw_ver_l; break;\
    case 56: var = gps_ubx_ucenter.baud_init; break;\
    case 57: var = gps_ubx_ucenter.baud_run; break;\
    case 58: var = sensors_mag_hmc58xx_report_status; break;\
    case 59: var = gps_ubx_gps_ubx_ucenter_periodic_status; break;\
    case 60: var = calibration_send_imu_mag_current_status; break;\
    default: var = 0.; break;\
  }\
  pprz_msg_send_DL_VALUE(_trans, _dev, AC_ID, &i, &var);\
  i++;\
}
static inline float settings_get_value(uint8_t i) {
  switch (i) {
    case 0: return telemetry_mode_Main;
    case 1: return autopilot_mode_auto2;
    case 2: return kill_throttle;
    case 3: return autopilot_power_switch;
    case 4: return autopilot_mode;
    case 5: return stabilization_gains.p.x;
    case 6: return stabilization_gains.d.x;
    case 7: return stabilization_gains.i.x;
    case 8: return stabilization_gains.dd.x;
    case 9: return stabilization_gains.p.y;
    case 10: return stabilization_gains.d.y;
    case 11: return stabilization_gains.i.y;
    case 12: return stabilization_gains.dd.y;
    case 13: return stabilization_gains.p.z;
    case 14: return stabilization_gains.d.z;
    case 15: return stabilization_gains.i.z;
    case 16: return stabilization_gains.dd.z;
    case 17: return att_ref_quat_i.model.omega.p;
    case 18: return att_ref_quat_i.model.zeta.p;
    case 19: return att_ref_quat_i.model.omega.q;
    case 20: return att_ref_quat_i.model.zeta.q;
    case 21: return att_ref_quat_i.model.omega.r;
    case 22: return att_ref_quat_i.model.zeta.r;
    case 23: return ahrs_icq.gravity_heuristic_factor;
    case 24: return ahrs_icq.accel_omega;
    case 25: return ahrs_icq.accel_zeta;
    case 26: return ahrs_icq.mag_omega;
    case 27: return ahrs_icq.mag_zeta;
    case 28: return guidance_v_kp;
    case 29: return guidance_v_kd;
    case 30: return guidance_v_ki;
    case 31: return guidance_v_nominal_throttle;
    case 32: return guidance_v_adapt_throttle_enabled;
    case 33: return guidance_v_z_sp;
    case 34: return guidance_h.use_ref;
    case 35: return gh_ref.max_speed;
    case 36: return guidance_h.approx_force_by_thrust;
    case 37: return gh_ref.tau;
    case 38: return gh_ref.omega;
    case 39: return gh_ref.zeta;
    case 40: return guidance_h.gains.p;
    case 41: return guidance_h.gains.d;
    case 42: return guidance_h.gains.i;
    case 43: return guidance_h.gains.v;
    case 44: return guidance_h.gains.a;
    case 45: return guidance_h.sp.pos.x;
    case 46: return guidance_h.sp.pos.y;
    case 47: return flight_altitude;
    case 48: return nav_heading;
    case 49: return nav_radius;
    case 50: return nav_climb_vspeed;
    case 51: return nav_descend_vspeed;
    case 52: return gps_ubx_ucenter.sw_ver_h;
    case 53: return gps_ubx_ucenter.sw_ver_l;
    case 54: return gps_ubx_ucenter.hw_ver_h;
    case 55: return gps_ubx_ucenter.hw_ver_l;
    case 56: return gps_ubx_ucenter.baud_init;
    case 57: return gps_ubx_ucenter.baud_run;
    case 58: return sensors_mag_hmc58xx_report_status;
    case 59: return gps_ubx_gps_ubx_ucenter_periodic_status;
    case 60: return calibration_send_imu_mag_current_status;
    default: return 0.;
  }
}

/* Persistent Settings */
struct PersistentSettings {
  int32_t s_0; /* stabilization_gains.p.x */
  int32_t s_1; /* stabilization_gains.d.x */
  int32_t s_2; /* stabilization_gains.i.x */
  int32_t s_3; /* stabilization_gains.dd.x */
  int32_t s_4; /* stabilization_gains.p.y */
  int32_t s_5; /* stabilization_gains.d.y */
  int32_t s_6; /* stabilization_gains.i.y */
  int32_t s_7; /* stabilization_gains.dd.y */
  int32_t s_8; /* stabilization_gains.p.z */
  int32_t s_9; /* stabilization_gains.d.z */
  int32_t s_10; /* stabilization_gains.i.z */
  int32_t s_11; /* stabilization_gains.dd.z */
  uint8_t s_12; /* ahrs_icq.gravity_heuristic_factor */
  float s_13; /* ahrs_icq.accel_omega */
  float s_14; /* ahrs_icq.accel_zeta */
  float s_15; /* ahrs_icq.mag_omega */
  float s_16; /* ahrs_icq.mag_zeta */
  float s_17; /* guidance_v_kp */
  float s_18; /* guidance_v_kd */
  float s_19; /* guidance_v_ki */
  float s_20; /* guidance_v_nominal_throttle */
  float s_21; /* guidance_v_adapt_throttle_enabled */
  float s_22; /* guidance_h.use_ref */
  float s_23; /* gh_ref.max_speed */
  uint8_t s_24; /* guidance_h.approx_force_by_thrust */
  float s_25; /* gh_ref.tau */
  float s_26; /* gh_ref.omega */
  float s_27; /* gh_ref.zeta */
  int32_t s_28; /* guidance_h.gains.p */
  int32_t s_29; /* guidance_h.gains.d */
  int32_t s_30; /* guidance_h.gains.i */
  int32_t s_31; /* guidance_h.gains.v */
  int32_t s_32; /* guidance_h.gains.a */
};

extern struct PersistentSettings pers_settings;

static inline void persistent_settings_store( void ) {
  pers_settings.s_0 = stabilization_gains.p.x;
  pers_settings.s_1 = stabilization_gains.d.x;
  pers_settings.s_2 = stabilization_gains.i.x;
  pers_settings.s_3 = stabilization_gains.dd.x;
  pers_settings.s_4 = stabilization_gains.p.y;
  pers_settings.s_5 = stabilization_gains.d.y;
  pers_settings.s_6 = stabilization_gains.i.y;
  pers_settings.s_7 = stabilization_gains.dd.y;
  pers_settings.s_8 = stabilization_gains.p.z;
  pers_settings.s_9 = stabilization_gains.d.z;
  pers_settings.s_10 = stabilization_gains.i.z;
  pers_settings.s_11 = stabilization_gains.dd.z;
  pers_settings.s_12 = ahrs_icq.gravity_heuristic_factor;
  pers_settings.s_13 = ahrs_icq.accel_omega;
  pers_settings.s_14 = ahrs_icq.accel_zeta;
  pers_settings.s_15 = ahrs_icq.mag_omega;
  pers_settings.s_16 = ahrs_icq.mag_zeta;
  pers_settings.s_17 = guidance_v_kp;
  pers_settings.s_18 = guidance_v_kd;
  pers_settings.s_19 = guidance_v_ki;
  pers_settings.s_20 = guidance_v_nominal_throttle;
  pers_settings.s_21 = guidance_v_adapt_throttle_enabled;
  pers_settings.s_22 = guidance_h.use_ref;
  pers_settings.s_23 = gh_ref.max_speed;
  pers_settings.s_24 = guidance_h.approx_force_by_thrust;
  pers_settings.s_25 = gh_ref.tau;
  pers_settings.s_26 = gh_ref.omega;
  pers_settings.s_27 = gh_ref.zeta;
  pers_settings.s_28 = guidance_h.gains.p;
  pers_settings.s_29 = guidance_h.gains.d;
  pers_settings.s_30 = guidance_h.gains.i;
  pers_settings.s_31 = guidance_h.gains.v;
  pers_settings.s_32 = guidance_h.gains.a;
}

static inline void persistent_settings_load( void ) {
  stabilization_gains.p.x = pers_settings.s_0;
  stabilization_gains.d.x = pers_settings.s_1;
  stabilization_gains.i.x = pers_settings.s_2;
  stabilization_gains.dd.x = pers_settings.s_3;
  stabilization_gains.p.y = pers_settings.s_4;
  stabilization_gains.d.y = pers_settings.s_5;
  stabilization_gains.i.y = pers_settings.s_6;
  stabilization_gains.dd.y = pers_settings.s_7;
  stabilization_gains.p.z = pers_settings.s_8;
  stabilization_gains.d.z = pers_settings.s_9;
  stabilization_gains.i.z = pers_settings.s_10;
  stabilization_gains.dd.z = pers_settings.s_11;
  ahrs_icq.gravity_heuristic_factor = pers_settings.s_12;
  ahrs_int_cmpl_quat_SetAccelOmega( pers_settings.s_13 );
  ahrs_int_cmpl_quat_SetAccelZeta( pers_settings.s_14 );
  ahrs_int_cmpl_quat_SetMagOmega( pers_settings.s_15 );
  ahrs_int_cmpl_quat_SetMagZeta( pers_settings.s_16 );
  guidance_v_kp = pers_settings.s_17;
  guidance_v_kd = pers_settings.s_18;
  guidance_v_SetKi( pers_settings.s_19 );
  guidance_v_nominal_throttle = pers_settings.s_20;
  guidance_v_adapt_throttle_enabled = pers_settings.s_21;
  guidance_h_SetUseRef( pers_settings.s_22 );
  guidance_h_SetMaxSpeed( pers_settings.s_23 );
  guidance_h.approx_force_by_thrust = pers_settings.s_24;
  guidance_h_SetTau( pers_settings.s_25 );
  guidance_h_SetOmega( pers_settings.s_26 );
  guidance_h_SetZeta( pers_settings.s_27 );
  guidance_h.gains.p = pers_settings.s_28;
  guidance_h.gains.d = pers_settings.s_29;
  guidance_h_set_igain( pers_settings.s_30 );
  guidance_h.gains.v = pers_settings.s_31;
  guidance_h.gains.a = pers_settings.s_32;
}

#endif // SETTINGS_H