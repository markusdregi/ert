#ifndef __GEN_DATA_H__
#define __GEN_DATA_H__
#ifdef __cplusplus
extern "C" {
#endif

#include <gen_data_config.h>
#include <ecl_sum.h>
#include <enkf_macros.h>
#include <ecl_file.h>
#include <buffer.h>

typedef struct gen_data_struct gen_data_type;

void          	         gen_data_ecl_load(gen_data_type * , const char *  ,  const ecl_sum_type * , const ecl_file_type * , int );
gen_data_type 	       * gen_data_alloc(const gen_data_config_type *);
void          	         gen_data_free(gen_data_type * );
double                   gen_data_iget_double(const gen_data_type * , int );
gen_data_config_type   * gen_data_get_config(const gen_data_type * );
int                      gen_data_get_size(const gen_data_type * );
double                   gen_data_iget_double(const gen_data_type * , int );
void                     gen_data_ecl_write(const gen_data_type * gen_data , const char * run_path , const char * eclfile , fortio_type * fortio);
const char  *            gen_data_get_key( const gen_data_type * gen_data);
void                     gen_data_upgrade_103(const char * filename);


SAFE_CAST_HEADER(gen_data);
VOID_USER_GET_HEADER(gen_data);
VOID_ALLOC_HEADER(gen_data);
VOID_FREE_HEADER(gen_data);
VOID_FREE_DATA_HEADER(gen_data);
VOID_REALLOC_DATA_HEADER(gen_data);
VOID_COPYC_HEADER      (gen_data);
VOID_FWRITE_HEADER (gen_data)
VOID_FREAD_HEADER  (gen_data)
VOID_ECL_WRITE_HEADER(gen_data);
VOID_ECL_LOAD_HEADER(gen_data);
VOID_SERIALIZE_HEADER(gen_data);
VOID_DESERIALIZE_HEADER(gen_data);
VOID_INITIALIZE_HEADER(gen_data);
VOID_LOAD_HEADER(gen_data);
VOID_STORE_HEADER(gen_data);

#ifdef __cplusplus
}
#endif
#endif
