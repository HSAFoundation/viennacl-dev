#ifndef VIENNACL_DEVICE_SPECIFIC_BUILTIN_DATABASE_DEVICES_GPU_FALLBACK_HPP_
#define VIENNACL_DEVICE_SPECIFIC_BUILTIN_DATABASE_DEVICES_GPU_FALLBACK_HPP_

/* =========================================================================
   Copyright (c) 2010-2015, Institute for Microelectronics,
                            Institute for Analysis and Scientific Computing,
                            TU Wien.
   Portions of this software are copyright by UChicago Argonne, LLC.

                            -----------------
                  ViennaCL - The Vienna Computing Library
                            -----------------

   Project Head:    Karl Rupp                   rupp@iue.tuwien.ac.at

   (A list of authors and contributors can be found in the manual)

   License:         MIT (X11), see file LICENSE in the base directory
============================================================================= */

#include "viennacl/device_specific/forwards.h"
#include "viennacl/device_specific/builtin_database/common.hpp"

#include "viennacl/device_specific/templates/vector_axpy_template.hpp"
#include "viennacl/device_specific/templates/reduction_template.hpp"
#include "viennacl/device_specific/templates/matrix_axpy_template.hpp"
#include "viennacl/device_specific/templates/row_wise_reduction_template.hpp"
#include "viennacl/device_specific/templates/matrix_product_template.hpp"

namespace viennacl{
namespace device_specific{
namespace builtin_database{
namespace devices{
namespace gpu{
namespace fallback{

inline void add_4B(database_type<vector_axpy_template::parameters_type> & db)
{
  db.add_4B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", vector_axpy_template::parameters_type(1,128,128,FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_4B(database_type<reduction_template::parameters_type> & db)
{
  db.add_4B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", reduction_template::parameters_type(1,128,128,FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_4B(database_type<matrix_axpy_template::parameters_type> & db)
{
  db.add_4B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", matrix_axpy_template::parameters_type(1,8,8,8,8,FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_4B(database_type<row_wise_reduction_template::parameters_type> & db, char_to_type<'N'>)
{
  db.add_4B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", row_wise_reduction_template::parameters_type(1,1,128,128, FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_4B(database_type<row_wise_reduction_template::parameters_type> & db, char_to_type<'T'>)
{
  db.add_4B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", row_wise_reduction_template::parameters_type(1,1,128,128, FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_4B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'N'>, char_to_type<'N'>)
{
  db.add_4B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", matrix_product_template::parameters_type(1,8,8,8,4,4,4,FETCH_FROM_LOCAL,FETCH_FROM_LOCAL,8,8));
}

inline void add_4B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'T'>, char_to_type<'N'>)
{
  db.add_4B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", matrix_product_template::parameters_type(1,8,8,8,4,4,4,FETCH_FROM_LOCAL,FETCH_FROM_LOCAL,8,8));
}

inline void add_4B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'N'>, char_to_type<'T'>)
{
  db.add_4B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", matrix_product_template::parameters_type(1,8,8,8,4,4,4,FETCH_FROM_LOCAL,FETCH_FROM_LOCAL,8,8));
}

inline void add_4B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'T'>, char_to_type<'T'>)
{
  db.add_4B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", matrix_product_template::parameters_type(1,8,8,8,4,4,4,FETCH_FROM_LOCAL,FETCH_FROM_LOCAL,8,8));
}


inline void add_8B(database_type<vector_axpy_template::parameters_type> & db)
{
  db.add_8B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", vector_axpy_template::parameters_type(1,128,128,FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_8B(database_type<reduction_template::parameters_type> & db)
{
  db.add_8B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", reduction_template::parameters_type(1,128,128,FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_8B(database_type<matrix_axpy_template::parameters_type> & db)
{
  db.add_8B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", matrix_axpy_template::parameters_type(1,8,8,8,8,FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_8B(database_type<row_wise_reduction_template::parameters_type> & db, char_to_type<'N'>)
{
  db.add_8B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", row_wise_reduction_template::parameters_type(1,1,128,128, FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_8B(database_type<row_wise_reduction_template::parameters_type> & db, char_to_type<'T'>)
{
  db.add_8B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", row_wise_reduction_template::parameters_type(1,1,128,128, FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_8B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'N'>, char_to_type<'N'>)
{
  db.add_8B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", matrix_product_template::parameters_type(1,8,8,8,4,4,4,FETCH_FROM_LOCAL,FETCH_FROM_LOCAL,8,8));
}

inline void add_8B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'T'>, char_to_type<'N'>)
{
  db.add_8B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", matrix_product_template::parameters_type(1,8,8,8,4,4,4,FETCH_FROM_LOCAL,FETCH_FROM_LOCAL,8,8));
}

inline void add_8B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'N'>, char_to_type<'T'>)
{
  db.add_8B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", matrix_product_template::parameters_type(1,8,8,8,4,4,4,FETCH_FROM_LOCAL,FETCH_FROM_LOCAL,8,8));
}

inline void add_8B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'T'>, char_to_type<'T'>)
{
  db.add_8B(unknown_id, CL_DEVICE_TYPE_GPU, unknown, "", matrix_product_template::parameters_type(1,8,8,8,4,4,4,FETCH_FROM_LOCAL,FETCH_FROM_LOCAL,8,8));
}


}
}
}
}
}
}


#endif
