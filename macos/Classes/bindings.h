#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
typedef struct _Dart_Handle* Dart_Handle;

typedef struct DartCObject DartCObject;

typedef int64_t DartPort;

typedef bool (*DartPostCObjectFnType)(DartPort port_id, void *message);

typedef struct wire_uint_8_list {
  uint8_t *ptr;
  int32_t len;
} wire_uint_8_list;

typedef struct DartCObject *WireSyncReturn;

void store_dart_post_cobject(DartPostCObjectFnType ptr);

Dart_Handle get_dart_object(uintptr_t ptr);

void drop_dart_object(uintptr_t ptr);

uintptr_t new_dart_opaque(Dart_Handle handle);

intptr_t init_frb_dart_api_dl(void *obj);

void wire_new_descriptor__static_method__Api(int64_t port_,
                                             int32_t network,
                                             struct wire_uint_8_list *mnemonic);

void wire_blinding_key__static_method__Api(int64_t port_, struct wire_uint_8_list *wallet_id);

void wire_new_wallet__static_method__Api(int64_t port_,
                                         int32_t network,
                                         struct wire_uint_8_list *db_path,
                                         struct wire_uint_8_list *descriptor);

void wire_sync__static_method__Api(int64_t port_,
                                   struct wire_uint_8_list *wallet_id,
                                   struct wire_uint_8_list *electrum_url);

void wire_wallet_descriptor__static_method__Api(int64_t port_, struct wire_uint_8_list *wallet_id);

void wire_address_last_unused__static_method__Api(int64_t port_,
                                                  struct wire_uint_8_list *wallet_id);

void wire_address__static_method__Api(int64_t port_,
                                      struct wire_uint_8_list *wallet_id,
                                      uint32_t index);

void wire_validate_address__static_method__Api(int64_t port_,
                                               struct wire_uint_8_list *address_string);

void wire_address_from_script__static_method__Api(int64_t port_,
                                                  int32_t network,
                                                  struct wire_uint_8_list *script,
                                                  struct wire_uint_8_list *blinding_key);

void wire_balance__static_method__Api(int64_t port_, struct wire_uint_8_list *wallet_id);

void wire_txs__static_method__Api(int64_t port_, struct wire_uint_8_list *wallet_id);

void wire_build_lbtc_tx__static_method__Api(int64_t port_,
                                            struct wire_uint_8_list *wallet_id,
                                            uint64_t sats,
                                            struct wire_uint_8_list *out_address,
                                            float abs_fee);

void wire_build_asset_tx__static_method__Api(int64_t port_,
                                             struct wire_uint_8_list *wallet_id,
                                             uint64_t sats,
                                             struct wire_uint_8_list *out_address,
                                             float abs_fee,
                                             struct wire_uint_8_list *asset_id);

void wire_decode_tx__static_method__Api(int64_t port_,
                                        struct wire_uint_8_list *wallet_id,
                                        struct wire_uint_8_list *pset);

void wire_sign_tx__static_method__Api(int64_t port_,
                                      struct wire_uint_8_list *wallet_id,
                                      int32_t network,
                                      struct wire_uint_8_list *pset,
                                      struct wire_uint_8_list *mnemonic);

void wire_broadcast_tx__static_method__Api(int64_t port_,
                                           struct wire_uint_8_list *electrum_url,
                                           struct wire_uint_8_list *tx_bytes);

struct wire_uint_8_list *new_uint_8_list_0(int32_t len);

void free_WireSyncReturn(WireSyncReturn ptr);

static int64_t dummy_method_to_enforce_bundling(void) {
    int64_t dummy_var = 0;
    dummy_var ^= ((int64_t) (void*) wire_new_descriptor__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_blinding_key__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_new_wallet__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_sync__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_wallet_descriptor__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_address_last_unused__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_address__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_validate_address__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_address_from_script__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_balance__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_txs__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_build_lbtc_tx__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_build_asset_tx__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_decode_tx__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_sign_tx__static_method__Api);
    dummy_var ^= ((int64_t) (void*) wire_broadcast_tx__static_method__Api);
    dummy_var ^= ((int64_t) (void*) new_uint_8_list_0);
    dummy_var ^= ((int64_t) (void*) free_WireSyncReturn);
    dummy_var ^= ((int64_t) (void*) store_dart_post_cobject);
    dummy_var ^= ((int64_t) (void*) get_dart_object);
    dummy_var ^= ((int64_t) (void*) drop_dart_object);
    dummy_var ^= ((int64_t) (void*) new_dart_opaque);
    return dummy_var;
}
