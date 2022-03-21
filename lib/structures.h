/*
 * This file is part of the ABE Squared (https://github.com/abecryptools/abe_squared).
 * Copyright (c) 2022 Antonio de la Piedra, Marloes Venema and Greg Alpár
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __STRUCTURES_H__
#define __STRUCTURES_H__
const int kss = 1;                                                    //Here kss=1 means (SXLIN) and kss=2 means (DLIN)

#include <stdint.h>

extern "C" {
#include <relic/relic.h>
}

// rw13 oe

struct c_attribute_rw13_oe_1 {
    uint32_t attr;
    g1_t c_attr;
};

struct c_attribute_rw13_oe_2 {
    uint32_t attr;
    g1_t c_attr;
};

struct c_attribute_rw13_oe_3 {
    uint32_t attr;
    g1_t c_attr;
};

struct ciphertext_rw13_oe {
    uint32_t N_ATTR;
    gt_t C;
    g1_t C_PRIMA;
    struct c_attribute_rw13_oe_1 *C_1;
    struct c_attribute_rw13_oe_2 *C_2;
    struct c_attribute_rw13_oe_3 *C_3;
};

struct c_attribute_rw13_ok_1 {
    uint32_t attr;
    g2_t c_attr;
};

struct c_attribute_rw13_ok_2 {
    uint32_t attr;
    g2_t c_attr;
};

struct c_attribute_rw13_ok_3 {
    uint32_t attr;
    g2_t c_attr;
};

struct ciphertext_rw13_ok {
    uint32_t N_ATTR;
    gt_t C;
    g2_t C_PRIMA;
    struct c_attribute_rw13_ok_1 *C_1;
    struct c_attribute_rw13_ok_2 *C_2;
    struct c_attribute_rw13_ok_3 *C_3;
};

int init_ciphertext_rw13_oe(const uint32_t n_attr, struct ciphertext_rw13_oe *c);
int init_ciphertext_rw13_ok(const uint32_t n_attr, struct ciphertext_rw13_ok *c);

struct k_attribute_K_1_oe {
    uint32_t attr;
    g2_t k_attr;
};

struct k_attribute_K_2_oe {
    uint32_t attr;
    g2_t k_attr;
};

struct secret_key_rw13_oe {
    uint32_t N_ATTR;
    g2_t K;
    g2_t K_PRIMA;
    struct k_attribute_K_1_oe *attributes_K_1;
    struct k_attribute_K_2_oe *attributes_K_2;
};

struct k_attribute_K_1_ok {
    uint32_t attr;
    g1_t k_attr;
};

struct k_attribute_K_2_ok {
    uint32_t attr;
    g1_t k_attr;
};

struct secret_key_rw13_ok {
    uint32_t N_ATTR;
    g1_t K;
    g1_t K_PRIMA;
    struct k_attribute_K_1_ok *attributes_K_1;
    struct k_attribute_K_2_ok *attributes_K_2;
};

int init_secret_key_rw13_oe(const uint32_t n_attr, struct secret_key_rw13_oe *s);
int init_secret_key_rw13_ok(const uint32_t n_attr, struct secret_key_rw13_ok *s);

void get_k_attr_rw13_oe(const uint32_t attr, const struct secret_key_rw13_oe s, g2_t k_attr_1, g2_t k_attr_2);

void get_k_attr_rw13_ok(const uint32_t attr, const struct secret_key_rw13_ok s, g1_t k_attr_1, g1_t k_attr_2);

int init_public_key_rw13_oe(const uint32_t n_attr, struct public_key_rw13_oe *p);
int init_public_key_rw13_ok(const uint32_t n_attr, struct public_key_rw13_ok *p);

struct public_key_rw13_oe {
    uint32_t N_ATTR;
    g1_t g;
    g2_t h;
    g1_t g_b;
    g1_t g_b_0;
    g1_t g_b_1;
    g1_t g_b_prima;
    gt_t A;
};

struct public_key_rw13_ok {
    uint32_t N_ATTR;
    g1_t g;
    g2_t h;
    g2_t h_b;
    g2_t h_b_0;
    g2_t h_b_1;
    g2_t h_b_prima;
    gt_t A;
};

struct master_key_rw13_oe {
    bn_t b;
    bn_t alpha;
    bn_t b_0;
    bn_t b_1;
    bn_t b_prima;
};

// end rw13 oe

struct c_attribute_rw13_1 {
    uint32_t attr;
    g1_t c_attr;
};

struct c_attribute_rw13_2 {
    uint32_t attr;
    g1_t c_attr;
};

struct c_attribute_rw13_3 {
    uint32_t attr;
    g2_t c_attr;
};

struct ciphertext_rw13_cp {
    uint32_t N_ATTR;
    gt_t C;
    g2_t C_0;
    struct c_attribute_rw13_1 *C_1;
    struct c_attribute_rw13_2 *C_2;
    struct c_attribute_rw13_3 *C_3;
};

int init_ciphertext_rw13_cp(const uint32_t n_attr, struct ciphertext_rw13_cp *c);

struct k_attribute_K_2 {
    uint32_t attr;
    g2_t k_attr;
};

struct k_attribute_K_3 {
    uint32_t attr;
    g1_t k_attr;
};

struct secret_key_rw13_cp {
    uint32_t N_ATTR;
    g1_t K_0;
    g2_t K_1;
    struct k_attribute_K_2 *attributes_K_2;
    struct k_attribute_K_3 *attributes_K_3;
};

int init_secret_key_rw13_cp(const uint32_t n_attr, struct secret_key_rw13_cp *s);

struct public_key_rw13_cp {
    uint32_t N_ATTR;
    g2_t g;
    g1_t g2;
    g1_t u;
    g1_t v;
    g1_t h;
    g1_t w;
    gt_t D;

    struct attribute_blind_wat11_i_ok *attributes;
};

int init_public_key_rw13_cp(const uint32_t n_attr, struct public_key_rw13_cp *p);

void get_k_attr_rw13_cp(const uint32_t attr, const struct secret_key_rw13_cp s, g2_t k_attr_2, g1_t k_attr_3);

// watt ok

void get_c_attr_c_1_wat11_i_ok(const uint32_t attr, const struct ciphertext_wat11_i_ok c, g2_t c_1);
void get_c_attr_c_2_wat11_i_ok(const uint32_t attr, const struct ciphertext_wat11_i_ok c, g2_t c_2);

int init_ciphertext_wat11_i_ok(const uint32_t n_attr, struct ciphertext_wat11_i_ok *c);

struct c_attribute_wat11_i_ok {
    uint32_t attr;
    g2_t c_attr;
};

struct ciphertext_wat11_i_ok {
    uint32_t N_ATTR;
    gt_t C;
    g2_t C_PRIMA;
    struct c_attribute_wat11_i_ok *C_1;
    struct c_attribute_wat11_i_ok *C_2;
};

struct c_attribute_wat11_iv_ok_1 {
    uint32_t attr;
    g1_t c_attr;
};
struct c_attribute_wat11_iv_ok_2 {
    uint32_t attr;
    g2_t c_attr;
};

struct ciphertext_wat11_iv_ok {
    uint32_t N_ATTR;
    gt_t C;
    g2_t C_PRIMA;
    struct c_attribute_wat11_iv_ok_1 *C_1;
    struct c_attribute_wat11_iv_ok_2 *C_2;
};

void get_k_attr_wat11_i_ok(const uint32_t attr, const struct secret_key_wat11_i_ok s, g1_t k_attr);
void get_k_attr_wat11_iv_ok(const uint32_t attr, const struct secret_key_wat11_iv_ok s, g1_t k_attr);

int init_secret_key_wat11_i_ok(const uint32_t n_attr, struct secret_key_wat11_i_ok *s);

int init_secret_key_wat11_iv_oe(const uint32_t n_attr, struct secret_key_wat11_iv_oe *s);

int init_secret_key_wat11_iv_ok(const uint32_t n_attr, struct secret_key_wat11_iv_ok *s);

struct k_attribute_wat11_i_ok {
    uint32_t attr;
    g1_t k_attr;
};

struct secret_key_wat11_i_ok {
    uint32_t N_ATTR;
    g1_t K;
    g1_t K_PRIMA;
    struct k_attribute_wat11_i_ok *attributes;
};

struct secret_key_wat11_iv_ok {
    uint32_t N_ATTR;
    g1_t K;
    g2_t K_PRIMA;
    struct k_attribute_wat11_i_ok *attributes;
};

struct k_attribute_wat11_iv_oe {
    uint32_t attr;
    g1_t k_attr;
};

struct secret_key_wat11_iv_oe {
    uint32_t N_ATTR;
    g2_t K;
    g2_t K_PRIMA;
    struct k_attribute_wat11_iv_oe *attributes;
};

void get_b_attr_blind_wat11_i_ok(const uint32_t attr, const struct public_key_wat11_i_ok p, g2_t g2_o);

int init_public_key_wat11_i_ok(const uint32_t n_attr, struct public_key_wat11_i_ok *p);

int init_public_key_wat11_iv_ok(const uint32_t n_attr, struct public_key_wat11_iv_ok *p);

struct public_key_wat11_i_ok {
    uint32_t N_ATTR;
    g1_t g;
    g2_t h;
    gt_t A;
    g2_t B;
    struct attribute_blind_wat11_i_ok *attributes;
};

struct public_key_wat11_iv_ok {
    g1_t g;
    g2_t h;
    gt_t A;
    g1_t B;
};

struct attribute_blind_wat11_i_ok {
    uint32_t attr;
    g2_t h_b_attr;
};

// watt ok

int init_ciphertext_wat11_i_oe(const uint32_t n_attr, struct ciphertext_wat11_i_oe *c);
int init_ciphertext_wat11_iv_oe(const uint32_t n_attr, struct ciphertext_wat11_iv_oe *c);
int init_ciphertext_wat11_i_ok(const uint32_t n_attr, struct ciphertext_wat11_i_ok *c);
int init_ciphertext_wat11_iv_ok(const uint32_t n_attr, struct ciphertext_wat11_iv_ok *c);

struct c_attribute_wat11_i_oe {
    uint32_t attr;
    g1_t c_attr;
};

struct c_attribute_wat11_iv_oe_1 {
    uint32_t attr;
    g1_t c_attr;
};
struct c_attribute_wat11_iv_oe_2 {
    uint32_t attr;
    g2_t c_attr;
};

struct ciphertext_wat11_i_oe {
    uint32_t N_ATTR;
    gt_t C;
    g1_t C_PRIMA;
    struct c_attribute_wat11_i_oe *C_1;
    struct c_attribute_wat11_i_oe *C_2;
};

struct ciphertext_wat11_iv_oe {
    uint32_t N_ATTR;
    gt_t C;
    g1_t C_PRIMA;
    struct c_attribute_wat11_iv_oe_1 *C_1;
    struct c_attribute_wat11_iv_oe_2 *C_2;
};

struct attribute_blind_wat11_i_oe {
    uint32_t attr;
    g1_t g_b_attr;
};

struct public_key_wat11_i_oe {
    uint32_t N_ATTR;
    g1_t g;
    g2_t h;
    gt_t A;
    g1_t B;
    struct attribute_blind_wat11_i_oe *attributes;
};

struct public_key_wat11_iv_oe {
    g1_t g;
    g2_t h;
    gt_t A;
    g1_t B;
};

int init_public_key_wat11_i_oe(const uint32_t n_attr, struct public_key_wat11_i_oe *p);

struct attribute {
    uint32_t attr;
    bn_t b_attr;
};

struct attribute_blind {
    uint32_t attr;
    g1_t g_b_attr;
};

struct attribute_blind_ok {
    uint32_t attr;
    g2_t h_b_attr;
};

struct k_attribute {
    uint32_t attr;
    g2_t k_attr;
};

struct k_attribute_lu_oe {
    uint32_t attr;
    g1_t k_attr;
};

struct k_attribute_lu_ok {
    uint32_t attr;
    g1_t k_attr;
};

struct k_attribute_ok {
    uint32_t attr;
    g1_t k_attr;
};

struct k_attribute_od {
    uint32_t attr;
    g1_t k_attr;
};

struct k_attribute_cp {
    uint32_t attr;
    g1_t k_attr;
};

struct c_attribute {
    uint32_t attr;
    g1_t c_attr;
};

struct c_attribute_lu_oe_1 {
    uint32_t attr;
    g1_t c_attr;
};

struct c_attribute_lu_oe_2 {
    uint32_t attr;
    g2_t c_attr;
};

struct c_attribute_lu_ok_1 {
    uint32_t attr;
    g1_t c_attr;
};

struct c_attribute_lu_ok_2 {
    uint32_t attr;
    g2_t c_attr;
};

struct c_attribute_ok {
    uint32_t attr;
    g2_t c_attr;
};

struct c_attribute_od {
    uint32_t attr;
    g2_t c_attr;
};

struct c_attribute_cp {
    uint32_t attr;
    g2_t c_attr;
};

struct master_key {
    uint32_t N_ATTR;
    struct attribute *attributes;
    bn_t b;
    bn_t alpha;
};

struct master_key_lu {
    bn_t b;
    bn_t alpha;
};

struct public_key {
    uint32_t N_ATTR;
    g1_t g;
    g2_t h;
    gt_t A;
    g1_t B;
    struct attribute_blind *attributes;
};

struct public_key_lu_ok {
    uint32_t N_ATTR;
    g1_t g;
    g2_t h;
    gt_t A;
    g1_t B;
    struct attribute_blind *attributes;
};

struct public_key_ok {
    uint32_t N_ATTR;
    g1_t g;
    g2_t h;
    gt_t A;
    g2_t B;
    struct attribute_blind_ok *attributes;
};

struct public_key_cp {
    uint32_t N_ATTR;
    g1_t g;
    g2_t h;
    gt_t A;
    g1_t B;
    struct attribute_blind *attributes;
};

struct public_key_lu {
    g1_t g;
    g2_t h;
    gt_t A;
    g1_t B;
};

struct secret_key {
    uint32_t N_ATTR;
    g2_t K;
    g2_t K_PRIMA;
    struct k_attribute *attributes;
};

struct secret_key_lu_ok {
    uint32_t N_ATTR;
    g1_t K;
    g2_t K_PRIMA;
    struct k_attribute_lu_ok *attributes;
};

struct secret_key_lu_oe {
    uint32_t N_ATTR;
    g2_t K;
    g2_t K_PRIMA;
    struct k_attribute_lu_oe *attributes;
};

struct secret_key_od {
    uint32_t N_ATTR;
    g2_t K;
    g2_t K_PRIMA;
    struct k_attribute_od *attributes;
};

struct secret_key_ok {
    uint32_t N_ATTR;
    g1_t K;
    g1_t K_PRIMA;
    struct k_attribute_ok *attributes;
};

struct secret_key_cp {
    uint32_t N_ATTR;
    g1_t K;
    g2_t K_PRIMA;
    struct k_attribute_cp *attributes;
};

struct ciphertext {
    uint32_t N_ATTR;
    gt_t C;
    g1_t C_PRIMA;
    struct c_attribute *C_1;
    struct c_attribute *C_2;
};

struct ciphertext_lu_oe {
    uint32_t N_ATTR;
    gt_t C;
    g1_t C_PRIMA;
    struct c_attribute_lu_oe_1 *C_1;
    struct c_attribute_lu_oe_2 *C_2;
};

struct ciphertext_lu_ok {
    uint32_t N_ATTR;
    gt_t C;
    g2_t C_PRIMA;
    struct c_attribute_lu_ok_1 *C_1;
    struct c_attribute_lu_ok_2 *C_2;
};

struct ciphertext_ok {
    uint32_t N_ATTR;
    gt_t C;
    g2_t C_PRIMA;
    struct c_attribute_ok *C_1;
    struct c_attribute_ok *C_2;
};

struct ciphertext_od {
    uint32_t N_ATTR;
    gt_t C;
    g1_t C_PRIMA;
    struct c_attribute *C_1;
    struct c_attribute_od *C_2;
};

struct ciphertext_cp {
    uint32_t N_ATTR;
    gt_t C;
    g2_t C_PRIMA;
    struct c_attribute *C_1;
    struct c_attribute_cp *C_2;
};

int init_master_key(const uint32_t n_attr, struct master_key *m);
int init_public_key(const uint32_t n_attr, struct public_key *p);
int init_public_key_ok(const uint32_t n_attr, struct public_key_ok *p);
int init_public_key_cp(const uint32_t n_attr, struct public_key_cp *p);
int init_public_key_lu_ok(const uint32_t n_attr, struct public_key_lu_ok *p);

int init_secret_key(const uint32_t n_attr, struct secret_key *s);
int init_secret_key_lu_oe(const uint32_t n_attr, struct secret_key_lu_oe *s);
int init_secret_key_lu_ok(const uint32_t n_attr, struct secret_key_lu_ok *s);

int init_secret_key_ok(const uint32_t n_attr, struct secret_key_ok *s);
int init_secret_key_od(const uint32_t n_attr, struct secret_key_od *s);
int init_secret_key_cp(const uint32_t n_attr, struct secret_key_cp *s);

int init_ciphertext(const uint32_t n_attr, struct ciphertext *c);
int init_ciphertext_ok(const uint32_t n_attr, struct ciphertext_ok *c);
int init_ciphertext_od(const uint32_t n_attr, struct ciphertext_od *c);
int init_ciphertext_cp(const uint32_t n_attr, struct ciphertext_cp *c);
int init_ciphertext_lu_oe(const uint32_t n_attr, struct ciphertext_lu_oe *c);
int init_ciphertext_lu_ok(const uint32_t n_attr, struct ciphertext_lu_ok *c);

void set_b_attr(const uint32_t attr, bn_t b_attr, struct master_key *m);
void get_b_attr(const uint32_t attr, const struct master_key m, bn_t bn_o);

void get_b_attr_blind(const uint32_t attr, const struct public_key p, g1_t g1_o);
void get_b_attr_blind_ok(const uint32_t attr, const struct public_key_ok p, g2_t g2_o);
void get_b_attr_blind_cp(const uint32_t attr, const struct public_key_cp p, g1_t g1_o);

void set_b_attr_blind(const uint32_t attr, g1_t g_b_attr, struct public_key *p);
void set_b_attr_blind_ok(const uint32_t attr, g2_t h_b_attr, struct public_key_ok *p);
void set_b_attr_blind_cp(const uint32_t attr, g1_t g_b_attr, struct public_key_cp *p);

void get_k_attr(const uint32_t attr, const struct secret_key s, g2_t k_attr);
void get_k_attr_lu_oe(const uint32_t attr, const struct secret_key_lu_oe s, g1_t k_attr);

void get_k_attr_ok(const uint32_t attr, const struct secret_key_ok s, g1_t k_attr);

void get_k_attr_lu_ok(const uint32_t attr, const struct secret_key_lu_ok s, g1_t k_attr);

void get_k_attr_od(const uint32_t attr, const struct secret_key_od s, g1_t k_attr);
void get_k_attr_cp(const uint32_t attr, const struct secret_key_cp s, g1_t k_attr);
void get_k_attr_wat11_iv_oe(const uint32_t attr, const struct secret_key_wat11_iv_oe s, g1_t k_attr);

void set_k_attr(const uint32_t attr, g2_t k_attr, struct secret_key *s);
void set_k_attr_lu_oe(const uint32_t attr, g1_t k_attr, struct secret_key_lu_oe *s);
void set_k_attr_lu_ok(const uint32_t attr, g1_t k_attr, struct secret_key_lu_ok *s);

void set_k_attr_ok(const uint32_t attr, g1_t k_attr, struct secret_key_ok *s);
void set_k_attr_od(const uint32_t attr, g1_t k_attr, struct secret_key_od *s);
void set_k_attr_cp(const uint32_t attr, g1_t k_attr, struct secret_key_cp *s);

void get_c_attr_c_1(const uint32_t attr, const struct ciphertext c, g1_t c_1);

void get_c_attr_c_1_wat11_i_ok(const uint32_t attr, const struct ciphertext_wat11_i_ok c, g2_t c_1);
void get_c_attr_c_2_wat11_i_ok(const uint32_t attr, const struct ciphertext_wat11_i_ok c, g2_t c_2);

void get_c_attr_c_1_lu_oe(const uint32_t attr, const struct ciphertext_lu_oe c, g1_t c_1);

void get_c_attr_c_1_lu_ok(const uint32_t attr, const struct ciphertext_lu_ok c, g1_t c_1);
void get_c_attr_c_2_lu_ok(const uint32_t attr, const struct ciphertext_lu_ok c, g2_t c_2);

void get_c_attr_c_1_ok(const uint32_t attr, const struct ciphertext_ok c, g2_t c_1);
void get_c_attr_c_1_od(const uint32_t attr, const struct ciphertext_od c, g1_t c_1);
void get_c_attr_c_1_cp(const uint32_t attr, const struct ciphertext_cp c, g1_t c_1);

void set_c_attr_c_1(const uint32_t attr, g1_t c_1, struct ciphertext *c);
void set_c_attr_c_1_lu_oe(const uint32_t attr, g1_t c_1, struct ciphertext_lu_oe *c);

void set_c_attr_c_1_lu_ok(const uint32_t attr, g1_t c_1, struct ciphertext_lu_ok *c);
void set_c_attr_c_2_lu_ok(const uint32_t attr, g2_t c_2, struct ciphertext_lu_ok *c);

void set_c_attr_c_1_ok(const uint32_t attr, g2_t c_1, struct ciphertext_ok *c);
void set_c_attr_c_1_od(const uint32_t attr, g1_t c_1, struct ciphertext_od *c);
void set_c_attr_c_1_cp(const uint32_t attr, g1_t c_1, struct ciphertext_cp *c);

void get_c_attr_c_2(const uint32_t attr, const struct ciphertext c, g1_t c_2);

void get_c_attr_c_2_lu_oe(const uint32_t attr, const struct ciphertext c, g2_t c_2);

void get_c_attr_c_2_ok(const uint32_t attr, const struct ciphertext_ok c, g2_t c_2);
void get_c_attr_c_2_od(const uint32_t attr, const struct ciphertext_od c, g2_t c_2);
void get_c_attr_c_2_cp(const uint32_t attr, const struct ciphertext_cp c, g2_t c_2);

void set_c_attr_c_2(const uint32_t attr, g1_t c_2, struct ciphertext *c);
void set_c_attr_c_2_lu_oe(const uint32_t attr, g2_t c_2, struct ciphertext_lu_oe *c);

void set_c_attr_c_2_lu_oe(const uint32_t attr, g2_t c_2, struct ciphertext_lu_oe *c);

void set_c_attr_c_2_ok(const uint32_t attr, g2_t c_2, struct ciphertext_ok *c);
void set_c_attr_c_2_od(const uint32_t attr, g2_t c_2, struct ciphertext_od *c);
void set_c_attr_c_2_cp(const uint32_t attr, g2_t c_2, struct ciphertext_cp *c);

// Key Policy

struct public_key_kp_gpsw {
    uint32_t N_ATTR;
    gt_t Y;
    g2_t *T_values;
};

struct master_key_kp_gpsw {
    uint32_t N_ATTR;
    struct attribute *attributes;
    bn_t y;
    bn_t *t_values;
};

struct secret_key_kp_gpsw {
    g1_t *D_values;
};

struct ciphertext_kp_gpsw {
    bn_t gamma;
    gt_t E_prime;
    g2_t *E_values;
};

int init_master_key_kp_gpsw(const uint32_t n_attr, struct master_key_kp_gpsw *m);
int init_public_key_kp_gpsw(const uint32_t n_attr, struct public_key_kp_gpsw *p);
int init_secret_key_kp_gpsw(const uint32_t n_attr, struct secret_key_kp_gpsw *sk);
int init_ciphertext_kp_gpsw(const uint32_t n_attr, struct ciphertext_kp_gpsw *E);

struct master_key_kp_gpsw_lu {
    bn_t y;
};

struct public_key_kp_gpsw_lu {
    g1_t g1;
    g2_t g2;
    // TODO: Most likely don't need t_values if using T as a hashing function -> G_2
    g2_t *t_values;
};

struct secret_key_kp_gpsw_lu {
    g2_t *D_values;
    g1_t *R_values;
};

struct ciphertext_kp_gpsw_lu {
    bn_t gamma;
    gt_t E_prime;
    g1_t E_prime_prime;
    g2_t *E_values;
};

int init_master_key_kp_gpsw_lu(const uint32_t n_attr, struct master_key_kp_gpsw_lu *m);
int init_public_key_kp_gpsw_lu(const uint32_t n_attr, struct public_key_kp_gpsw_lu *p);
int init_secret_key_kp_gpsw_lu(const uint32_t n_attr, struct secret_key_kp_gpsw_lu *sk);
int init_ciphertext_kp_gpsw_lu(const uint32_t n_attr, struct ciphertext_kp_gpsw_lu *E);


//Stuff used for the K_LIN scheme.
//const int k = 2;                                     //Here k=1 means (SXLIN) and k=2 means (DLIN)

//TODO factor out the constant k such that it is set at compile time.
struct k_lin_att {
    uint32_t attr;
    bn_t w[(kss+1)*kss];                                 //Matrix w has size ((k+1) * k)
};

struct k_lin_mat {
    uint32_t attr;
    g1_t w[kss*kss];                                      //Matrix AW_i will have size k*k after matrix multiplication.
};

struct k_lin_secret_key {
    uint32_t attr;
    g2_t sk_one[kss+1];                                //SK1 will be a vector of k+1 since matrix-vector multiplication yields a vector of size k. Then addition of two vectors must have same dimensions, so we finally get a vector of size k+1
    g2_t sk_two[kss];                                  //SK2 is a vector of size k.
};

struct tmp_vj {
    bn_t vec_j[kss+1];                                 //The vj-vector will have size k+1 otherwise we can't do vector addition for SK1.
};

struct tmp_rj {
    bn_t vec_rj[kss];                                  //The rj-vector has size k.
};

struct c_attribute_K_Lin {
    uint32_t attr;
    g1_t c_2_mat[kss];                                 //Each CT_2 will be a vector of size k, since AWi yields a k*k matrix and that multiplied with a transposed vector of size k will yield a vector of size k.
};

struct master_key_k_lin {
    uint32_t N_ATTR;
    uint32_t N_SEC;
    struct k_lin_att *atts;                          //Set of matrices W_i, where the set-size is N_ATTR + 1, since W_0 = 0 and W_1,...,W_n is valid matrices of msk.
    bn_t *v_share;                                   //A vector v of size (k+1).
};

struct public_key_k_lin {
    uint32_t N_ATTR;
    uint32_t K_SEC;
    struct k_lin_mat *mats;                          //Set of matrices AW_i, where the set-size is N_ATTR + 1, since AW_0 = 0 by matrix multiplication of W_0 and AW_1,...,AW_n is valid matrices of mpk.
    g1_t *a_mat;                                     //The matrix A has size k*(k+1) and the entries are group1 elements raised to the power of the matrix-product AW_i of each component.
    gt_t *e_mat;                                     //Asymmetric mapping E = e([A]_1, [v]_2) = gt^Av = e(g,h)^Av which has size k, since Av yields a vector of size k. //TODO can't malloc gt_t as it gives a bus core seg fault.
};

struct secret_key_K_Lin {
    uint32_t N_ATTR;
    struct k_lin_secret_key * sk;                    //Set of secret key pairs (SK1,SK2) where sk1 is a vector of size k+1 and SK2 is a vector of size k.
};

struct sk_tmp_vj {
    uint32_t N_ATTR;
    uint32_t K_SEC;
    struct tmp_vj * vj;                              //Temporary set of vj vectors containing the j'th share of vector v. The set-size is j, where j=N_ATTR when the policy-tree only consists of AND gates. //TODO adjust for policy-trees with or gates as well.
    struct tmp_rj * rj;                              //Temporary set of rj vectors containing random bn_t values. The set-size is j, where j=N_ATTR when the policy-tree only consists of AND gates. //TODO adjust for policy-trees with or gates as well.
};

struct ciphertext_K_Lin {
    uint32_t N_ATTR;
    uint32_t K_SEC;
    gt_t M;                                         //This is the message M from the encryption algorithm, sets it to 1 for simplicity.
    g1_t *C_1;                                      //CT1 is a vector of size k+1 because the vector-matrix multiplication s^T*A yields a vector of size k+1
    struct c_attribute_K_Lin * C_2;                 //CT2 is a set of vectors where the set-size is based on #attributes where x_i = 1?
    gt_t C_3_one_val;                               //CT3 is a vector of size k+1 because of the cross-product of two vectors of size k+1 yields a vector of size k+1 //TODO cannot change like for C1 since it give a bus seg fault

};

int init_ciphertext_K_Lin(const uint32_t n_attr, const uint32_t kss, struct ciphertext_K_Lin *c);
int init_secret_key_K_Lin(const uint32_t n_attr, struct secret_key_K_Lin *s);
int init_sk_tmp_vj(const uint32_t n_attr, const uint32_t kss, struct sk_tmp_vj *v);
int init_master_key_k_lin(const uint32_t n_attr, const uint32_t kss, struct master_key_k_lin *m);
int init_public_key_k_lin(const uint32_t n_attr, const uint32_t kss, struct public_key_k_lin *p);


//Stuff used for KLin large universe



struct c_attribute_K_Lin_lu_c23 {
    uint32_t attr;
    g1_t c_2_vec[kss];                                                            //Each CT_2 will be a vector of size k, since AWi yields a k*k matrix and that multiplied with a transposed vector of size k will yield a vector of size k.
    g1_t c_3_vec[(2*kss)+1];
};


struct tmp_vj_lu {
    bn_t vec_j[(2*kss)+1];                                                           //The vj-vector will have size 2k+1 otherwise we can't do vector addition for SK1.
};

struct tmp_rj_lu {
    bn_t vec_rj[kss];                                                             //The rj-vector has size k.
};

struct si_lu {
    bn_t si_vec[kss];                                                             //The rj-vector has size k.
};

struct sk_tmp_vectors_lu {
    uint32_t N_ATTR;
    uint32_t K_SEC;
    struct tmp_vj_lu * vj;                                                     //Temporary set of vj vectors containing the j'th share of vector v. The set-size is j, where j=N_ATTR when the policy-tree only consists of AND gates. //TODO adjust for policy-trees with or gates as well.
    struct tmp_rj_lu * rj;                                                     //Temporary set of rj vectors containing random bn_t values. The set-size is j, where j=N_ATTR when the policy-tree only consists of AND gates. //TODO adjust for policy-trees with or gates as well.
};

struct tmp_si_lu {
    uint32_t N_ATTR;
    uint32_t K_SEC;
    struct si_lu * si;                                                     //Temporary set of vj vectors containing the j'th share of vector v. The set-size is j, where j=N_ATTR when the policy-tree only consists of AND gates. //TODO adjust for policy-trees with or gates as well.
};



struct k_lin_secret_key_lu_13 {
    uint32_t attr;
    g2_t sk_one[(2*kss)+1];                                                      //sk1 is a vector of size 2k+1
    g2_t sk_two[kss];                                                         //sk2 is a vector of size k
    g2_t sk_three[(2*kss)+1];                                                    //sk3 is a vector of size 2k+1 not exactly sure what rho(j)!=0 is and how it works for pure and gates
};

struct k_lin_secret_key_lu_4 {
    uint32_t attr;
    g2_t sk_four[(2*kss)+1];                                                     //sk4 is a vector of size 2k+1 and again not sure about rho(j)=0.
};



struct master_key_k_lin_lu {
    uint32_t N_ATTR;
    uint32_t N_SEC;
    bn_t *W_matrix;                                                          //w matrix of size (2k+1)*k
    bn_t *W0_matrix;                                                         //w0 matrix of size (2k+1)*k
    bn_t *W1_matrix;                                                         //w1 matrix of size (2k+1)*k
    bn_t *v_secret;                                                          //vector of secrets  of size 2k+1
};


struct public_key_k_lin_lu {
    uint32_t N_ATTR;
    uint32_t K_SEC;
    g1_t *A1_mat;                                                           //A1 matrix of size K*(2k+1)
    g1_t *AW_mat;                                                           //AW matrix of size k*K
    g1_t *AW0_mat;                                                          //AW0 matrix of size k*K
    g1_t *AW1_mat;                                                          //AW1 matrix of size k*K
    gt_t *e_mat;                                                            //e mapping vector of size k.
};


struct secret_key_K_Lin_lu {
    uint32_t N_ATTR;
    struct k_lin_secret_key_lu_13 * sk13;
    struct k_lin_secret_key_lu_4 * sk4;
};


struct ciphertext_K_Lin_lu {
    uint32_t N_ATTR;
    uint32_t K_SEC;
    gt_t M;                                                             //This is the message M from the encryption algorithm, sets it to 1 for simplicity.
    g1_t *C_1;                                                          //CT1 is a vector of size 2k+1 because the vector-matrix multiplication s^T*A yields a vector of size 2k+1
    struct c_attribute_K_Lin_lu_c23 * C_23;                            //CT2 is a set of vectors where the set-size is based on #attributes where x_i = 1?
    gt_t C_4_one_val;                                                   //CT4 one gt value.

};

int init_ciphertext_K_Lin_lu(const uint32_t n_attr, const uint32_t kss, struct ciphertext_K_Lin_lu *c);
int init_secret_key_K_Lin_lu(const uint32_t n_attr, struct secret_key_K_Lin_lu *s);
int init_sk_tmp_vectors_lu(const uint32_t n_attr, const uint32_t kss, struct sk_tmp_vectors_lu *v);
int init_master_key_k_lin_lu(const uint32_t n_attr, const uint32_t kss, struct master_key_k_lin_lu *m);
int init_public_key_k_lin_lu(const uint32_t n_attr, const uint32_t kss, struct public_key_k_lin_lu *p);
int init_tmp_si_lu(const uint32_t n_attr, const uint32_t kss, struct tmp_si_lu *si);

#endif
